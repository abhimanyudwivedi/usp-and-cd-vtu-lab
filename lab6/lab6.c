#include<stdio.h>
#include<unistd.h>

void disp(char *s)
{
	char *p,c;
	p = s;
	while(c=*p++)
	{
		putchar(c);
		fflush(stdout);
		sleep(1);
	}
	
}

int main()
{
	int pid;
	pid = fork();
	if(pid == 0)
	 disp("child\n");
	else
	 disp("parent\n");
	return;
}
