#include<stdio.h>
int main()
{
    int i;
    printf("enter number\n");
    scanf("%d",&i);
    if((i%11)==0||(i%11)==1)
    {
        printf("SPECIAL");
    }
        else
        printf("NOT SPECIAL");
}
