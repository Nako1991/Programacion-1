#include <stdio.h>
#include <stdlib.h>

//DECLARACION DE FUNCIONES
void summationArray();
void summationIntArray(int[], int);
//main
void arrayIntPrint(int[], int);

int main()
{
    summationArray();
    return 0;
}

void summationArray()
{
    int vector[] = {1,5,6,7,8};
    int vectorSize = (int) sizeof(vector) / sizeof(vector[0]);
    printf("vectorSize: %d", vectorSize);
    arrayIntPrint(vector, vectorSize);
    summationIntArray(vector, vectorSize);
    arrayIntPrint(vector, vectorSize);
}

void summationIntArray(int array[], int arraySize)
{
    int i;
    for (i = 1; i < arraySize; i++)
    {
        //printf("\narray[%d]: %d = array[i] + array[i-1]", i, array[i]); //debug
        array[i] = array[i] + array[i-1];
        //printf("\narray[%d]: %d, array[%d]: %d", i, array[i], i-1, array[i-1]); //debug
    }
}

//main
void arrayIntPrint(int array[], int arraySize)
{
    int i;
    printf("\nARRAY: {");
    for (i = 0; i < arraySize; i++)
        printf("%d, ", array[i]);
    printf("\b\b)");
}

