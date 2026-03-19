#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt=0;           
    int iFrequency=0;      

    //updator
    if(iNo<0)           
    {
        iNo=-iNo;
    }

    for(iCnt=2; iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }

    if(iFrequency == 0)   //no factor
    {
        return true;
    }
    else                  //atleast one factor
    {
        return false;
    }
}

//Tc:O(n/2)

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);

    if(bRet==true)
    {
        printf("%d is a prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }

    return 0;
}