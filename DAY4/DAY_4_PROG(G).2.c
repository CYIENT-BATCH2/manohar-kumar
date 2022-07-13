#include <stdio.h>
int main() 
{
    int i=10,j=2;
    printf("The value of i=%d and j=%d\n",i,j);
    i=i+j;
    j=i-j;
    i=i-j;
    printf("Updated value of i=%d and j=%d ",i,j);
}