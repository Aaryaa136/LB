#include<stdio.h>
#include<stdlib.h>

typedef  int* IPTR;

int Minimum(int Arr[], int iSize)
{
    int iCnt=0 , iMin=0;                   
    
    for(iMin=Arr[iCnt],iCnt=0 ; iCnt<iSize ; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }

    return iMin;
}

int main()                                                                                                                          
{
    int iLength=0 , iCnt=0 , iRet=0;
    IPTR iptr=NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iLength);

    //step1:Allocate the memory
    iptr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL==iptr)
    {
        printf("Unable to allocate the memory ");
    }

    printf("Enter the value:\n");
    for(iCnt=0 ; iCnt<iLength ; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    //step2: Use the memory
    iRet=Minimum(iptr,iLength);

    printf("Minimum number is:%d",iRet);

    //step 3:free the memory
    free(iptr);

    return 0;
}                                                                                               

                        