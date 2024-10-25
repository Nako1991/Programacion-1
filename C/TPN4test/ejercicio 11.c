/*
#include <stdio.h>
#include <stdlib.h>

//DECLARACION DE VARIABLES
int sortArray();
int selectionSortIntArray(int[], int);
int insertionSortIntArray(int[], int);
int insertionCharIntArray(char[], int);
int selectionCharIntArray(char[], int);
int minPosInIntArray(int[], int);
int minPosInCharArray(char[], int);
//printArrayInt prestada de main
int printArrayInt(int[], int);

int main()
{
    printf("Iniciando el programa.");
    printf("\nOrdena un ARRAY por seleccion e insercion");
    sortArray();
    printf("\nSaliendo del programa.");
    return 0;
}

int sortArray()
{
    int intArray[] = {4, 5, 8, 7, 6, 2, 0, 4, 1};
    char string[] = "ordenarEsteArreglo";
    int flag = -1, selectionMenu;
    int intArraySize = (int)sizeof(intArray) / (int)sizeof(intArray[0]);
    int stringSize = (int)sizeof(string);
    do //loop del menu
    {
        printf("\n\nMenu de ordenado");
        printf("\n1. Ordena un ARRAY de INT por seleccion");
        printf("\n2. Ordena un ARRAY de INT por insercion");
        printf("\n3. Ordena un STRING por seleccion");
        printf("\n4. Ordena un STRING por insercion");
        printf("\nIngrese la opcion de menu que desea utilizar o cualquier otro valor para salir: ");
        scanf("%d", &selectionMenu);
        switch(selectionMenu) //check de opcion elegida
        {
        case 1:
            printArrayInt(intArray, intArraySize);
            selectionSortIntArray(intArray, intArraySize);
            printArrayInt(intArray, intArraySize);
            break;
        case 2:
            printArrayInt(intArray, intArraySize);
            insertionSortIntArray(intArray, intArraySize);
            printArrayInt(intArray, intArraySize);
            break;
        case 3:
            printf("\nSTRING: '%s'", string);
            selectionCharIntArray(string, stringSize);
            printf("\nSTRING: '%s'", string);
            break;
        case 4:
            printf("\nSTRING: '%s'", string);
            insertionCharIntArray(string, stringSize);
            printf("\nSTRING: '%s'", string);
            break;
        default: //si la seleccion no esta en el menu sale del programa
            flag=1;
            printf("\nGracias por usar el programa");
            break;
        }
    }
    while (flag == -1);
    return 0;
}

int selectionSortIntArray(int array[], int arraySize)
{
    int i, j, minPos, memo;
    printf("\nInicio de ordenado por seleccion de un ARRAY");
    for ( i = 0 ; i < arraySize ; i++)
    {
        minPos = i; //vuelve a establecer la posicion del menor valor a la inicial (empezando desde donde la lista no esta ordenada)
        //printf("\nloop i: %d", i); //debug
        for ( j = i + 1 ; j < arraySize; j++) //arreglo sin los miembros ya ordenados
        {
            //printf("\nloop j: %d", j); //debug
            if (array[j] < array[minPos]) //compara los valores y modifica minPos si es menor
            {
                printf("\narray[%d]: %d < array[%d]: %d", j, array[j], minPos, array[minPos]); //debug
                minPos = j;
            }
        }
        if (i != minPos) //para no realizar la copia si los valores son iguales (menos operaciones)
        {
            printf("\nEl menor valor es array[%d]: %d. Copiando array[%d]: %d = array[%d]: %d y viseversa", minPos, array[minPos], i, array[i], minPos, array[minPos]);
            memo = array[i];
            array[i] = array[minPos];
            array[minPos] = memo;
        }
        //printf("\narray[%d]: %d", array[%d]: %d. memo: %d", i, array[i], minPos, array[minPos], memo); //debug
    }
    printf("\nSe completo el ordenado"); //debug
    return 0;
}

int insertionSortIntArray(int array[], int arraySize)
{
    int i, j, memo;
    printf("\nInicio de ordenado por insercion de un ARRAY");
    for ( i = 1 ; i < arraySize ; i++ ) //comienza por 1 porque array[0] ya esta insertado
    {
        //printf("\nloop i: %d", i); //debug
        memo = array[i];
        //printf("\nmemo: %d", memo); //debug
        for ( j = i - 1 ; j >= 0 ; j-- ) //se mueve desde la posicion i (no inclusive) para atras hasta 0
        {
            //printf("\nloop j: %d", j); //debug
            //printArrayInt(array, arraySize); //debug
            if ( memo <= array[j])
            {
                array[j + 1] = array[j];
                array[j] = memo;
                //printf("\nSe movio de posicion array[%d] a array[%d]", j, (j + 1)); //debug
                //printf("\nSe inserto 'memo: %d' en array[%d]", memo, j); //debug
            }
        }
    }
    return 0;
}

int selectionCharIntArray(char array[], int arraySize)
{
    int i, j, minPos;
    char memo;
    arraySize--;
    printf("\nInicio de ordenado por seleccion de un ARRAY");
    for ( i = 0 ; i < arraySize ; i++)
    {
        minPos = i; //vuelve a establecer la posicion del menor valor a la inicial (empezando desde donde la lista no esta ordenada)
        //printf("\nloop i: %d", i); //debug
        for ( j = i + 1 ; j < arraySize; j++) //arreglo sin los miembros ya ordenados
        {
            //printf("\nloop j: %d", j); //debug
            if (array[j] < array[minPos]) //compara los valores y modifica minPos si es menor
            {
                printf("\narray[%d]: %d < array[%d]: %d", j, array[j], minPos, array[minPos]); //debug
                minPos = j;
            }
        }
        if (i != minPos) //para no realizar la copia si los valores son iguales (menos operaciones)
        {
            printf("\nEl menor valor es array[%d]: %d. Copiando array[%d]: %d = array[%d]: %d y viseversa", minPos, array[minPos], i, array[i], minPos, array[minPos]);
            memo = array[i];
            array[i] = array[minPos];
            array[minPos] = memo;
        }
        //printf("\narray[%d]: %d", array[%d]: %d. memo: %d", i, array[i], minPos, array[minPos], memo); //debug
    }
    printf("\nSe completo el ordenado"); //debug
    return 0;
}

int insertionCharIntArray(char array[], int arraySize)
{
    int i, j;
    char memo;
    arraySize--;
    printf("\nInicio de ordenado por insercion de un ARRAY");
    for ( i = 1 ; i < arraySize ; i++ ) //comienza por 1 porque array[0] ya esta insertado
    {
        //printf("\nloop i: %d", i); //debug
        memo = array[i];
        //printf("\nmemo: %d", memo); //debug
        for ( j = i - 1 ; j >= 0 ; j-- ) //se mueve desde la posicion i (no inclusive) para atras hasta 0
        {
            //printf("\nloop j: %d", j); //debug
            //printArrayInt(array, arraySize); //debug
            if ( memo <= array[j])
            {
                array[j + 1] = array[j];
                array[j] = memo;
                //printf("\nSe movio de posicion array[%d] a array[%d]", j, (j + 1)); //debug
                //printf("\nSe inserto 'memo: %d' en array[%d]", memo, j); //debug
            }
        }
    }
    return 0;
}

int minPosInIntArray(int array[], int arraySize)
{
    int i, minPos = 0;
    for ( i = 0 ; i < arraySize ; i++ )
    {
        if (array[i] < array[minPos]) //compara los valores y modifica minPos si es menor
            minPos = i;
    }
    return minPos;
}

int minPosInCharArray(char array[], int arraySize)
{
    int i, minPos = 0;
    arraySize--; //no compara el valor de finalizacion del string
    for ( i = 0 ; i < arraySize ; i++ )
    {
        if (array[i] < array[minPos]) //compara los valores y modifica minPos si es menor
            minPos = i;
    }
    return minPos;
}

//prestada del main
int printArrayInt(int array[], int length)
{
    int i;
    printf("\nARRAY: {");
    for (i = 0; i < length; i++ )
    {
        printf("%d, ", array[i]);
    }
    printf("\b\b)");
    return 0;
}
*/
