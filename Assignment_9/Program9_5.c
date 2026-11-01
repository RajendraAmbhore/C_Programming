//-------------------------------------------------------------------------------
//              Write a program which returns difference between Even factorial 
//              and Odd factorial of given number.
//-------------------------------------------------------------------------------
//              Input : 5
//              Output : -7        (8-15)
//
//              Input : -5
//              Output : -7         (8-15)
//
//              Input : 10
//              Output : 2895       (3840-945)
//-------------------------------------------------------------------------------

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;

    int iCnt=1;

    while(iCnt<=iNo)
    {
        if(iCnt%2==0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
        iCnt++;
    }
    return(iEvenFact-iOddFact);   
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}