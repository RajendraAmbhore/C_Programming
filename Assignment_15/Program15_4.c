/*
---------------------------------------------------------------------------------
        Write a program which accept three numbers and print its multiplication.
---------------------------------------------------------------------------------            
            Input  : 5  4   7
            Output : 140

            Input  : 5  0   7
            Output : 35

            Input  : 5  0   0
            Output : 5

            Input  : 0  0   0
            Output : 0
--------------------------------------------------------------------------------- 
*/



#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if(iNo1==0)
    {
        iMult = iNo2 * iNo3;   
    }
    else if(iNo2==0)
    {
        iMult = iNo1 * iNo3;
    }
    else if(iNo3==0)
    {
        iMult = iNo1 * iNo2;
    }
    else
    {
        iMult = iNo1 * iNo2 * iNo3;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three number :\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is %d\n",iRet);

    return 0;
}