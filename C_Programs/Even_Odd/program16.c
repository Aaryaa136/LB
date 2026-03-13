//////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////

#include<stdio.h>                   //for input output
#include<stdbool.h>                 //for bool output

//////////////////////////////////////////////////////////
//
//  Function Name:  CheckEvenOdd
//  Description:    It is used to check even and odd
//  Input:          Integer
//  Output:         Boolean
//  Author:         Aaryaa Nandkumar Patil
//  Date:           10/10/2025
//
//////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem=iNo%2;

    if(iRem == 0)
    {  return true; } 
    else
    {  return false; }
}

//////////////////////////////////////////////////////////
//
//  Entry Point Function of the application
//
//////////////////////////////////////////////////////////


int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);
    
    if(bRet==true)
    {  printf("%d is even number\n",iValue); }
    else
    {  printf("%d is odd number\n",iValue);  }

    return 0;
}