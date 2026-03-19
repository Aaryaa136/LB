#include<stdio.h>

int main()
{
    int iValue1=0 , iValue2=0;
    
    printf("Enter first number:");
    scanf("%d",&iValue1);

    printf("Enter second number:");
    scanf("%d",&iValue2);

    if(iValue1 % iValue2 == 0)
    {
        printf("It is completely divisible");
    }
    else
    {
        printf("It is not divisible");
    }
    
    return 0;
}