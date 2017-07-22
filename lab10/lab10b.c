#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void handler(int s)
{
	printf("signal recieved was %d\n",s);
	alarm(3);
}

int main()
{
	int a=0;
	signal(SIGALRM,handler);
	alarm(5);
	for(;;)
	{
	printf("%d\n",++a);
	sleep(1);
	}
return;
}
