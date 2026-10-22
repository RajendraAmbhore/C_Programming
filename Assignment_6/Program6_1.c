// --------------------------------------------------------------------------------
//      Accept the number of electricity units consumed and calculate the total bill
//      using the following slab-wise rates. Each slab rate applies only to units 
//      within the slab.
//               Units consumed            Rate
//              First 100 units         $5 per unit
//              Next 100 units          $7 per unit
//              Above 200 units         $10 per unit
// --------------------------------------------------------------------------------
//      Expected Output :
//      Input : 80     ->  Bill = 400.00
//      Input : 150    ->  Bill = 850.00
//      Input : 250    ->  Bill = 1700.00
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits<=100)
    {
        fBill = iUnits * 5.0f;
    }
    else if(iUnits<=200)
    {
        fBill = (100*5.0f) + ((iUnits-100)*7.0f);
    }
    else
    {
        fBill = (100*5.0f) + (100*0.7f) + ((iUnits-200)*10.0f);
    }

    printf("%d -> Bill = %2f\n",iUnits,fBill);

}

int main()
{
    int iUnits = 0;
     
    printf("Enter consumed units:");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}