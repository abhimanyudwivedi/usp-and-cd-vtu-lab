#include<stdio.h>
#include<unistd.h>
#include<sys/time.h>
#include<signal.h>

void handler(int s)
{
	printf("signal recieved is %d\n",s);
}

int main()
{	
	struct itimerval m;
	int a=0;
	signal(SIGALRM,handler);
	m.it_interval.tv_sec=3;
	m.it_interval.tv_usec=0;
	m.it_value.tv_sec=5;
	m.it_value.tv_usec=0;
	setitimer(ITIMER_REAL,&m,0);
	for(;;)
	{
		printf("%d\n",++a);
		sleep(1);
	}
return;
}
