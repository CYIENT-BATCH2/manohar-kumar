#include<stdio.h>
int  main()
{
	int n,hs;
	printf("enter the number of students\n");
	fflush(stdout);
	scanf("%d",&n);
	hs=n*(n-1);
	printf("Total no.of handshake is %d",hs);
}