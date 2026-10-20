// ---------------------------------------------------------------------
//      Accept one character from user and convert whether that 
//      character is vowel(a,e,i,o,u) or not. 
// ---------------------------------------------------------------------
//      Input  : E              Output  : TRUE
//      Input  : d              Output  : FALSE
// ---------------------------------------------------------------------


#include<stdio.h>
#include<stdbool.h>

typedef int BOOL; 

char ChkVowel(char CValue)
{
    if(CValue=='a'||CValue=='e'||CValue=='i'||CValue=='o'||CValue=='u')
    {
        return true;
    }
    else
    {
        return false;
    }  
}

int main()
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == true)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}