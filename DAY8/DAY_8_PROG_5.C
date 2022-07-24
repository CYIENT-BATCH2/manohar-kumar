//Write a program in C to sort an array using Pointer

#include <stdio.h>
int main()
{
    int size,temp,j,i;			              //decleration of variables
    printf("enter the size of array:\n"); 
    scanf("%d",&size);                    //reading the size of an array
    int a[size];
    printf("enter the array elements:\n");
    for(i=0;i<size;i++)                   //loop for scaning the array elements
    {
        scanf("%d",&a[i]);                //scaning array elements
    }
    printf("before sorting the array --> ");
    for(i=0;i<size;i++)                   //loop for printing the array elements before sorting
    {
        printf("%d ",a[i]);               //printing array elements before sorting
    }
    int *p=a;
    for(i=0;i<size;i++)                   //loop for traversing the array elements 
    {
        for(j=i+1;j<size;j++)             //loop for traversing the array elements
        {
            if(*(p+i)>*(p+j))             //checking small value in an array
            {
                temp=*(p+i);         
                *(p+i)=*(p+j);            /*logic for sorting the array*/ 
                *(p+j)=temp;        
            }
        }
    }
    printf("\n");
    printf("after sorting the array --> "); 
    for(i=0;i<size;i++)                   //loop for printing the array after sorting 
    {
    printf("%d ",*(p+i));                 //printing the array elements after sorting
    }
    
}