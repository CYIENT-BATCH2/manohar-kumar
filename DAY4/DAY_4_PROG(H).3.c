#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    if(n>0)
    {
    printf("%d is Positive number",n);
    }
    else if(n<0)
    {
     printf(" %d is Negative number",n);   
    }
    else
    {
      printf(" %d is Neither Positive nor Negative number",n);     
    }
}