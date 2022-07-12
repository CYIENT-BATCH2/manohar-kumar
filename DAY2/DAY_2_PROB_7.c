#include<stdio.h>
int main()
{
	int year;
	for(year=1990;year<=2022;year++)
	{
		if(year%4==0 && year%100!=0 || year%400==0)
			printf("%d ",year);
	}
}