
/* Problem - Assume that we have a car with 8 seats, and we are monitoring 8 seat belt status in a variable “G_Msg_switchstatus_Byte[]” as shown in pic1. 
Each switch status is combination of 2 bits as shown in pic2.
Write status of switches into variable “G_Msg_switchstatus_Byte[]” as below.
SWITCH1, SWITCH7 status is “faulty type 1 in switch”, SWITCH2, SWITCH5 status is ”switch unbuckle”, SWITCH3, SWITCH6 status is “switch buckle”, SWITCH4, 
SWITCH0 status is “faulty type 2 in switch” without disturbing the other bits 
Switch status valueMeaning
00Fault type 1 in switch
01switch is buckle
10switch is unbuckle
11Fault type 2 in switch

ALGORITHM
1.Start 
2. The values of various switch status and fault status of various switch are given
the array is also with size 3
3. using the  bitwise operation we can store the elements in the array index
also print the binary value of all the array 
4.Stop

Input and Output : The elements of the array  G_Msg_switchstatus_Byte are :
The decimal value of index G_Msg_switchstatus_Byte[0] is 12
The decimal value of index G_Msg_switchstatus_Byte[0] is 0 0 0 0 1 1 0 0 
The decimal value of index G_Msg_switchstatus_Byte[1] is 158
The decimal value of index G_Msg_switchstatus_Byte[1] is 1 0 0 1 1 1 1 0 
The decimal value of index G_Msg_switchstatus_Byte[2] is 64
The decimal value of index G_Msg_switchstatus_Byte[2] is 0 1 0 0 0 0 0 0 
*/

#include <stdio.h>
int main() 
{
    int G_Msg_switchstatus_Byte[3], i;           //array declaration with 3 value index starts from 0 to 2
    //declaration of the varaiables  and declaration like swich cases or condition and conditon  
    int Fault_type1_switch = 0;                 
    int switch_buckle = 1;
    int switch_unbuckle = 2;
    int Fault_type2_switch = 3;
    int switch_0_status = Fault_type2_switch;   
    int switch_1_status = Fault_type1_switch;
    int switch_2_status = switch_unbuckle;
    int switch_3_status = switch_buckle;
    int switch_4_status = Fault_type2_switch;
    int switch_5_status = switch_unbuckle;
    int switch_6_status = switch_buckle;
    int switch_7_status = Fault_type1_switch;
    //using the bitwise operation performing the operation which has given in question
    G_Msg_switchstatus_Byte[0] = (0 | (switch_1_status << 0) | (switch_0_status << 2 ));  
    G_Msg_switchstatus_Byte[1] = (0 |(switch_2_status << 6) | (switch_3_status << 4) | (switch_4_status << 2) | (switch_5_status)); 
    G_Msg_switchstatus_Byte[2] = (0| (switch_6_status << 6) | (switch_7_status <<4));
    //after the perform the operation set particular bits with the switch status printing the values of each array index in decimal and binary form using the below logic
    printf("The elements of the array  G_Msg_switchstatus_Byte are :\n");
    for(i =0; i< 3; i++)
    {
        printf("The decimal value of index G_Msg_switchstatus_Byte[%d] is %d\n", i, G_Msg_switchstatus_Byte[i]);
        printf("The decimal value of index G_Msg_switchstatus_Byte[%d] is ", i);
        for(int j=7; j >=0; j--)
        {
            printf("%d ",(G_Msg_switchstatus_Byte[i] >> j) & 1 );
        }
        printf("\n");
    }
    return 0;
}