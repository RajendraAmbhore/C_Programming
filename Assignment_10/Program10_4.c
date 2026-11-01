//-------------------------------------------------------------------------------
//              Write a program which accepts temperature in Fahrenheit and 
//              converts it into Celsius. 
//              (1 Celsius = (Fahrenheit - 32) * (5/9))
//-------------------------------------------------------------------------------
//              Input : 10
//              Output : -12.2222(10-32)*(5/9)
//
//              Input : 34
//              Output : 1.11111(34-32)*(5/9)
//-------------------------------------------------------------------------------

#include<stdio.h>

double FhtoCs(float ftemp)
{
    double dConvert = 0.0;

    dConvert =(ftemp-32)*(5.0/9.0);
    return dConvert;
}


int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenhit to celsius conversion is :%f\n",dRet);

    return 0;
}