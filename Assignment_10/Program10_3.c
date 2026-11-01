//-------------------------------------------------------------------------------
//              Write a program which accepts distance in kilometre and 
//              converts it into meter.         
//              (1 kilometre = 1000 Meter)
//-------------------------------------------------------------------------------
//              Input : 5
//              Output :5000
//
//              Input : 12
//              Output : 12000
//-------------------------------------------------------------------------------

#include<stdio.h>

int KmtoMeter(int iNo)
{
    int iConvert = 0;

    iConvert = iNo * 1000;
    return iConvert;
}


int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter distance :");
    scanf("%d",&iValue);

    iRet = KmtoMeter(iValue);

    printf("Km to meter conversion is :%d\n",iRet);

    return 0;
}