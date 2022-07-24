//Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.
//II). Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3

#include<stdio.h>
int main()
{
    int number,i,number1,number2;                                       //declaration of variables
    printf("enter the T0CON register value:\n");
    scanf("%d",&number);                                                //reading the T0CON register value
    if((number>=0)&&(number<=255))                                      //checking the number is 8 bit number or not
    {
    printf("T0CON = ");
    for(i=7;i>=0;i--)                                                   //loop for printing the T0CON register bits
    {
        printf("%d",(number>>i)&1);                                     //printing the T0CON register bits
    }
    printf("\n");
    number1=number;
    number1=(number|136);                                               //setting the bits TMR0ON and PSA
    printf("after setting TMR0ON and PSA bits, T0CON = ");
    for(i=7;i>=0;i--)                                                   //loop for printing the T0CON register bits after setting the TMR0ON and PSA bits
    {
        printf("%d",(number1>>i)&1);                                    //printing the T0CON register bits  
    }
    printf("\n");
    if(number==243)                                                    //checking the register value is equal to 0XF3
    {
       number2=number&7;                                               //finding the value of T0PS2, T0PS1, T0PS0 bits
       printf("value of T0PS2, T0PS1, T0PS0 bits = %d\n",number2);     //finding the value of T0PS2, T0PS1, T0PS0 bits
    }
    else
    printf("T0CON register value is not equal to 0xF3");               //printing the value is not equal to 0xF3
    }
    else
    printf("enter the byte value(0 to 255)");        
}