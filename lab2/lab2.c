#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L

#include<stdio.h>
#include<unistd.h>

int main()
{
	#ifdef _POSIX_JOB_CONTROL
		printf("job control is supported\n");
	#else
		printf("Job control is not supported\n");
	#endif
	
	#ifdef _POSIX_SAVED_IDS
		printf("saved uid and gid are supported\n");
	#else
		printf("saved uid and gid are not supported\n");
	#endif
	
	#ifdef _POSIX_CHOWN_RESTRICTED
		printf("chown restricted option is%d\n",_POSIX_CHOWN_RESTRICTED);
	#else
		printf("restriction option is not supported\n");
	#endif
	
	#ifdef _POSIX_VDISABLE
		printf("disable char for terminal is %d\n",_POSIX_VDISABLE);
	#else
		printf("not supported\n");
	#endif
	
	#ifdef _POSIX_NO_TRUNC
		printf("NO trunc option is %d\n",_POSIX_NO_TRUNC);
	#else
		printf("not supported\n");
	#endif
}
