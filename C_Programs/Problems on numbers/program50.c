#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;

    //updator
    if(iNo < 0)
    {
        iNo= -iNo;
    }

    for(iCnt=1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

//Time Complexity: O(N/2)

int main()
{
    int iValue1=0;

    printf("Enter first number:");
    scanf("%d",&iValue1);

    DisplayFactors(iValue1);

    return 0;
}