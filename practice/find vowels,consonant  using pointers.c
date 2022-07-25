
#include <stdio.h>

void main()
{
    char c[20];
    scanf("%s",c);
   char  *p=c;
    if((*p=='a')||(*p=='i')||(*p=='o')||(*p=='u'))
    {
        printf("vowels");
    }
    else{
       printf ("consonant");
    }
}
