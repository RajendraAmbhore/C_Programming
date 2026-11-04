/*
---------------------------------------------------------------------------------
       Write a program which accept name from user and print that name. 
---------------------------------------------------------------------------------            
            Input  : Raju Ambhore
            Output : Raju Ambhore
--------------------------------------------------------------------------------- 
*/


#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name :\n");
    scanf("%[^'\n']s",Name);

    printf("Your name is %s",Name);

    return 0;
}