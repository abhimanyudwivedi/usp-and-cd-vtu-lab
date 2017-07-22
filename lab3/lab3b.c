#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

char buf[50];

int main()
{
	int fd;
	struct flock s;
	fd = open("file1",O_RDWR);
	s.l_type = F_WRLCK;
	s.l_whence = SEEK_END;
	s.l_start = -100;
	s.l_len = 100;
	while(fcntl(fd,F_SETLK,&s)==-1)
	{
		fcntl(fd,F_GETLK,&s);
		printf("the file has been locked by %d\n",s.l_pid);
		sleep(1);
	}
	printf("the lock has been acquired\n");
	lseek(fd,-50,SEEK_END);
	read(fd,&buf,50);
	printf("last 50 bytes :\n%s\n",buf);
	s.l_type = F_UNLCK;
	printf("released\n");
	fcntl(fd,F_SETLK,&s);
	return;
}
