// --------------------------------------------------------------------------------
//      Write a program that accepts an integer from the user and determines
//      whether the enter number is positive, negative or zero.
// --------------------------------------------------------------------------------
//      Expected Output :
//      Input : 15     ->  Positive number
//      Input : -15    ->  Negative number
//      Input : 0      ->  Zero number
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo>0)
    {
        printf("Positive Number\n");
    }
    else if(iNo<0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero Number\n");
    }

}

int main()
{
    int iValue = 0;
     
    printf("Enter a number:");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}