#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd;
	struct flock p;
	fd = open("file1",O_RDWR);
	p.l_type = F_WRLCK;
	p.l_whence = SEEK_END;
	p.l_start = -100;
	p.l_len = 100;
	fcntl(fd,F_SETLK,&p);
	sleep(12);
	p.l_type=F_UNLCK;
	fcntl(fd,F_SETLK,&p);
	printf("The lock has been released\n");
return;	
}
