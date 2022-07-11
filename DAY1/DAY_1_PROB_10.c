#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("Enter the weight of person a:");
    scanf("%d",&a);
    printf("Enter the weight of person b:");
    scanf("%d",&b);
    printf("Enter the weight of person c:");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
      printf("Weight of person a is highest:%d",a);  
    }
    if(b>a&&b>c)
    {
       printf("Weight of person b is highest:%d",b); 
    }
    if(c>a&&c>b)
    {
       printf("Weight of person c is highest:%d",c); 
    }
    return 0;
}