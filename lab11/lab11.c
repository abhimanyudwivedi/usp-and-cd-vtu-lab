#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char input[60],stmt[3][60];
int i,j,len,cur;

void gen()
{
	int l1=101,l2=102,l3=103;
	printf("if %s GOTO %d\n",stmt[0],l1);
	printf("GOTO %d\n",l2);
	printf("%d : %s\n",l1,stmt[1]);
	if(cur<3)
		printf("%d : STOP\n",l2);
	else
	{
		printf("GOTO %d\n",l3);
		printf("%d : %s\n",l2,stmt[2]);
		printf("%d : STOP\n",l3);		
	}
	
}

int main()
{	
	printf("THE FORMAT\n");
	printf("if(a<b)then(s=a);\n");
	printf("if(a<b)then(s=a)else(s=b);\n");
	printf("enter the input\n");
	scanf("%s",input);
	int index = 0;
	len = strlen(input);
	for(i=0;i<len && input[i]!=';';i++)
	{
		if(input[i] == '(')
		{	index=0;
			for(j=i;input[j-1]!=')';j++)
			stmt[cur][index++] = input[j];
			cur++;
			i=j;
		}
	}
	gen();
	return;
}
