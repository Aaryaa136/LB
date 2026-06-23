#include<stdio.h>

int main()
{
    char Name[50]={'\0'};

    printf("Enter your Name: \n");
    scanf("%s",Name);                        //Name=&Name (as it is an array)
        
    printf("Hello: %s",Name);

    return 0;
}                               
