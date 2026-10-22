// --------------------------------------------------------------------------------
//      Accept a single character and determine whether it is an uppercase alphabet, 
//      lowercase alphabet, digit, or special character. Use character comparsions 
//      without using library character-classification function
//            
// --------------------------------------------------------------------------------
//      Expected Output :
//          Input : A  -> Uppercase alphabet
//          Input : m  -> Lowercase alphabet
//          Input : 7  -> Digit
//          Input : @  -> Special Character
// --------------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue>='A' && cValue<='Z')
    {
        printf("Uppercase alphabet");
    }
    else if(cValue>='a' && cValue<='z')
    {
        printf("Lowercase alphabet");
    }
    else if(cValue>='0' && cValue<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character :");
    scanf("%c",&cValue);
    
    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}