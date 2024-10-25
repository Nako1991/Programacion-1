#include <stdio.h>
#include <stdlib.h>
#include <pila.h>
#include <conio.h>
#include <time.h>

//DECLARACION DE MAKROS
//Calculo del tamaño del array. 'sizeof(x)' es el tamaño del array en bytes, 'sizeof(x[0])' es el tamaño del primer elemento del array en bytes
#define sizeArray(x)  (int)(sizeof(x) / sizeof((x)[0])) //se hace en el main porque dentro de funciones el array se pasa como puntero

//DECLARACION DE FUNCIONES
//Ejercicio 1
int modifArray(int[], int);
//Ejercicio 2
int arrayIntPrint(int[], int);
//Ejercicio 3
int summationArrayInt(int[], int);
//Ejercicio 4
int arrayPila(int[], int, int);
//Ejercicio 5
float printArrayFloat(float[], int);
float summationArrayFloat(float[], int);
float assignationArrayFloat(float[], int);
//Ejercicio 6
int isCharInArray(char[], int, char);
int insertCharToCompare(char[], int);
//Ejercicio 7
int insertCharacter();
int copyString(char[], char[], int, int);
int charPosInString(char[], int, char);
int characterInsertion(char[], char[], int, char, int);
//Ejercicio 8
int maxChar();
int maxCharInString(char[], int);
//Ejercicio 9
int capicuaArray();
int arrayIsCapicua(char[], int);
//Ejercicio 10
int invertArray();
int intArrayInverter(int[], int);
int charArrayInverter(char[], int);
//Ejercicio 11
int sortArray();
int selectionSortIntArray(int[], int);
int insertionSortIntArray(int[], int);
int insertionCharIntArray(char[], int);
int selectionCharIntArray(char[], int);
int minPosInIntArray(int[], int); //no lo requeria pero ya q estamo
int minPosInCharArray(char[], int); //no lo requeria pero ya q estamo
//Ejercicio 12
void mergeArray();
void generateArray(int[], int);
void mergeIntArray(int[], int[], int[], int);
//Ejercicio 13
void summationArray();
void summationIntArray(int[], int);

int main()
{
    //MENU
    int flag = -1;
    int selectionMenu;
    int arrayNum[10] = {7, 2, 6, 2, 0, 9, 3, 1, 5, 0};  //arreglo de ejemplo para los ejercicios
    int arrayNumLength = sizeArray(arrayNum);           //calculo del largo
    float arrayNumFloat[100];
    int arrayNumFloatLength = sizeArray(arrayNumFloat);
    char arrayChar[] = "characterArray";
    int arrayCharLength = sizeArray(arrayChar);
    printf("\nTrabajo Practico Numero 4 - Arreglos");
    do //loop del menu
    {
        printf("\n\nMenu de opciones");
        printf("\n1. Modifica los valores de un ARREGLO, ¿retorna el largo del ARREGLO?");
        printf("\n2. Suma todos los valores de cada elemento de un ARREGLO");
        printf("\n3. Copia los elementos de un ARREGLO en una PILA");
        printf("\n4. Asigna 100 elementos a un ARREGLO los suma y muestra los resultados");
        printf("\n5. Ingresa un caracter y lo busca dentro de un STRING");
        printf("\n6. Ingresa caracteres y los inserta en STRING respetando el orden alfabetico");
        printf("\n7. Encuentra el caracter de mayor valor en un STRING");
        printf("\n8. Checkea si un STRING es capicua o no");
        printf("\n9. Invierte un ARRAY e invierte un STRING (cambiando la posicion los valores)");
        printf("\n10. Ordena un ARRAY por seleccion e insercion");
        printf("\n11. Combina dos ARRAY en uno de forma ordenada");
        printf("\n12. Asigna el valor de la suma de todos los elementos anteriores a cada posicion del vector");
        printf("\nIngrese la opcion de menu que desea utilizar o cualquier otro valor para salir: ");
        scanf("%d", &selectionMenu);
        switch(selectionMenu) //check de opcion elegida
        {
        case 1:
            arrayIntPrint(arrayNum, arrayNumLength);
            modifArray(arrayNum, arrayNumLength);
            break;
        case 2:
            arrayIntPrint(arrayNum, arrayNumLength);
            printf("\nLa suma total de los valores del arreglo es: %d", summationArrayInt(arrayNum, arrayNumLength));
            break;
        case 3:
            ;
            Pila PILA;
            inicpila(&PILA);
            arrayPila(arrayNum, arrayNumLength, &PILA);
            break;
        case 4:
            assignationArrayFloat(arrayNumFloat, arrayNumFloatLength);
            break;
        case 5:
            insertCharToCompare(arrayChar, arrayCharLength);
            break;
        case 6:
            insertCharacter();
            break;
        case 7:
            maxChar();
            break;
        case 8:
            capicuaArray();
            break;
        case 9:
            invertArray();
            break;
        case 10:
            sortArray();
            break;
        case 11:
            mergeArray();
            break;
        case 12:
            summationArray();
            break;
        default: //si la seleccion no esta en el menu sale del programa
            flag=1;
            printf("\nGracias por usar el programa");
            break;
        }
    }
    while (flag == -1);
}

//Ejercicio 1
int modifArray(int array[],int length)
{
    int value, pos, flag = 1;
    printf("\nSe requieren 2 valores, el valor que se desea ingresar, y la posicion dentro del ARREGLO\n");
    while (flag != 0)
    {
        printf("Ingrese el valor: ");
        scanf("%d", &value);
        printf("Ingrese la posicion: ");
        scanf("%d", &pos);
        array[pos] = value;
        if (pos <= length)
        {
            arrayIntPrint(array, length);
        }
        else
        {
            printf("La posicion esta fuera del largo del ARREGLO");
        }
        printf("\nDesea ingresar otro valor dentro del ARREGLO? (ingrese 0 para salir): ");
        scanf("%d", &flag);
        printf("\b");
    }
    while (flag != 0);
    return length;
}

//Ejercicio 2
int arrayIntPrint(int array[], int length)
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

//Ejercicio 3
int summationArrayInt(int array[], int length)
{
    int i, summation = 0;
    for (i = 0; i < length; i++)
    {
        summation = summation + array[i];
    }
    return summation;
}

//Ejercicio 4
int arrayPila(int array[], int length, int pila)
{
    int i;
    for (i = 0; i < length; i++)
    {
        apilar(pila, array[i]);
    }
    arrayIntPrint(array, length);
    mostrar(pila);
    return 0;
}

//Ejercicio 5
float printArrayFloat(float arrayFloat[], int length)
{
    int i;
    printf("\nARRAY: {");
    for (i = 0; i < length; i++)
    {
        printf("%f, ", arrayFloat[i]);
    }
    printf("\b\b)");
    return 0;
}

float summationArrayFloat(float arrayFloat[], int length)
{
    int i;
    float summation = 0;
    for (i = 0; i < length; i++)
    {
        summation = summation + arrayFloat[i];
    }
    return summation;
}

float assignationArrayFloat(float arrayFloat[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        arrayFloat[i] = (3.14 * i);
    }
    printArrayFloat(arrayFloat, length);
    printf("\nFloat summation result: %f", summationArrayFloat(arrayFloat, length));
    return 0;
}

//Ejercicio 6
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

int insertCharToCompare(char array[], int length)
{
    int trueFalse = 0;
    char character;
    printf("El STRING es: '%s'", array);
    printf("\nIngrese el caracter que desea buscar dentro del STRING: ");
    fflush(stdin); //me tiraba otra letra porq me quedaba en buffer sin esto, ahora si anda
    scanf("%c", &character);
    printf("\ntrueFalse = %d, character = %c, array = %s, length = %d", trueFalse, character, array, length);
    trueFalse = isCharInArray(array, length, character);
    //printf("\ntrueFalse: %d", trueFalse); //debug
    if (trueFalse == 1)
    {
        printf("\nEl caracter se encuentra dentro del STRING");
    }
    else if (trueFalse == 0)
    {
        printf("\nEl caracter no se encuentra dentro del STRING");
    }
    return 0;
}

//Ejercicio 7
int insertCharacter()
{
    int flag = 1, characterPos;
    char stringCharacter;
    char string[50] = "abcdefghmnopqtuwx"; //maximo 50 caracteres
    int stringSize = 18; //contador de tamaño inicial del string
    char stringCopy[50];
    printf("\nString: %s, stringSize: %d", string, stringSize);
    do
    {
        printf("\nIngresa un caracter (o ingrese 0 para salir): ");
        fflush(stdin);
        scanf("%c", &stringCharacter);
        //printf("String: '%s', stringSize: %d, stringCharacter: %c", string, stringSize, stringCharacter); //debug
        if (stringCharacter == 48)
        {
            flag = -1;
        }
        else if ((stringCharacter != 48 && stringCharacter < 97) || 122 < stringCharacter)
        {
            printf("El valor ingresado no es correcto");
        }
        else
        {
            copyString(stringCopy, string, 0, stringSize);
            //printf("\nstringCopy: %s, stringCharacter: %d", stringCopy, stringCharacter); //debug
            printf("Comparando el caracter ingresado con el STRING");
            characterPos = charPosInString(string, stringSize, stringCharacter);
            characterInsertion(string, stringCopy, stringSize, stringCharacter, characterPos);
            stringSize++; //aumenta el contador de tamaño en 1
            printf("\nSe ingreso el codigo correctamente, el nuego STRING es: %s", string);
        }
    }
    while (flag == 1);
    printf("\nSaliendo al menu...");
    return 0;
}

int copyString(char stringCopy[], char string[], int startPos, int stringSize)
{
    int i;
    for ( i = startPos ; i < stringSize ; i++ ) //copia el string respetando valor y posicion
    {
        stringCopy[i] = string[i];
    }
    return 0;
}

int charPosInString(char string[], int stringSize, char stringCharacter)
{
    int i, characterPos = -1;

    for ( i = 0 ; i < stringSize ; i++ ) //loopea cada uno de los valores del arreglo para compararlos con stringCharacter
    {
        //printf("\nstring[%d]: %d", i, string[i]); //debug
        if (stringCharacter <=  string[i]) //compara los valores int de los caracteres ascii para saber si esta antes o despues en el alfabeto
        {
            characterPos = i;
            //printf("\ncharacterPos: %d", i); //debug
            break;
        }
    }
    if (string[stringSize-2] < stringCharacter && string[stringSize-2] != 0)
    {
        characterPos = stringSize-1;
        //printf("\ncharacterPos: %d", characterPos); //debug
    }
    return characterPos;
}

int characterInsertion(char string[], char stringCopy[], int stringSize, char stringCharacter, int characterPos)
{
    int i;
    //printf("\nstringSize: %d", stringSize); //debug
    copyString(string, stringCopy, 0, characterPos);
    //printf("\nstring: %s", string); //debug
    string[characterPos] = stringCharacter;
    //printf("\nstring: %s", string); //debug
    for ( i = characterPos ; i <= stringSize; i++)
    {
        string[i + 1] = stringCopy[i];
    }
    //printf("\nstring: %s", string); //debug
    return 0;
}

//Ejercicio 8
int maxChar()
{
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

//Ejercicio 9
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
    //printf("\nboolCharArray: %d", boolCharArray); //debug
    //printf("\nboolCharArrayCapicua: %d", boolCharArrayCapicua); //debug
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
    printf("\nSaliendo al menu...");
    return 0;
}

int arrayIsCapicua(char array[], int arraySize)
{
    int i, halfArraySize;
    halfArraySize = ((arraySize - 1) / 2);
    //printf("\narraySize / 2: %d", halfArraySize); //debug
    for ( i = 0 ; i < halfArraySize ; i++ )
    {
        //printf("\ni = 0 ; %d < halfArraySize ; i++", i); //debug
        //printf("\narray[%d] = %c, array[%d] = %c", i, array[i], (arraySize - 2 - i), array[arraySize - 2 - i]); //debug
        if (array[i] != array[arraySize - 2 - i])
        {
            //printf("\narray[%d] != array[halfArraySize - %d]", i, i); //debug
            return 0;
        }
    }
    return 1;
}

//Ejercicio 10
int invertArray()
{
    int intArray[] = {4, 5, 8, 7, 6, 2, 0, 4, 1};
    char charArray[] = "invertitres";
    int intArraySize = (int)sizeof(intArray) / (int)sizeof(intArray[0]);
    int charArraySize = (int)sizeof(charArray);
    arrayIntPrint(intArray, intArraySize);
    printf("\nintArraySize: %d, charArray: '%s', charArraySize: %d", intArraySize, charArray, charArraySize); //debug
    intArrayInverter(intArray, intArraySize);
    printf("\nintArrayInverted:");
    arrayIntPrint(intArray, intArraySize);
    charArrayInverter(charArray, charArraySize);
    printf("\ncharArrayInverted: %s", charArray);
    printf("\nSaliendo al menu...");
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

//Ejercicio 11
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
            arrayIntPrint(intArray, intArraySize);
            selectionSortIntArray(intArray, intArraySize);
            arrayIntPrint(intArray, intArraySize);
            break;
        case 2:
            arrayIntPrint(intArray, intArraySize);
            insertionSortIntArray(intArray, intArraySize);
            arrayIntPrint(intArray, intArraySize);
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
            printf("\nVolviendo al menu...");
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
                //printf("\narray[%d]: %d < array[%d]: %d", j, array[j], minPos, array[minPos]); //debug
                minPos = j;
            }
        }
        if (i != minPos) //para no realizar la copia si los valores son iguales (menos operaciones)
        {
            //printf("\nEl menor valor es array[%d]: %d. Copiando array[%d]: %d = array[%d]: %d y viseversa", minPos, array[minPos], i, array[i], minPos, array[minPos]); //debug
            memo = array[i];
            array[i] = array[minPos];
            array[minPos] = memo;
        }
        //printf("\narray[%d]: %d", array[%d]: %d. memo: %d", i, array[i], minPos, array[minPos], memo); //debug
    }
    printf("\nSe completo el ordenado");
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
            //arrayIntPrint(array, arraySize); //debug
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
                //printf("\narray[%d]: %d < array[%d]: %d", j, array[j], minPos, array[minPos]); //debug
                minPos = j;
            }
        }
        if (i != minPos) //para no realizar la copia si los valores son iguales (menos operaciones)
        {
            //printf("\nEl menor valor es array[%d]: %d. Copiando array[%d]: %d = array[%d]: %d y viseversa", minPos, array[minPos], i, array[i], minPos, array[minPos]); //debug
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
            //arrayIntPrint(array, arraySize); //debug
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
    printf("\nSaliendo al menu...");
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
            break;
        }
        else if (secondArrayPos == arraySize)
        {
            for ( firstArrayPos ; firstArrayPos <= arraySize ; firstArrayPos++ )
            {
                mergeArray[firstArrayPos + arraySize] = secondArray[firstArrayPos];
            }
            break;
        }
    }
}

void summationArray()
{
    int vector[] = {1,5,6,7,8};
    int vectorSize = (int) sizeof(vector) / sizeof(vector[0]);
    //printf("vectorSize: %d", vectorSize); //debug
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

