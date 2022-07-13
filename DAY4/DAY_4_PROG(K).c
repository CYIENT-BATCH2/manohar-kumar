#include <stdio.h>
int main() 
{
    int int_type;
    float float_type;
    double double_type;
    char char_type;
    printf("Value of integer is     %d \n",sizeof(int));
    printf("Value of float is       %d \n",sizeof(float));
    printf("Value of double is      %d \n",sizeof(double));
    printf("Value of character is   %d \n\n",sizeof(char));
    
    printf("Value of int_data type is       %d \n",sizeof(int_type));
    printf("Value of float_data type is     %d \n",sizeof(float_type));
    printf("Value of double_data type is    %d \n",sizeof(double_type));
    printf("Value of char_data type is      %d \n",sizeof(char_type));
    
}