/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void mergeArray();
void generateArray(int[], int);
void mergeIntArray(int[], int[], int[], int);

void arrayIntPrint(int[], int);
int insertionSortIntArray(int[], int);

int main()
{
    mergeArray();
    return 0;
}

void mergeArray()
{
    int arraySize = 12;
    int firstArray[arraySize], secondArray[arraySize], mergeArray[arraySize*2];
    srand((int)time(NULL)); //seed de random segun el time
    generateArray(firstArray, arraySize);
    generateArray(secondArray, arraySize);
    printf("\nFirst");
    arrayIntPrint(firstArray, arraySize);
    printf("\nSecond");
    arrayIntPrint(secondArray, arraySize);
    insertionSortIntArray(firstArray, arraySize);
    insertionSortIntArray(secondArray, arraySize);
    printf("\nFirst");
    arrayIntPrint(firstArray, arraySize);
    printf("\nSecond");
    arrayIntPrint(secondArray, arraySize);
    mergeIntArray(firstArray, secondArray, mergeArray, arraySize);
    printf("\nMerged");
    arrayIntPrint(mergeArray, arraySize * 2);
}

void generateArray(int array[], int arraySize)
{
    int i, maxRand = 11; // del 0 al 10
    for ( i = 0 ; i < arraySize ; i++ )
        array[i] = rand() % maxRand;
}

void mergeIntArray(int firstArray[], int secondArray[], int mergeArray[], int arraySize)
{
    int i, firstArrayPos = 0, secondArrayPos = 0;
    for ( i = 0 ; i < arraySize * 2 ; i++) //loop por cada uno de los elementos de mergeArray[arraySize * 2]
    {
        if (firstArray[firstArrayPos] <= secondArray[secondArrayPos]) //compara cual es menor, al menor lo copia a la posicion de mergeArray y mueve la posicion en 1
        {
            mergeArray[i] = firstArray[firstArrayPos];
            firstArrayPos++;
        }
        else
        {
            mergeArray[i] = secondArray[secondArrayPos];
            secondArrayPos++;
        }
        //printf("\nending the loop. i: %d, firstArray[%d]: %d, secondArray[%d]: %d, mergeArray[%d]: %d", i, firstArrayPos, firstArray[firstArrayPos], secondArrayPos, secondArray[secondArrayPos], i, mergeArray[i]); //debug
        if (firstArrayPos == arraySize) //excepciones para cuando termina de compiar un array y al otro todavia le quedan validos
        {
            for ( secondArrayPos ; secondArrayPos <= arraySize ; secondArrayPos++ ) //desde la posicion actual del ARRAY con validos disponibles, hasta la ultima posicion de mergeArray
            {
                mergeArray[secondArrayPos + arraySize] = secondArray[secondArrayPos];
            }
        }
        else if (secondArrayPos == arraySize)
        {
            for ( firstArrayPos ; firstArrayPos <= arraySize ; firstArrayPos++ )
            {
                mergeArray[firstArrayPos + arraySize] = secondArray[firstArrayPos];
            }
        }
    }
}

//prestadas del main abajo
void arrayIntPrint(int array[], int arraySize)
{
    int i;
    printf("\nARRAY: (");
    for ( i = 0 ; i < arraySize ; i++ )
        printf("%d, ", array[i]);
    printf("\b\b)");
}

int insertionSortIntArray(int array[], int arraySize)
{
    int i, j, memo;
    printf("\nInicio de ordenado por insercion de un ARRAY");
    for ( i = 1 ; i < arraySize ; i++ ) //comienza por 1 porque array[0] ya esta insertado
    {
        memo = array[i];
        for ( j = i - 1 ; j >= 0 ; j-- ) //se mueve desde la posicion i (no inclusive) para atras hasta 0
        {
            if ( memo <= array[j])
            {
                array[j + 1] = array[j];
                array[j] = memo;
            }
        }
    }
    return 0;
}
*/
