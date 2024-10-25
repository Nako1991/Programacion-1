/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char insertString[20];
    char testText[] = "textoDePrueba";
    printf("STRING: %s\n", testText);
    testText[5] = 'l';
    printf("STRING: %s\n", testText);
    scanf("%s", insertString);
    printf("STRING: %s\n", insertString);
}
