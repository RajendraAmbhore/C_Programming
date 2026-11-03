/*  
-----------------------------------------------------------------------------------    
            Write a program which accepts a number from the user and 
            returns the count of odd digits.
-----------------------------------------------------------------------------------
            Input  : 2395
            Output : 3

            Input  : 1018
            Output : 2

            Input  : -1018
            Output : 2

            Input  : 8462
            Output : 0
-----------------------------------------------------------------------------------            
*/



#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCountDigit = 0;

    while(iNo!=0)
    {
        iDigit = iNo%10;
        if(iDigit%2!=0)
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

    iRet = CountOdd(iValue);

    printf("Odd number count is :%d",iRet);
    

    return 0;
}