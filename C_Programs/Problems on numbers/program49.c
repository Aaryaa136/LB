#include<stdio.h>

void NonDisplayFactors(int iNo)
{
    int iCnt=0;

    //updator
    if(iNo < 0)
    {
        iNo= -iNo;
    }

    for(iCnt=1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

//Time Complexity: O(N)

int main()
{
    int iValue1=0;

    printf("Enter first number:");
    scanf("%d",&iValue1);

    NonDisplayFactors(iValue1);

    return 0;
}