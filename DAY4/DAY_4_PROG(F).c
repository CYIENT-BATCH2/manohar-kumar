#include<stdio.h>
int main()
{
	int i=10,j=2,k;
	k=i<<j;
	printf("k=%d\n",k);
	k=i>>j;
	printf("k=%d\n",k);
	k=(i&&j)<<j;
	printf("k=%d\n",k);
	k=(i||j)>>j;
	printf("k=%d\n",k);
	k=(i&j)<<i;
	printf("k=%d\n",k);
	k=(i||j&&i);
	printf("k=%d\n",k);
}