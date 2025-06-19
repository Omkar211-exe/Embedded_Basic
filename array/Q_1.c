//Examine an array expected to contain consecutive integers from 1 to 500.
//Identify any integer that is missing from this sequence.

#include <stdio.h>
#define RANGE 500
int main()
{
    int array[RANGE]={1,2,3,4,5,7,8,9,10};
    for (int i=0 ; i<RANGE ; i++)
    {
        if (array[i]+1 != array[i+1])
        {
            printf("%d is not present in the array.",array[i]+1);
            break;
        }
    }
    return 0;
}
