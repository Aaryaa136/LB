#include<stdio.h>
#include<stdbool.h>

void CountAll(char str[])
{
    int iCountSmall=0 ;
    int iCountCapital=0;
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))              
        {
            iCountCapital++;
        }
        else
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Number of small characters:%d\n",iCountSmall);
    printf("Number of capital character:%d\n",iCountCapital);
}       

int main()      
{                           
    char Arr[50]={'\0'};
    bool bRet=false;

    printf("Enter string: \n");     
    scanf("%[^'\n']s",Arr);     
                         
    CountAll(Arr);

    return 0;
}                               
