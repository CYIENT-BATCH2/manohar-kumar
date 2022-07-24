/*Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position. 
Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value*/

#include <stdio.h>
int flip_bit_position(int byteval,int bitpos);      //function declaration
int main()
{
    int byteval,bitpos,i,result;                    //declaration of variables
loop: 
    printf("enter the byte value:\n");
    scanf("%d",&byteval);                           //reading input value(number)
    printf("enter the bit position:\n");
    scanf("%d",&bitpos);                            //reading the bit position
    printf("byte value = %d --> ",byteval);
    for(i=7;i>=0;i--)                               //loop for printing the binary value
    printf("%d",(byteval>>i)&1);                    //printing the binary value before complimenting(flip) the given bit
    printf("\n");
    if((byteval<=255)&&(bitpos<=7))                 //checking the byte value and bit postion
    {
    result=flip_bit_position(byteval,bitpos);       //function call and storing the result after complimenting(flip) the given bit
    printf("byte value = %d --> ",result);
    for(i=7;i>=0;i--)                               //loop for printing the binary value
    printf("%d",(result>>i)&1);                     //printing the binary value after complimenting(flip) the given bit 
    }
    else
    {
    printf("Byte value must less than 256 (0 to 255 ) and bit value must be less than 8 (0 to 7)\n");
    goto loop;
    }
}
int flip_bit_position(int byteval,int bitpos)       //function definition
{
    byteval=((1<<bitpos)^byteval);                  //logic for flip the bit in a given bit position
    return byteval;                                 //returning the bytevalue
}
