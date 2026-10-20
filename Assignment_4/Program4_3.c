// --------------------------------------------------------------------------------
//      Write a program that accepts two integer from the user and determines
//      which number is greater. If both numbers are equal, display an 
//      appropriate message
// --------------------------------------------------------------------------------
//      Expected Output :
//      Input : 10 20        ->  20 is greater
//      Input : 50 30        ->  50 is greater
//      Input : 15 15        ->  both numbers are equal
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst>iSecond)
    {
        printf("%d is greater",iFirst);
    }
    else if(iFirst<iSecond)
    {
        printf("%d is greater",iSecond);
    }
    else
    {
        printf("Both are equals\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
     
    printf("Enter two number:");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}