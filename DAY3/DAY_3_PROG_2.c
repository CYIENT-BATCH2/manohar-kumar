#include <stdio.h> 
int main() 
{ 
    int n, rem=0,sum,F, LS;
    printf("Enter five digit number n:\n"); 
    scanf("%d",&n); 
    F = n /10000;
        n = n / 10;
        LS = n % 10; 
    printf("first digit %d and last second digit %d\n", F , LS);
    sum=F+LS;
    printf("The sum of first and last second digit is %d\n",sum);
   return 0; 
} 
