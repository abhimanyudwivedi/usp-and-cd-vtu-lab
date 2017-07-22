#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int pid;
	pid = fork();
	if(pid==0)
	{
		printf("child process \nmy id = %d\tpapa id= %d\n",getpid(),getppid());
		pid = fork();
		if(pid>0)
		exit(1);
		sleep(2);
		printf("second child\nmy id=%d\tpapa id=%d\n",getpid(),getppid());
	}
	waitpid(pid,0);
	return 0;
}
