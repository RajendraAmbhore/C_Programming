//-------------------------------------------------------------------------------
//              Write a program which accepts area in square feet and 
//              converts it into square meter.  
//              (1 square feet = 0.0929 Square meter)
//-------------------------------------------------------------------------------
//              Input : 5
//              Output : 0.464515
//
//              Input : 7
//              Output : 0.650321
//-------------------------------------------------------------------------------

#include<stdio.h>

double SquareMeter(int iNo)
{
    float fConvert = 0.0;

    fConvert = iNo * 0.0929;
    return fConvert;
}


int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square feet to square meter conversion is :%f\n",dRet);

    return 0;
}