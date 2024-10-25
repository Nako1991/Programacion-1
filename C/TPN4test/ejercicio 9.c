/*
#include <stdio.h>
#include <stdlib.h>

int capicuaArray();
int arrayIsCapicua(char[], int);

int main()
{
    printf("Iniciando el programa.");
    capicuaArray();
    printf("\nSaliendo del programa.");
    return 0;
}

int capicuaArray()
{
    char charArray[] = "pablitoClavoUnClavito";
    char charArrayCapicua[] = "pablitotilbap";
    int charArraySize = (int)sizeof(charArray);
    int charArrayCapicuaSize = (int)sizeof(charArrayCapicua);
    int boolCharArray, boolCharArrayCapicua;
    printf("\ncharArray: %s, charArraySize: %d, charArrayCapicua: %s, charArrayCapicuaSize: %d", charArray, charArraySize, charArrayCapicua, charArrayCapicuaSize);
    boolCharArray = arrayIsCapicua(charArray, charArraySize);
    boolCharArrayCapicua = arrayIsCapicua(charArrayCapicua, charArrayCapicuaSize);
    printf("\nboolCharArray: %d", boolCharArray);
    printf("\nboolCharArrayCapicua: %d", boolCharArrayCapicua);
    if (boolCharArray == 1)
    {
        printf("\nEl STRING charArray es capicua.");
    }
    else if (boolCharArray == 0)
    {
        printf("\nEl STRING charArray no es capicua.");
    }
    if (boolCharArrayCapicua == 1)
    {
        printf("\nEl STRING charArrayCapicua es capicua.");
    }
    else if (boolCharArrayCapicua == 0)
    {
        printf("\nEl STRING charArrayCapicua no es capicua.");
    }
    return 0;
}

int arrayIsCapicua(char array[], int arraySize)
{
    int i, halfArraySize;
    halfArraySize = ((arraySize - 1) / 2);
    printf("\narraySize / 2: %d", halfArraySize);
    for ( i = 0 ; i < halfArraySize ; i++ )
    {
        printf("\ni = 0 ; %d < halfArraySize ; i++", i);
        printf("\narray[%d] = %c, array[%d] = %c", i, array[i], (arraySize - 2 - i), array[arraySize - 2 - i]);
        if (array[i] != array[arraySize - 2 - i])
        {
            printf("\narray[%d] != array[halfArraySize - %d]", i, i);
            return 0;
        }
    }
    return 1;
}
*/
