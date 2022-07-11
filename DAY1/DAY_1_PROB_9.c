#include <stdio.h>
int main() 
{
    int a,b,AND,OR,NOT;
    printf("Enter a value as '0' or '1'\n");
    scanf("%d",&a);
    printf("Enter b value as '0' or '1'\n");
    scanf("%d",&b);
    AND= a && b;
    printf("The value of AND is %d\n",AND);
    OR= a || b;
    printf("The value of OR is %d\n",OR);
    NOT= !a;
    printf("The value of NOT is %d\n",NOT);
    return 0;
}