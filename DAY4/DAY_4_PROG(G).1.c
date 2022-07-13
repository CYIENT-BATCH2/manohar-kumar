#include <stdio.h>
int main() 
{
    int i=10,j=2,temp;
    printf("The value of i=%d and j=%d\n",i,j);
    temp=i;
    i=j;
    j=temp;
    printf("Updated value of i=%d and j=%d ",i,j);
}