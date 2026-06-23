#include<stdio.h>

int main()
{
    char Name[50]={'\0'};

    printf("Enter your Name: \n");
    scanf("%[^'\n']s",Name);               //regular expression - take input till \n doesnt come  [^:not]         
        
    printf("Hello: %s\n",Name);

    return 0;
}                               
