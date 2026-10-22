// --------------------------------------------------------------------------------
//      Accept three integers values representing the lengths of sides of a triangle.
//      Determine whether they can form a valid triangle. All sides must be positive,
//      and the sum of any two sides must be greater than the third side.
// --------------------------------------------------------------------------------
//      Expected Output :
//      Input : 3   4   5    ->  Valid triangle
//      Input : 1   2   3    ->  Invalid triangle
//      Input : 0   4   5    ->  Invalid triangle
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1+iSide2>iSide3)  &&
        (iSide1+iSide3>iSide2) &&
        (iSide2+iSide3>iSide1))
    {
        printf("Valide triangle");
    }
    else 
    {
        printf("Invalid traingle");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides\n :");
    scanf("%d%d%d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}