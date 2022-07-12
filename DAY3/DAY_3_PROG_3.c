#include <stdio.h>
int main() {
    int n,d,sum=0;
    scanf("%d",&n);
    if((n<=999)&&(n>=100))
    {
while(n!=0){
    d=n%10;
    n/=10;
    sum=sum*10+d;
}
    }
    printf("%d",sum);
}
