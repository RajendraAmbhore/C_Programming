// --------------------------------------------------------------------------------
//      Accept the age of person and determine whether the person is eligible to vote.
//      A person must be least 18 years old to vote. A negative age should be considered
//      invalid.
// --------------------------------------------------------------------------------
//      Expected Output :
//      Input : 21      ->  Eligible for voting
//      Input : 16      ->  NOt eligible for voting
//      Input : -5      ->  Invalid age
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge>=18)
    {
        printf("Eligible for voting");
    }
    else if(iAge<18 && iAge>0)
    {
        printf("Not eligible for voting");
    }
    else
    {
        printf("Invalid age");
    }
}

int main()
{
    int iAge = 0;
     
    printf("Enter your age:");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}