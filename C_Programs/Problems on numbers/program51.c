#include<stdio.h>

int CountFactors(int iNo)
{
    int iCnt=0;           //loop counter
    int iFrequency=0;     //count number of factors 

    //updator
    if(iNo<0)           //if negative convert into positive 
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;    
        }
    }

    return iFrequency;
}

//Tc:O(N/2)

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    iRet=CountFactors(iValue);

    printf("Number of factors are:%d",iRet);

    return 0;
}