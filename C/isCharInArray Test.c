/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int isCharInArray(char[], int, char);

int main()
{
    int trueFalse;
    char character = 'y';
    char arrayChar[] = "characterArray";
    int arrayCharLength = (int)(sizeof(arrayChar) / sizeof((arrayChar)[0]));
    trueFalse = isCharInArray(arrayChar, arrayCharLength, character);
    if (trueFalse == 1)
    {
        printf("\nEl caracter se encuentra dentro del STRING");
    }
     else
    {
        printf("\nEl caracter no se encuentra dentro del STRING");
    }
    return 0;
}

int isCharInArray(char array[], int length, char character)
{
    int i;
    printf("\nComparando caracter a caracter...");
    for (i = 0; i < length; i++)
    {
        printf("\nComparando el caracter con ARRAY[%d]", i);
        if (character == array[i])
        {
            printf("\nLos caracteres son iguales");
            return 1;
        }
        else if (character != array[i])
        {
            printf("\nLos caracteres son distintos");
        }
    }
    return 0;
}
