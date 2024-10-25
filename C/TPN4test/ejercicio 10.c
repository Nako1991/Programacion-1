/*

#include <stdio.h>
#include <stdlib.h>

int invertArray();
int intArrayInverter(int[], int);
int charArrayInverter(char[], int);

int main()
{
    printf("Iniciando el programa.");
    printf("\nInvierte las posiciones de los valores de un arreglo");
    invertArray();
    printf("\nSaliendo del programa.");
    return 0;
}

int invertArray()
{
    int intArray[] = {4, 5, 8, 7, 6, 2, 0, 4, 1};
    char charArray[] = "invertitres";
    int intArraySize = (int)sizeof(intArray) / (int)sizeof(intArray[0]);
    int charArraySize = (int)sizeof(charArray);
    printArrayInt(intArray, intArraySize);
    printf("\nintArraySize: %d, charArray: '%s', charArraySize: %d", intArraySize, charArray, charArraySize); //debug
    intArrayInverter(intArray, intArraySize);
    printf("\nintArrayInverted:");
    printArrayInt(intArray, intArraySize);
    charArrayInverter(charArray, charArraySize);
    printf("\ncharArrayInverted: %s", charArray);
    return 0;
}

int intArrayInverter(int array[], int arraySize)
{
    int i, halfArraySize, memo;
    halfArraySize = (arraySize / 2);
    for ( i = 0 ; i < halfArraySize ; i++ )
    {
        //printf("\narray[%d] = %d, array[%d] = %d", i, array[i], (arraySize - 1 - i), array[arraySize - 1 - i]); //debug
        memo = array[i];
        array[i] = array[arraySize - 1 - i];
        array[arraySize - 1 - i] = memo;
    }
    return 0;
}

int charArrayInverter(char array[], int arraySize)
{
    int i, halfArraySize;
    char memo;
    halfArraySize = (arraySize - 1) / 2;
    for ( i = 0 ; i < halfArraySize ; i++ )
    {
        //printf("\narray[%d] = %c, array[%d] = %c", i, array[i], (arraySize - 2 - i), array[arraySize - 2 - i]); //debug
        memo = array[i];
        array[i] = array[arraySize - 2 - i];
        array[arraySize - 2 - i] = memo;
    }
    return 0;
}

//printArrayInt prestada del tpn4 main
int printArrayInt(int array[], int length)
{
    int i;
    printf("\nARRAY: {");
    for (i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\b\b)");
    return 0;
}

*/
