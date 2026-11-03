/*
---------------------------------------------------------------------------------
        Write a program which accepts a number from the user and    
        returns the difference between the summation of all its 
        factors and non-factors.
---------------------------------------------------------------------------------            
            Input  : 12
            Output : -34        (16 -50)

            Input  : 10
            Output : -29        (8 -37)
--------------------------------------------------------------------------------- 
*/

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonFact = iNonFact + iCnt;
        }
    }
    return(iFact-iNonFact);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}