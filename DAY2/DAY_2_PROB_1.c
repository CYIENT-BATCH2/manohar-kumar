#include<stdio.h>
int main(){
	long int num;
	long int rem,sum=0;
	printf("enter the mobile number\n");
	fflush(stdout);
	scanf("%ld",&num);
	label:
	if(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		goto label;
	}
	printf("sum=%ld",sum);
}
