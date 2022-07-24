/*Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are set to 0x06 in register “ADCON0”

Input : Please Enter the 1byte value for CMCON and ADCONO: 0X11 0X31
Output : Binary Representation of the CMCON value is the : 0 0 0 1 0 0 0 1 
         Binary Representation of the ADCONO value is the : 0 0 1 1 0 0 0 1 
         Binary Representation of the CMCON value after the set  given bits : 1 1 0 1 1 0 0 1 
         
Algorithm 
1.Start
2.Declare the variables 
3.Read the input from the user 
4.depend upon the ADCONO bits value have to perform the SET to the bits of CMCON 
5.Display the value 
6.Stop        
*/

#include <stdio.h> //Header file
int main() {
    char CMCON, ADCONO,res; //Varaible declaration 
    //read the inputs from the user
    printf("Please Enter the 1byte value for CMCON and ADCONO: ");
    scanf("%x%x", &CMCON, &ADCONO);
    printf("Binary Representation of the CMCON value is the : ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (CMCON >> i) & 1);
    }
     printf("\nBinary Representation of the ADCONO value is the : ");
    for(int i = 7; i >= 0; i--)
    {
        printf("%d ", (ADCONO >> i) & 1);
    }
    //logic to get particular bits is 0x06
    res = (ADCONO & 0x31);
    res = res >> 3;
    if(res == 0x06) //checking the using if condition is bits values equal to the given value
    {
       CMCON = CMCON | (1 << 3);
       CMCON = CMCON | (1 << 6);
       CMCON = CMCON | (1 << 7);
       printf("\nBinary Representation of the CMCON value after the set to bit given bits : ");
      for(int i = 7; i >= 0; i--)
     {
        printf("%d ", (CMCON >> i) & 1);
     }
    }
    else //print the below statement when the bits value not equal to the 0x06;
    {
        printf("\nThe bits CHS3, CHS2, CHS1 bits of register ADCON0 value is not equal to  0x06");
    }
}