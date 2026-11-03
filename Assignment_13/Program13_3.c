/*  
-----------------------------------------------------------------------------------    
            Write a program which accepts a number from the user and 
            returns the count of digits between 3 and 7.
-----------------------------------------------------------------------------------
            Input  : 2395
            Output : 1

            Input  : 1018
            Output : 0

            Input  : 4521
            Output : 2

            Input  : 9922
            Output : 0
-----------------------------------------------------------------------------------            
*/

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCountDigit = 0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit>3 && iDigit<7)
        {
            iCountDigit++; 
        }
        iNo = iNo/10;
    }
    return iCountDigit;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Count of digits in between 3 and 7 is :%d",iRet);

    return 0;
}