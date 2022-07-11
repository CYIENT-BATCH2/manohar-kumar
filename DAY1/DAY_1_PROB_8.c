#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    printf("The ASCII value of the character %c is %d",ch,ch);
    return 0;
}