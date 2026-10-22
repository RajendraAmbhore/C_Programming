// --------------------------------------------------------------------------------
//      Accept an integer and determine whether it is divisible by both 3 and 5 
//      only 3, only 5, or neither
//            
// --------------------------------------------------------------------------------
//      Expected Output :
//          Input : 15  -> Divisible by both
//          Input : 9  -> Divisible by 3 only
//          Input : 10 -> Divisible by 5 only
//          Input : 7  -> Not divisible by either
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if((iValue%3==0) && iValue%5==0)
    {
        printf("Divisible by both");
    }
    else if(iValue%3==0)
    {
        printf("Divisible by 3");
    }
    else if(iValue%5==0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by either");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :");
    scanf("%d",&iValue);
    
    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}