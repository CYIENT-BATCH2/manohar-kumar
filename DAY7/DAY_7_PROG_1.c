//Write a program to convert a data stream from Little Endian to Big Endian

#include<stdio.h>
int main()
{
    unsigned int number,nibble1,nibble2;                //declaration of variables
    printf("enter the 8 bit number:\n");
    scanf("%X",&number);                                //reading the hexa decimal number
    printf("little endian number = %X\n",number);       
    if(number<256)                                      //checking the number is 8 bit value or not
    {
    nibble1=number>>4;
    nibble2=number<<4;                                  /* logic for converting little endian to big endian */
    
    number=(nibble1|nibble2)&255;
    
    printf("big endian number = %X",(number&255));      //printing the big endian number
    }
    else
    {
    printf("enter 8 bit number only(0 to 255)");       
    }
}
