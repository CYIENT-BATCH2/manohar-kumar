#include <stdio.h>
int main()
{
   float cel, fahr;
   printf("Enter Fahrenheit value: ");
   scanf("%f", &fahr);
   cel = ((5.0/9.0) * (fahr - 32)) ;
   printf("Celsius value = %.2f\n", cel);
   return 0;
}