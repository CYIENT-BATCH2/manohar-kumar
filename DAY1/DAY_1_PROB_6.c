#include <stdio.h> 
int main() 
{ 
    int a,b,c,d,e,f,g,h,i,temp=0;
    printf("Enter the numbers :\n"); 
    scanf("%d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i); 
    loop:
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
        goto loop;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
        goto loop;
    }
    if(c>d)
    {
        temp=c;
        c=d;
        d=temp;
        goto loop;
    }
    if(d>e)
    {
        temp=d;
        d=e;
        e=temp;
        goto loop;
    }
    if(e>f)
    {
        temp=e;
        e=f;
        f=temp;
        goto loop;
    }
    if(f>g)
    {
        temp=f;
        f=g;
        g=temp;
        goto loop;
    }
    if(g>h)
    {
        temp=g;
        g=h;
        h=temp;
        goto loop;
    }
    if(h>i)
    {
        temp=h;
        h=i;
        i=temp;
        goto loop;
    }
    printf("The numbers in asscending order are %d %d %d %d %d %d %d %d %d\n", a,b,c,d,e,f,g,h,i);
   return 0; 
} 