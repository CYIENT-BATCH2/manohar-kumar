#include <stdio.h>
int main() {
    int x=10,y=20,z;
    printf("value of z=%d\n",x<y);
    printf("value of z=%d\n", x>y);
    printf("value of z=%d\n",x<=y);
    printf("value of z=%d\n",(x*x-y)>(y*y-x));
    printf("value of z=%d",(x*x*x)<(y*x*x));
    printf("value of z=%d",((x*y)!=(y*x)));
    printf("value of z=%d",((x*y)==(y*x)));
    return 0;
}
