#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc,char **argv)
{
	int fd;
	mkfifo(argv[1],0777);
	fd = open(argv[1],O_WRONLY);
	write(fd,"hello world!\n",14);
	return;
}

