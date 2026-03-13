/*
    Start
        Accept number and store at no
        Divide no by 2
        If remainder is zero 
            then display even
        Otherwise
            display odd
    Stop
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem=iNo%2;

    if(iRem == 0)
    {
        printf("It is even number");
    } 
    else
    {
        printf("It is odd number");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}