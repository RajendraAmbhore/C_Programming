// --------------------------------------------------------------------------------
//      Write a program that accepts an integer from the user and determines
//      whether it is divisible by 5 without leaving any remainder.
// --------------------------------------------------------------------------------
//      Expected Output :
//      Input : 45    ->  Divisible by 5
//      Input : 23    ->  Not divisible by 5
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
    if(iNo%5==0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
}

int main()
{
    int iValue = 0;
     
    printf("Enter a number:");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}