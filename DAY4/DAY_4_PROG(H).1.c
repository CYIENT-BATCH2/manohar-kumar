#include <stdio.h>
int main() 
{
    int i=10,j=2;
    printf("Enter the value of i and j\n");
    scanf("%d%d",&i,&j);
    if(i>j)
    {
    printf("%d is greater than %d",i,j);
    }
    else
    {
     printf(" %d is greater than %d",j,i);   
    }
}