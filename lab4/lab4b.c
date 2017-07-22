#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argc,char **argv)
{
	char buf[20];
	int fd;
	fd = open(argv[1],O_RDONLY);
	read(fd,&buf,14);
	printf("message : \n %s",buf);
	return;
}
