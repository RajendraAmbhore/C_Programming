/*  
-----------------------------------------------------------------------------------    
            Write a program which accepts a number from the user and    
            returns the count of even digits.
-----------------------------------------------------------------------------------
            Input  : 2395
            Output : 1

            Input  : 1018
            Output : 2

            Input  : -1018
            Output : 2

            Input  : 8462
            Output : 4
-----------------------------------------------------------------------------------            
*/


#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCountDigit = 0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit%2==0)
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

    iRet = CountEven(iValue);

    printf("Even number count is :%d",iRet);

    return 0;
}