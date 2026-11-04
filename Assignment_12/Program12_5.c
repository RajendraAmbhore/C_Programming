/*
---------------------------------------------------------------------------------
            Write a program which accept from user and count frequency of such
            a digits which are less than 6.
---------------------------------------------------------------------------------            
            Input  : 2395
            Output : 3

            Input  : 1018 
            Output : 3

            Input  : 9440
            Output : 3
--------------------------------------------------------------------------------- 
*/


#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iFreq = 0;

    while(iNo!=0)
    {
        iDigit = iNo%10;

        if(iDigit<6)
        {
            iFreq++;
        }
        
        iNo = iNo/10;

    }
    return iFreq;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("Frequency of digit which is less than 6 is %d",iRet);

    return 0;
}
