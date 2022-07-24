//Write a code to swap even bits with odd bits in unsigned long variable(uint64).


#include <stdio.h>

int main()
{
    unsigned long int number,number1,number2;           //declaration of variables
    int i;
    printf("enter the number:\n");
    scanf("%ld",&number);                               //read number
    printf("Before swapping the bits -> %ld = ",number);
    for(i=63;i>=0;i--)                                  //loop for printing the binary value
    {
        printf("%ld",((number>>i)&1));                  //printing binary value
    }
    printf("\n");
    number1=number;
    number2=number;
    number1=((number & 0Xaaaaaaaaaaaaaaaa)>>1);         //swapping odd bits with even bits
    number2=((number & 0x5555555555555555)<<1);         //swapping even bits with odd bits
    number=number1|number2;                             //final value after swapping the even and odd bits
    printf("After swapping the bits --> %ld = ",number);
    for(i=63;i>=0;i--)                                  //loop for printing the binary value
    {
        printf("%ld",((number>>i)&1));                  //printing binary value
    }
    
}