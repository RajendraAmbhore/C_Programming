// -------------------------------------------------------------------------
// Accept one number from user and check whether number is even or odd.
// -------------------------------------------------------------------------

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo%2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    return 0;
}