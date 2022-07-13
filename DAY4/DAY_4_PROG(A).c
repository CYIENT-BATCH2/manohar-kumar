#include<stdio.h>
int main()
{
	int x=30,y=20,z=10;
	int k;
	k=x+y*z/4%2-1;
	printf("k=%d\n",k);
	k=x%y+z*z;
	printf("k=%d\n",k);
	k=x*x-y/z;
	printf("k=%d\n",k);
	k=x+y/z-y;
	printf("k=%d\n",k);
	y=x+y-(x=y);
	printf("y=%d\n",y);
	/*y=x+y-x=y;
	printf("y=%d\n",y); 
	*/
}