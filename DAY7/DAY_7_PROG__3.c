//Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”


#include <stdio.h>
int main()
{
    int number,number1,i;                           //declaration of variables
    printf("enter the number to set the bits in CMCON registor(8 bit)\n");	
    scanf("%d",&number);							              //Reading CMCON register						
    printf("enter the number to set the bits in ADCON0 registor(8 bit)\n");
    scanf("%d",&number1);                           //Reading ADCON0 register
   
    printf("the bits in CMCON : ");						 
    for(i=7;i>=0;i--)						                    //loop for printing the bit in CMCON register
    {
        printf("%d ",((number>>i)&1)); 				      //printing bits in CMCON register
    }
    printf("\n");
   
    
    printf("the bits in ADCON0 : ");					
    for(i=7;i>=0;i--)						                    //loop for printing binary value of ADCON0
    {
        printf("%d ",((number1>>i)&1));  			      //printing bits in ADCON0
    }
    printf("\n");
    
    
    if((number1 & 60) == 28)    				           //checking CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in ADCON0 register
    {
    {
        number=(number& (~15)); 				           //clearing the bits CIS,CM2,CM1,CM0
    }
    
    printf("After clearing the bits in CMCON : ");
    for(i=7;i>=0;i--)					                   	 //loop for printing the binary value
    {
        printf("%d ",((number>>i)&1));				     //printing the binary value of CMCON register
    }
    }
    else
    printf("CHS3,CHS2,CHS1,CHS0 bits are not set to 0x07");
}