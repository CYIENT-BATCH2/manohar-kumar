#include<stdio.h>
int main()
{
	int i=10,j=20,k,l;
	k=i&&j;
	printf("k=%d\n",k);
	k=i||j;
	printf("k=%d\n",k);
	k=!i;
	printf("k=%d\n",k);
    j=0;
	k=i&&(j=20);
	printf("i=%d,j=%d,k=%d\n",i,j,k);
	k=i||(j=20);
	printf("i=%d,j=%d,k=%d\n",i,j,k);
	i=0,k=30;
	l=i||(j=20)&&k;
	printf("i=%d,j=%d,k=%d,l=%d\n",i,j,k,l);
}