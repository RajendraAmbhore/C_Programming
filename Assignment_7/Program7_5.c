// ------------------------------------------------------------------------------------------
//          Write a program which accepts N and print first 5 multiples of N.
// ------------------------------------------------------------------------------------------
//          Input: 4
//          Output: 4  8  12  16  20
// ------------------------------------------------------------------------------------------

#include<stdio.h>

void MultipleDisplay(iNo)
{
    int iCnt = 0;
    int iMultiple = 0;

    for(iCnt=1; iCnt<=5; iCnt++)
    {
        iMultiple = iNo * iCnt;
        printf("%d\t",iMultiple);             
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}