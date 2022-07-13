#include<stdio.h>
int main()
{
	long int binary,hex=0,i=1,rem;
		printf("enter the binary num\n");
		fflush (stdout);
		scanf("%ld",&binary);
		label:
		if(binary!=0)
		{
			rem=binary%10;
			hex=hex+rem*i;
			i=i*2;
			binary=binary/10;
			goto label;
		}
		printf("value=%lx\n",hex);
		printf("value=%ld",hex);
	}
