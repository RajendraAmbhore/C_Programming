// --------------------------------------------------------------------------------
//      Accept an employee montly salary and completed years of service. Calculate
//      the bonus using these rules: more than 10 years of service earns a bonus of 
//      15% of monthly salary: 5 to 10 years earn 10%; less than 5 years earn 5%.
//      Salary must be positive and years of service cannot be negative.
// --------------------------------------------------------------------------------
//      Expected Output :
//      Input : 30000    ->  Bonus = 4500.00
//      Input : 20000    ->  Bonus = 2000.00
//      Input : 10000    ->  Bonus = 500.00
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears>=10)
    {
        fBonus = fSalary * 0.15f;
    }
    else if(iYears<10 && iYears>=5)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = fSalary * 0.05f;
    }

    printf("Bonus :%2.f\n",fBonus);

}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;
     
    printf("Enter salary and years of service:");
    scanf("%f %d",&fSalary,&iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}