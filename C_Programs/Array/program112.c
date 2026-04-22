#include<stdio.h>

void Display(int *ptr)    //issue(logical)
{
    int iCnt=0;

    for(iCnt=0;iCnt<4;iCnt++)
    {
        printf("%d\n",*ptr);   //will print 10 for each iteration
    }
}

int main()
{
    int Arr[]={10,20,30,40};
   
    Display(Arr);            //Display(100) //we are passing base address
    return 0;
}