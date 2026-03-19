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
            break;             //optimization due to break
        }
    }

    if(iFrequency == 0)      //nofactors 
    {
        return true;
    }
    else                    //atleast one factor
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);

    if(bRet==true)
    {
        printf("%d is a prime numeber\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }

    return 0;
}

//Time complexity for prime:O(N/2)
//Time complexity for non prime:either 1 or 2   
