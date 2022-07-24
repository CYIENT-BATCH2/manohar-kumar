/* 

Write a program to Implement ”Selection Sort” using Recursion for given elements 
INPUT : Enter the size of the list: 5
        Enter the elements in list: 10 5 2 50 8

OUTPUT : The sorted list in array elements is: 2  5  8  10  50

ALGORITHM 
1.Start 
2.Variable declaration 
3.read the inputs from the user
4.using the recursive function have to sort the array
5.using the elements1 > elements2 this logic have to do swapping if condition match 
6.recursively call the function again again to perform the operation
7.Stop
*/

#include <stdio.h>  //header file
void selection(int [], int, int, int, int); //Function prototype
int main()  //main function start from here
{
    int size, i, j;  				//variable declaration
    //read the value from the user
    printf("Enter the size of the list: ");	
    scanf("%d", &size);
    int num_array[size];      //array declaration
    //read the elemets from the user
    printf("Enter the elements in list :"); 
    for (i = 0; i < size; i++)
    {
        scanf("%d", &num_array[i]);
    }
    selection(num_array, 0, 0, size, 1);  //Selection function call
    printf("The sorted list in array elements is :");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", num_array[i]);
    }
    return 0;
}
void selection(int num_array[], int i, int j, int size, int flag)  //Function declaration actual logic of the sorting is inside of this function 
{
    int temp;
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (num_array[i] > num_array[j])
            {
                temp = num_array[i];
                num_array[i] = num_array[j];
                num_array[j] = temp;
            }
            selection(num_array, i, j+1, size, 0);
        }
        selection(num_array, i+1, 0, size, 1);
    }
}