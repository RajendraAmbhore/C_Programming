// --------------------------------------------------------------------------------
//      Accept the total purchase amount and calcualte the final payable amount 
//      after applying the following discount. Negative purchase amounts are 
//      invalid.
//               Purchased Amount        Discount
//                 Below 1000               0%
//              1000 to below 5000          10%
//              5000 and above              20%
// --------------------------------------------------------------------------------
//      Expected Output :
//      Input : 800     ->  Payable Amount = 800.00
//      Input : 2000    -> Payable Amount  = 1800.00
//      Input : 6000    ->  Payable Amount = 4800.00
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount<1000)
    {
        fDiscount = 0.0f;
    }
    else if(fAmount>=1000 && fAmount<5000)
    {
        fDiscount = 10.0f;
    }
    else
    {
        fDiscount = 20.0f;
    }

    fFinalAmount = fAmount -(fAmount * (fDiscount/100.0f));

    printf("Payable Amount :%2.f\n",fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;
     
    printf("Enter purchase amount :");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}