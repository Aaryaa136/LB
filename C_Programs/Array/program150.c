#include<stdio.h>
#include<stdlib.h>

typedef  int* IPTR;

void ReverseDisplay(int Arr[],int iSize)
{
    int iCnt=0;

    for(iCnt=iSize-1 ; iCnt>=0 ; iCnt--)
    {
       printf("%d\n",Arr[iCnt]);
    }
}

int main()                                                                                                                          
{
    int iLength=0 , iCnt=0 ;
    IPTR iptr=NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iLength);

    //step1:Allocate the memory
    iptr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL==iptr)
    {
        printf("Unable to allocate the memory ");
    }

    printf("Enter the value\n");
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    //step2: Use the memory
    ReverseDisplay(iptr,iLength);

    //step 3:free the memory
    free(iptr);

    return 0;
}                                                                                               

                        