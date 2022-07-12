#include<stdio.h>
int main()
{
	long int rem,num,cnt=0;
	printf("enter the lottery tickets\n");
	fflush (stdout);
	scanf("%ld",&num);
	label:
	if(num!=0)
	{
		rem=num%10;
		if(rem==3)
			cnt++;
		num/=10;
		goto label;
	}

	if(cnt>0)
		printf("%ld",cnt);

}