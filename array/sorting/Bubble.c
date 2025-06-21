// bubble sort

#include<stdio.h>
#define MAX 9

void swap(int *num1 , int *num2)
{
    int temp = *num1;
    *num1=*num2;
    *num2=temp;
}

void sort(int array[MAX],int size)
{
    for (int i = 0; i < size - 1; i ++)
    {
        for (int j = 0; j < size - i -1; j++)
        {
            if(array[j]>array[j+1]) 
            {
                swap(&array[j],&array[j+1]);
            }
        }
    }
}

void printarray(int array[MAX],int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d ", array[i]);
    }
}

int main ()
{
    int array[MAX]={3,6,2,7,9,8,1,4,5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    printarray(array,size);

    return 0 ;
}
