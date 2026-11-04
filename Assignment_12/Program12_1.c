/*
---------------------------------------------------------------------------------
            Write a program which accept number from user and display
            its digits in reverse order.
---------------------------------------------------------------------------------            
            Input  : 2395
            Output : 5
                     9
                     3
                     2

            Input  : 9000
            Output : 0
                     0
                     0
                     9
--------------------------------------------------------------------------------- 
*/


#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo%10;            // Extract the last digit
        printf("%d\n",iDigit);
        iNo = iNo/10;               // Remove the last digit
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
