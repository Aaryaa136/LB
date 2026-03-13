#include<stdio.h>

int main()
{
    int i=0 , j=0 ,ans=0;      //dyanmic output   //cui-command user interactions
    
    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number:\n");
    scanf("%d",&j);

    ans=i+j;  //buisness logic

    printf("Addition is :%d\n",ans);

    return 0;
}