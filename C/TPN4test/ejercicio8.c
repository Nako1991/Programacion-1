/*
#include <stdio.h>
#include <stdlib.h>

int maxChar();
int maxCharInString(char[], int);

int main()
{
    maxChar();
}

int maxChar()
{
    int i;
    char max;
    char string[] = "encuentraElValorMaximo";
    int stringSize = (int)sizeof(string);
    printf("string: %s, stringSize: %d", string, stringSize);
    max = maxCharInString(string, stringSize);
    printf("\nmax: %c", max);
    return 0;
}

int maxCharInString(char string[], int stringSize)
{
    int i, max = 0;
    for ( i = 0 ; i < stringSize ; i++ )
    {
        if (string[i] > max) max = string[i];
    }
    return max;
}
*/
