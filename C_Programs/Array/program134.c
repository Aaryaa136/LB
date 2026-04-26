#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int main()
{
    int iLength=0 , iCnt=0;       //auto storage class
    IPTR iPtr=NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iLength);

    //step 1: Allocate the memory
    iPtr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the values:\n");

    for(iCnt=0 ; iCnt<iLength ;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    //step 2:  Use the memory
    //call to the function which contains business logic (call by address)
    //Fun(iPtr,iLength);

    //step 3: Free the memory
    free(iPtr);

    return 0;
}