#include<stdio.h>

//dynamic function
void Display(int iFrequency)
{
    int iCnt=0;
    
    //filter (if negative input)
    if(iFrequency<0)
    {
        printf("Invalid input");
        return ;
    }
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("Jay ganesh....\n");
    }
}

int main()
{
    int iCount =0;
    
    printf("Enter the frequnecy:\n");
    scanf("%d",&iCount);

    Display(iCount);  
    
    return 0;
}
