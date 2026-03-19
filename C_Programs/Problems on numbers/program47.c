#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;

    for(iCnt=1 ; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}


int main()
{
    int iValue1=0;

    printf("Enter first number:");
    scanf("%d",&iValue1);

    DisplayFactors(iValue1);

    return 0;
}