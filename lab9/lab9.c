#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int mysystem(char *cmd)
{
	int status,pid;
	pid = fork();
	if(cmd == NULL)
		return 1;
	if(pid<0)
		return -1;
	if(pid == 0)
	{
		execl("/bin/sh","sh","-c",cmd,0);
		return 111;
	}
	if(pid>0)
	{
	waitpid(pid,&status,0);
	printf("system completed\n");
	}
	return status;
}

void main(int argc,char **argv)
{	
	int s,i;
	for(i=1;i<argc;i++)
	s = mysystem(argv[i]);
	switch(s)
	{
		case 1 : printf("NO commands given\n");
		break;
		case 111 : printf("exec failed\n");
		break;
		case -1 : printf("fork failed\n");
		break;
	}
return;
}
