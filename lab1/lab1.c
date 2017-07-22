#include<stdio.h>
#include<unistd.h>

int main()
{
	int res;
	if((res = sysconf(_SC_CLK_TCK)) == -1)
		printf("error\n");
	else
		printf("No. of clock ticks = %d\n",res);
	
	if((res = sysconf(_SC_CHILD_MAX)) == -1)
		printf("error\n");
	else
		printf("Maximum number of child processes = %d\n",res);
		
	if((res = pathconf("/",_PC_PATH_MAX)) == -1)
		printf("error\n");
	else
		printf("Maximum path length = %d\n",res);

	if((res = pathconf("/",_PC_NAME_MAX)) == -1)
		printf("error\n");
	else
		printf("Maximum No. of characters in a file name = %d\n",res);

	if((res = sysconf(_SC_OPEN_MAX)) == -1)
		printf("error\n");
	else
		printf("MAX No. of OPEN files AND processes = %d\n",res);
	
}
