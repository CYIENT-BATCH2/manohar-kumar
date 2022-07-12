#include<stdio.h>
int main() 
{ 
    int sum1=0,avg1=0;
    float sum2=0,avg2=0,B,A;
    int a,b,c,d,e,f,g,h;
    printf("Enter the integer values of a,b,c,d,e,f,g,h:\n"); 
    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h); 
    float i,j,k,l,m,n,o;
    printf("Enter the float values of i,j,k,l,m,n,o:\n"); 
    scanf("%f%f%f%f%f%f%f",&i,&j,&k,&l,&m,&n,&o); 
    sum1=a+b+c+d+e+f+g+h;
    sum2=i+j+k+l+m+n+o;
    avg1=sum1/2;
    avg2=sum2/2;
    A=sum1/sum2;
    B=avg1/avg2;
    printf("The sum of integer numbers is %d\n",sum1);
    printf("The sum of float numbers is %f\n",sum2);
    printf("The average of integer numbers is %d\n",avg1);
    printf("The average of float numbers is %f\n",avg2);
    printf("The sum of integer and sum of float is %f\n",A);
    printf("The average of integer and average of float is %f\n",B);
    printf("The float values of i,j,k,l,m,n,o to integer is %d%d%d%d%d%d%d\n",(int)i,(int)j,(int)k,(int)l,(int)m,(int)n,(int)o);
}
