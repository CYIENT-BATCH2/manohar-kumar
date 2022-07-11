#include <stdio.h>
int main() 
{
    int n,j=0,rev =0;
    printf("Enter the ten digit number\n");
    scanf("%d",&n);
    rev = n;
    if(n>1111111111&&n<9999999999)
{
   loop:if (n>0)
    {
        j=j*10+n%10;
        n=n/10;
        if(n>0)
        {
            goto loop;
        }
    }
}  
    if(rev==j)
    {
      printf("The number is pallindrome %d\n",rev);  
    }
    else 
    {
      printf("The number is not pallindrome");    
    }
}