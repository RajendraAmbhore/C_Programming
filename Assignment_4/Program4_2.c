// --------------------------------------------------------------------------------
//      Write a program that accepts an integer from the user and determines
//      whether it is even or odd. An even number is completely divisible by 2.
// --------------------------------------------------------------------------------
//      Expected Output :
//      Input : 24     -> Even number
//      Input : 17     -> Odd number
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo%2==0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int iValue = 0;
     
    printf("Enter a number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}