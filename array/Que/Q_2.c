//Inspect the provided array. Determine if there's any integer that appears more 
//frequently than it should, signifying a duplicate. 

#include <stdio.h>
//#define MAX 100

void swap (int* num1 ,int* num2)
{
    int temp = *num2;
    *num2=*num1;
    *num1=temp;
}

void sort (int array[],int size)
{
    for (int i = 0 ; i < size-1 ; i++)
    {
        for ( int j = 0 ; j < size-1 ; j++)
        {
            if (array[j]>array[j+1])
            {
                swap(&array[j],&array[j+1]);
            }
        }
    }
}

void duplicate (int array[],int size)
{
    for (int i = 0 ; i < size-1 ; i++)
    {
        if (array[i] == array[i+1])
        {
            printf("%d is repeated once. \n", array[i]);
        }
    }
}

void printarray(int array[],int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main ()
{
    int array[] = {7, 12, 5, 3, 9, 12, 4, 8, 6, 3, 14, 10, 5, 2, 11, 8, 15, 9, 1, 6, 13, 14, 2, 10, 11, 7, 13, 4, 1};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    //printf("%d", size);
    printarray(array,size);
    duplicate(array,size);

    return 0;
}
