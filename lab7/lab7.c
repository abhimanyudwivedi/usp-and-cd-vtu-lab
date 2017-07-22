#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int pid;
	pid = fork();
	if(pid==0)
	{
		printf("i am child\n");
		printf("my id =%d\tparents id = %d\n",getpid(),getppid());
		exit(1);
	}
	else
	{
		sleep(5);
		printf("parent process\n");
		system("ps -l");
	}
return;
}
