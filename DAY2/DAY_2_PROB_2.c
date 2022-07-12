#include<stdio.h>
int  main()
{
	long int num,pos=7;
	printf("enter the values\n");
	fflush(stdout);
	scanf("%ld",&num);
	label:
	if(pos>=0)
	{
		printf("%ld",num>>pos&1);
		pos--;
		goto label;
    }
}