#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//tamaño de las filas y las columnas de la matriz
#define SIZEROW3 3
#define SIZECOLUMN3 3
#define SIZEROW2 2
#define SIZECOLUMN2 2
#define MAXWORDS 10
#define MAXWORDLENGTH 25

//DECLARACION DE FUNCIONES
//Ejercicio 1
void loadMatrixInt(int[SIZEROW3][SIZECOLUMN3]);
//Ejercicio 2
void matrixPrintShort(int[SIZEROW3][SIZECOLUMN3]);
void matrix3Print(int[SIZEROW3][SIZECOLUMN3]);
//Ejercicio 3
void loadMatrixRandom(int[SIZEROW3][SIZECOLUMN3]);
//Ejercicio 4
int sumMatrix(int[SIZEROW3][SIZECOLUMN3]);
//Ejercicio 5
float averageMatrix(int[SIZEROW3][SIZECOLUMN3]);
//Ejercicio 6
void IntInMatrix(int[SIZEROW3][SIZECOLUMN3]);
int isIntInMatrix(int[SIZEROW3][SIZECOLUMN3], int);
//Ejercicio 7
int loadMatrixChar(char[MAXWORDS][MAXWORDLENGTH]);
int wordCountInString(char[MAXWORDS][MAXWORDLENGTH]);
//Ejercicio 8
void matrixCharPrint(char[MAXWORDS][MAXWORDLENGTH]);
//Ejercicio 9
void wordSearchInString(char[MAXWORDS][MAXWORDLENGTH]);
int isStringInArray(char[MAXWORDS][MAXWORDLENGTH], int, char[MAXWORDLENGTH]);
int letterCountInString(char[MAXWORDS][MAXWORDLENGTH], int);
//Ejercicio 10
void wordSearchInOrderlyString(char[MAXWORDS][MAXWORDLENGTH]);
//Ejercicio 11
void alphabetizeMatrix(char[MAXWORDS][MAXWORDLENGTH]);
void matrixCharInsertionSort(char[MAXWORDS][MAXWORDLENGTH]);
void charMemoToMatrixCopy(char[MAXWORDS][MAXWORDLENGTH], int, char[MAXWORDLENGTH]);
void charMatrixToMemoCopy(char[MAXWORDLENGTH], char[MAXWORDS][MAXWORDLENGTH], int);
void charMatrixToMatrixCopy(char[MAXWORDS][MAXWORDLENGTH], int, int);
int isWordBiggerThanMemo(char[MAXWORDS][MAXWORDLENGTH], int, char[MAXWORDLENGTH]); //true : 1, false: -1.
//Ejercicio 12
void matrixMathExercises();
int matrix2Determinant(int[2][2]);
void matrixRand(int sizeRow, int sizeColumn, int[sizeRow][sizeColumn]);
void matrixPrint(int sizeRow, int sizeColumn, int[sizeRow][sizeColumn]);
//gauss test
void matrixDeterminantGauss();
void floatMatrixToMemoCopy(int size, float[size], int, float[size][size]);
void floatMemoToMatrixCopy(int size, int, float[size][size], float[size]);
void floatMatrixToMatrixCopy(int size, float[size][size], int, int);
void fMatrixRand(int sizeRow, int sizeColumn, float[sizeRow][sizeColumn]);
void fMatrixPrint(int sizeRow, int sizeColumn, float[sizeRow][sizeColumn]);
void fMemoPrint(int size, float memo[size]);
void fMemoMultiply(int size, float, float[size]);
void fMatrixSubtraction(int size, float[size], int, float[size][size]);
//Ejercicio 13
void matrix2x2IsInvertible();
//Ejercicio 14
void iMatrixMultiplication();
//Ejercicio 15
void iMatrix2x2Invert();


int main()
{
    //MENU
    int flag = -1; //exit flag
    char seleccionMenu = 0; //opcion del menu elejida
    int matrix[SIZEROW3][SIZECOLUMN3]; //matriz 3x3 int
    char matrixChar[MAXWORDS][MAXWORDLENGTH]; //MAXWORDS: cantidad maxima de palabras (strings), MAXWORDLENGTH: cantidad maxima de letras por palabra
    srand((int)time(NULL)); //semilla para la generacion de numeros aleatorios del programa basade en la hora
    do
    {
        printf("\n---------- MENU PRINCIPAL ----------");
        printf("\n\n1. Carga valores ingresador por el usuario a una matriz hasta completarla");
        printf("\n\n2. Carga valores random a una matriz hasta completarla");
        printf("\n\n3. Suma todos los valores dentro de una matriz");
        printf("\n\n4. Calcula el promedio de los valores dentro de una matriz");
        printf("\n\n5. Comprueba si el valor ingresado se encuentra dentro de una matriz");
        printf("\n\n6. Ingresa STRINGS en una matriz");
        printf("\n\n7. ingrese una palabra para ser buscada dentro del ARRAY");
        printf("\n\n8. El ejercicio 7 ya resuelve este ejercicio tambien ???");
        printf("\n\n9. Ordena un ARRAY de STRINGS por orden alfabetico");
        printf("\n\na. Devuelve el determinante de una matriz 2x2");
        printf("\n\nb. Devuelve el determinante de una matriz 5x5 por metodo de gauss");
        printf("\n\nc. Comprueba que una matriz sea invertible");
        printf("\n\nd. Multiplica una matriz 2x2 con una 2x5");
        printf("\n\ne. Calcula la matriz inversa de una matriz 2x2");
        printf("\n\nSeleccione una opcion (ingrese 0 para salir): ");
        fflush(stdin);
        scanf("%c", &seleccionMenu);
        //printf("\nseleccionMenu: %d", seleccionMenu); //debug
        switch(seleccionMenu)
        {
        case 49: //'1'
            loadMatrixInt(matrix);
            printf("\nMatriz cargada con exito");
            matrix3Print(matrix);
            printf("\nVolviendo al menu...\n");
            break;
        case 50: //'2'
            loadMatrixRandom(matrix);
            printf("\nMatriz cargada con exito");
            matrix3Print(matrix);
            printf("\nVolviendo al menu...\n");
            break;
        case 51: //'3'
            printf("\nSuma: %d", sumMatrix(matrix));
            printf("\nVolviendo al menu...\n");
            break;
        case 52: //'4'
            printf("\nPromedio: %.2f", averageMatrix(matrix));
            printf("\nVolviendo al menu...\n");
            break;
        case 53: //'5'
            IntInMatrix(matrix);
            printf("\nVolviendo al menu...\n");
            break;
        case 54: //'6'
            loadMatrixChar(matrixChar);
            matrixCharPrint(matrixChar);
            printf("\ncantidad de palabras: %d", wordCountInString(matrixChar));
            printf("\nVolviendo al menu...\n");
            break;
        case 55: //'7'
            wordSearchInString(matrixChar);
            printf("\nVolviendo al menu...\n");
            break;
        case 56: //'8'
            wordSearchInOrderlyString(matrixChar);
            printf("\nVolviendo al menu...\n");
            break;
        case 57: //'9'
            alphabetizeMatrix(matrixChar);
            printf("\nVolviendo al menu...\n");
            break;
        case 97: //'a' //porq me quede sin numeros, más adelante mejorar para q tome numeros de 2 cifras
            matrixMathExercises();
            printf("\nVolviendo al menu...\n");
            break;
        case 98: //'b'
            matrixDeterminantGauss(); //test
            printf("\nVolviendo al menu...\n");
            break;
        case 99: //'c'
            matrix2x2IsInvertible();
            printf("\nVolviendo al menu...\n");
            break;
        case 100: //'d'
            iMatrixMultiplication();
            printf("\nVolviendo al menu...\n");
            break;
        case 101: //'e'
            iMatrix2x2Invert();
            printf("\nVolviendo al menu...\n");
            break;
        case 48: //'0'
            printf("\nGracias por usar el programa.");
            flag = 1;
            break;
        default:
            printf("\nLa opcion ingresada no es correcta.\n");
            break;
        }
    }
    while (flag != 1);
}

//Ejercicio 1, Opcion 1
/*1. Hacer una función que reciba como parámetro una matriz de números enteros y permita que
el usuario ingrese valores al mismo por teclado. La función debe cargar la matriz por
completo.*/
void loadMatrixInt(int matrix[SIZEROW3][SIZECOLUMN3])
{
    int i, j, input;
    for ( i = 0 ; i < SIZEROW3 ; i++ )
    {
        for ( j = 0 ; j < SIZECOLUMN3 ; j++ )
        {
            printf("Ingrese el valor de matrix[%d][%d]: ", i, j);
            fflush(stdin);
            scanf("%d", &input);
            matrix[i][j] = input;
        }
    }
}

//Ejercicio 2
/*2. Hacer una función que reciba como parámetro una matriz de números enteros y la muestre
por pantalla (en formato matricial).*/
void matrixPrintShort(int matrix[SIZEROW3][SIZECOLUMN3]) //muestra la matriz en un solo renglon
{
    int i, j;
    printf("\nMATRIX: {(");
    for ( i = 0 ; i < SIZEROW3 ; i++ )
    {
        for ( j = 0 ; j < SIZECOLUMN3 ; j++ )
            printf("%d, ", matrix[i][j]);
        printf("\b\b), (");
    }
    printf("\b\b\b}  \n");
}

void matrix3Print(int matrix[SIZEROW3][SIZECOLUMN3]) ////muestra la matriz en forma matricial
{
    int i, j;
    printf("\nMATRIX: {\n\t\t(");
    for ( i = 0 ; i < SIZEROW3 ; i++ )
    {
        for ( j = 0 ; j < SIZECOLUMN3 ; j++ )
            printf("%d, ", matrix[i][j]);
        if (i == SIZECOLUMN3 - 1 )
            printf("\b\b)\n\t\t(");
        else
            printf("\b\b),\n\t\t(");
    }
    printf("\b\b\b\b\b\b\b\b\b}             \n");
}

//Ejercicio 3, Opcion 2
/*3. Hacer una función que reciba como parámetro una matriz de números enteros y que cargue
la misma con números aleatorios (sin intervención del usuario). La función debe cargar la
matriz por completo.*/
void loadMatrixRandom(int matrix[SIZEROW3][SIZECOLUMN3])
{
    int i, j;
    for ( i = 0 ; i < SIZEROW3 ; i++ )
        for ( j = 0 ; j < SIZECOLUMN3 ; j++ )
            matrix[i][j] = (rand() % 10 ) + 1;
    //printf("\nmatrix[%d][%d]: %d", i, j, matrix[i][j]); //debug, del 1 al 10
}

//Ejercicio 4, Opcion 3
/*4. Hacer una función tipo int que sume el contenido total de una matriz de números enteros.*/
int sumMatrix(int matrix[SIZEROW3][SIZECOLUMN3])
{
    int i, j;
    int sum = 0;
    for ( i = 0 ; i < SIZEROW3 ; i++ )
        for ( j = 0 ; j < SIZECOLUMN3 ; j++ )
            sum = sum + matrix[i][j];
    //printf("\nsum: %d", sum); //debug
    return sum;
}

//Ejercicio 5, Opcion 4
/*5. Hacer una función tipo float que calcule el de una matriz de números enteros.*/
float averageMatrix(int matrix[SIZEROW3][SIZECOLUMN3])
{
    float average = (float)sumMatrix(matrix) / (SIZEROW3 * SIZECOLUMN3);
    return average;
}

//Ejercicio 6, Opcion 5
/*6. Hacer una función que determine si un elemento se encuentra dentro de una matriz de
números enteros. La función recibe la matriz y el dato a buscar.*/
void IntInMatrix(int matrix[SIZEROW3][SIZECOLUMN3])
{
    int found = -1, input;
    printf("\nIngrese el valor que desea comparar: ");
    fflush(stdin);
    scanf("%d", &input);
    found = isIntInMatrix(matrix, input);
    matrixPrintShort(matrix);
    if (found == 1)
        printf("\nEl valor se encontro dentro de la matriz");
    else if (found == 0)
        printf("\nEl valor no se encontro dentro de la matriz");
}

int isIntInMatrix(int matrix[SIZEROW3][SIZECOLUMN3], int searchValue)
{
    int i, j;
    for ( i = 0 ; i < SIZEROW3 ; i++ )
        for ( j = 0 ; j < SIZECOLUMN3 ; j++ )
            if (searchValue == matrix[i][j])
                return 1;
    return 0;
}

//Ejercicio 7, Opcion 6
/* 7. Hacer una función que cargue un arreglo de palabras (strings). La función debe retornar
cuantas palabras se cargaron. (puede ser a través del parámetro como puntero)*/
int loadMatrixChar(char matrix[MAXWORDS][MAXWORDLENGTH])
{
    int i, j;
    char flag, word[MAXWORDLENGTH];
    for ( i = 0 ; i < MAXWORDS ; i++ )
    {
        printf("\nIngrese la palabra que desea agregar en la posicion [%d] del ARRAY de STRINGS (maximo 24 caracteres): ", i);
        fflush(stdin);
        scanf("%s", word);
        for ( j = 0 ; j < MAXWORDLENGTH ; j++)
        {
            matrix[i][j] = word[j];
            if ( word[j] == '\0') break;
            //printf("\nmatrix[%d][%d] = word[%d] // %c = %c", i, j, j, matrix[i][j], word[j]); //debug
        }
        printf("La palabra '%s' se agrego a la posicion %d del ARRAY", word, i);
        printf("\nDesea ingresar otra palabra? (cualquier caracter para continuar o '0' para salir):");
        fflush(stdin);
        scanf("%c", &flag);
        if (flag == 48) break;
    }
    //printf("\nse salio del loop"); //debug
    i++; //i viene contando las palabras desde la posicion 0, se agrega 1 para que nos de la cantidad total de palabras
    return i;

}

int wordCountInString(char matrix[MAXWORDS][MAXWORDLENGTH]) //cuenta la cantidad de palabras validas en el ARRAY
{
    int words;
    for ( words = 0 ; words < MAXWORDS ; words++ ) //comienza de words = 1 para usarse como contador
        if (matrix[words][0] == NULL) break; //cuando encuentra un array vacio rompe el loop
    return words;
}

//Ejercicio 8, Opcion 6
/* 8. Hacer una función que muestre un arreglo de palabras.*/
void matrixCharPrint(char matrix[MAXWORDS][MAXWORDLENGTH])
{
    int i, j;
    printf("\nARRAY de STRINGS: {'");
    for ( i = 0 ; ( matrix[i][0] != NULL ) ; i++ )
    {
        for ( j = 0 ; matrix[i][j] != '\0' ; j++ )
            printf("%c", matrix[i][j]);
        printf("', '");
    }
    printf("\b\b\b}   ");
}

//Ejercicio 9, Opcion 7
/* 9. Hacer una función que determine si un string se encuentra dentro de un arreglo de strings.
La función recibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar.
///devuelve el índice de la fila en que se encuentra, de lo contrario -1 */
void wordSearchInString(char matrix[MAXWORDS][MAXWORDLENGTH])
{
    int stringFoundInRow, wordCount;
    char word[MAXWORDLENGTH];
    printf("\nIngrese la palabra que desea buscar dentro del ARRAY de STRINGS (maximo 24 caracteres): ");
    fflush(stdin);
    scanf("%s", word);
    wordCount = wordCountInString(matrix);
    stringFoundInRow = isStringInArray(matrix, wordCount, word);
    if ( stringFoundInRow != -1 ) printf("\nSe encontro el string en la fila: %d", stringFoundInRow);
    else printf("\nNo se encontro el string en el ARRAY");
}

int isStringInArray(char matrix[MAXWORDS][MAXWORDLENGTH], int validWords, char word[])
{
    int i, j, validLetters;
    for ( i = 0 ; i < validWords ; i++ ) //loop mientras haya palabras en el ARRAY
    {
        //printf("\nLoop i: %d", i); //debug
        validLetters = letterCountInString(matrix, i);
        //printf("\nvalidLetters: %d, i: %d",validLetters, i); //debug
        for ( j = 0 ; j <= validLetters ; j++ ) //checkea el caracter NULL inclusive para comparar con word
        {
            //printf("\nLoop j: %d", j); //debug
            if ( word[j] != matrix[i][j] )
            {
                //printf("\nla letra no coincide, continuando con la siguiente palabra"); //debug
                break;
            }
            //printf("\nse encontro la letra en la posicion: %d", j); //debug
            if ( j == validLetters - 1 )
            {
                //printf("\nse encontro la palabra en la posicion: %d", i); //debug
                return i;
            }
        }
    }
    //printf("\nse completo la busqueda sin coincidencias"); //debug
    return -1;
}

int letterCountInString(char matrix[MAXWORDS][MAXWORDLENGTH], int wordPos)
{
    int letterCount = 0;
    while ( matrix[wordPos][letterCount] != '\0' && ( ( matrix[wordPos][letterCount] > 64 && matrix[wordPos][letterCount] < 91 ) || ( matrix[wordPos][letterCount] > 96 && matrix[wordPos][letterCount] < 123 )) )
    {
        //printf("\nmatrix[%d][%d]: %d", wordPos, letterCount, matrix[wordPos][letterCount]); //debug
        letterCount++;
    }
    return letterCount;
}

//Ejercicio 10, Opcion 8
/*10. Hacer una función que determine si un string se encuentra dentro de un arreglo de strings
ordenado alfabéticamente. La función recibe el arreglo, la cantidad de palabras que contiene
y el string a buscar. ///devuelve el índice de la fila en que se encuentra, de lo contrario -1*/
void wordSearchInOrderlyString(char matrix[MAXWORDS][MAXWORDLENGTH])
{
    matrix[0][0] = 'a';
    matrix[0][1] = 'p';
    matrix[0][2] = 'r';
    matrix[0][3] = 'i';
    matrix[0][4] = '\0';
    matrix[1][0] = 'b';
    matrix[1][1] = 's';
    matrix[1][2] = 'e';
    matrix[1][3] = 'g';
    matrix[1][4] = 'u';
    matrix[1][5] = 'n';
    matrix[1][6] = 'd';
    matrix[1][7] = 'o';
    matrix[1][8] = '\0';
    matrix[2][0] = 'c';
    matrix[2][1] = 't';
    matrix[2][2] = 'r';
    matrix[2][3] = 'e';
    matrix[2][4] = 's';
    matrix[2][5] = '\0';
    matrix[3][0] = 'c';
    matrix[3][1] = 'x';
    matrix[3][2] = 'y';
    matrix[3][3] = 'z';
    matrix[3][4] = '\0';
    matrix[4][0] = 'h';
    matrix[4][1] = 'c';
    matrix[4][2] = 'u';
    matrix[4][3] = 'a';
    matrix[4][4] = 't';
    matrix[4][5] = 'r';
    matrix[4][6] = 'o';
    matrix[4][7] = '\0';
    matrix[5][0] = NULL;
    matrixCharPrint(matrix);
    wordSearchInString(matrix); //funciona la misma funcion q antes ?¿?¿? no entiendo el ejercicio
}

//Ejercicio 11, Opcion 9
/*11. Hacer una función (o varias) que ordene un arreglo de palabras por orden alfabético. (Por
selección o inserción, el que más te guste).*/
void alphabetizeMatrix(char matrix[MAXWORDS][MAXWORDLENGTH])
{
    //relleno de matriz de ejemplo
    matrix[0][0] = 'b';
    matrix[0][1] = 'a';
    matrix[0][2] = 'n';
    matrix[0][3] = 'a';
    matrix[0][4] = 'n';
    matrix[0][5] = 'a';
    matrix[0][6] = '\0';
    matrix[1][0] = 'p';
    matrix[1][1] = 'a';
    matrix[1][2] = 'p';
    matrix[1][3] = 'a';
    matrix[1][4] = '\0';
    matrix[2][0] = 't';
    matrix[2][1] = 'r';
    matrix[2][2] = 'e';
    matrix[2][3] = 's';
    matrix[2][4] = '\0';
    matrix[3][0] = 't';
    matrix[3][1] = 'r';
    matrix[3][2] = 'e';
    matrix[3][3] = 's';
    matrix[3][4] = 'o';
    matrix[3][5] = '\0';
    matrix[4][0] = 'c';
    matrix[4][1] = 'u';
    matrix[4][2] = 'a';
    matrix[4][3] = 't';
    matrix[4][4] = 'r';
    matrix[4][5] = 'o';
    matrix[4][6] = '\0';
    matrix[5][0] = 'c';
    matrix[5][1] = 'i';
    matrix[5][2] = 'n';
    matrix[5][3] = 'c';
    matrix[5][4] = 'o';
    matrix[5][5] = '\0';
    matrix[6][0] = NULL; //los valores de la funcion no se autoinicializan en 0?
    matrixCharPrint(matrix);
    matrixCharInsertionSort(matrix); //ordenamiento de las palabras por insercion
    matrixCharPrint(matrix);
}

void matrixCharInsertionSort(char matrix[MAXWORDS][MAXWORDLENGTH])
{
    int i, j;
    char memo[MAXWORDLENGTH];
    for ( i = 1 ; matrix[i][0] != NULL ; i++ )
    {
        charMatrixToMemoCopy(memo, matrix, i);    //printf("\n memo: %s", memo); //debug //printf("\n loop i: %d", i); //debug
        for ( j = i ; j > 0 && isWordBiggerThanMemo(matrix, j-1, memo) == 1 ; j-- )
            charMatrixToMatrixCopy(matrix, j, j-1);    //printf("\n la palabra en la posicion %d se movio a la posicion %d", i-1, i); //debug
        charMemoToMatrixCopy(matrix, j, memo);    //printf("\n la palabra '%s' se copio a la posicion matrix[%d][]", memo, i); //debug
    }
}

void charMemoToMatrixCopy(char matrix[MAXWORDS][MAXWORDLENGTH], int wordPos, char memo[MAXWORDLENGTH])
{
    int i;
    for ( i = 0 ; memo[i] != '\0' ; i++ )
        matrix[wordPos][i] = memo[i];
    matrix[wordPos][i] = '\0';
}

void charMatrixToMemoCopy(char memo[MAXWORDLENGTH], char matrix[MAXWORDS][MAXWORDLENGTH], int wordPos) //foo(funcion copia, matriz que se desea copiar, posicion de la palabra)
{
    int i;
    for ( i = 0 ; matrix[wordPos][i] != '\0' ; i++ )
        memo[i] = matrix[wordPos][i];
    memo[i] = '\0';
}

void charMatrixToMatrixCopy(char matrix[MAXWORDS][MAXWORDLENGTH], int wordCopyPos, int wordPos)
{
    int i;
    for ( i = 0 ; matrix[wordPos][i] != '\0' ; i++ )
        matrix[wordCopyPos][i] = matrix[wordPos][i];
    matrix[wordCopyPos][i] = '\0';
}

int isWordBiggerThanMemo(char matrix[MAXWORDS][MAXWORDLENGTH], int wordPos, char memo[MAXWORDLENGTH]) //foo(matriz, posicion de palabra en matriz 'es meyor a', palabra) //true : 1, false: -1.
{
    int i;
    for ( i = 0 ; ( matrix[wordPos][i] != '\0' || memo[i] != '\0' ) && matrix[wordPos][i] >= memo[i] ; i++ )
    {
        if ( matrix[wordPos][i] == memo[i] ) continue;
        return 1;
    }
    return -1;
}

//Ejercicio 12, opcion a
/*12. Hacer una función que retorne el determinante de una matriz de 2x2.*/
void matrixMathExercises()
{
    int matrix2x2[SIZEROW2][SIZECOLUMN2];
    matrixRand(2, 2, matrix2x2);
    matrixPrint(2, 2, matrix2x2);
    printf("\nDeterminante de MATRIX 2x2: %d", matrix2Determinant(matrix2x2));
    int matrix5x5[5][5]; //test works
    matrixRand(5, 5, matrix5x5); //test works
    matrixPrint(5, 5, matrix5x5); //test works
}

//det ( a b ) = a*d - b*c
//    ( c d )
int matrix2Determinant(int matrix[2][2])
{
    int determinant;
    determinant = ( matrix[0][0] * matrix[1][1] ) - ( matrix[0][1] * matrix[1][0] );
    return determinant;
}

void matrixRand(int sizeRow, int sizeColumn, int matrix[sizeRow][sizeColumn]) //funcion que rellena una matriz sizeRow x sizeColumn con valores int random del 0 al 9
{
    int i, j;
    for ( i = 0 ; i < sizeRow ; i++ )
        for ( j = 0 ; j < sizeColumn ; j++ )
            matrix[i][j] = (rand() % 10 );
}

void matrixPrint(int sizeRow, int sizeColumn, int matrix[sizeRow][sizeColumn]) // muestra la matriz en forma matricial
{
    int i, j;
    printf("\nMATRIX: \n | ");
    for ( i = 0 ; i < sizeRow ; i++ )
    {
        for ( j = 0 ; j < sizeColumn ; j++ )
            printf("%d ", matrix[i][j]);
        printf("|\n | ");
    }
    printf("\b\b  ");
}

//Ejercicio practica, opcion b
void matrixDeterminantGauss() //test //falta agregar excepcion para que no divida por 0, despues de eso funciona bien
{
    int i, j;
    int size = 5;
    float memo[size], divisor, determinant;
    float fMatrix5x5[size][size];
    fMatrixRand(size, size, fMatrix5x5);
    fMatrixPrint(size, size, fMatrix5x5);
    for ( j = 0 ; j < (size - 1) ; j++ )
    {
        for ( i = j + 1 ; i < size ; i++ )
        {
            floatMatrixToMemoCopy(size, memo, j, fMatrix5x5);
            fMemoPrint(size, memo); //debug
            divisor = fMatrix5x5[i][j] / fMatrix5x5[j][j];
            printf("\ndivisor: %.2f", divisor); //debug
            if ( divisor == 0 ) continue;
            fMemoMultiply(size, divisor, memo); //debug
            fMemoPrint(size, memo); //debug
            fMatrixSubtraction(size, memo, i, fMatrix5x5);
            fMatrixPrint(size, size, fMatrix5x5); //debug
        }
    }
    determinant = fMatrix5x5[0][0];
    for ( i = 1 ; i < size ; i++ )
    {
        determinant = determinant * fMatrix5x5[i][i];
    }
    printf("\nDeterminant = %.2f", determinant);
}

void floatMatrixToMemoCopy(int size, float memo[size], int position, float matrix[size][size])
{
    int i;
    for ( i = 0 ; i < size ; i++ )
        memo[i] = matrix[position][i];
}

void floatMemoToMatrixCopy(int size, int position, float matrix[size][size], float memo[size])
{
    int i;
    for ( i = 0 ; i < size ; i++ )
        matrix[position][i] = memo[i];
}

void floatMatrixToMatrixCopy(int size, float matrix[size][size], int positionCopy, int position)
{
    int i;
    for ( i = 0 ; i < size ; i++ )
        matrix[positionCopy][i] = matrix[position][i];
}

void fMatrixRand(int sizeRow, int sizeColumn, float matrix[sizeRow][sizeColumn]) //funcion que rellena una matriz sizeRow x sizeColumn con valores int random del 0 al 9
{
    int i, j;
    for ( i = 0 ; i < sizeRow ; i++ )
        for ( j = 0 ; j < sizeColumn ; j++ )
            matrix[i][j] = (rand() % 10 );
}

void fMatrixPrint(int sizeRow, int sizeColumn, float matrix[sizeRow][sizeColumn]) // muestra la matriz en forma matricial
{
    int i, j;
    printf("\nMATRIX: \n | ");
    for ( i = 0 ; i < sizeRow ; i++ )
    {
        for ( j = 0 ; j < sizeColumn ; j++ )
            printf("%.2f ", matrix[i][j]);
        printf("|\n | ");
    }
    printf("\b\b  ");
}

void fMemoPrint(int size, float memo[size])
{
    int i;
    printf("\n");
    for ( i = 0 ; i < size ; i++) printf("%.2f, ", memo[i]);
    printf("\b\b  ");
}

void fMemoMultiply(int size, float multiplier, float memo[size])
{
    int i;
    for ( i = 0 ; i < size; i++) memo[i] = memo[i] * multiplier;
}

void fMatrixSubtraction(int size, float memo[size], int position, float matrix[size][size])
{
    int i;
    for ( i = 0 ; i < size; i++) matrix[position][i] = matrix[position][i] - memo[i];
}

//Ejercicio 13, opcion c
/*13. Función que verifique si una matriz de 2x2 tiene inversa.*/
void matrix2x2IsInvertible()
{
    int iMatrix2x2[SIZEROW2][SIZECOLUMN2];
    matrixRand(SIZEROW2, SIZECOLUMN2, iMatrix2x2);
    matrixPrint(SIZEROW2, SIZECOLUMN2, iMatrix2x2);
    if ( matrix2Determinant(iMatrix2x2) == 0 ) printf("\nLa matriz no tiene inversa");
    else printf("\nLa matriz tiene inversa");
}

//Ejercicio 14, opcion d
/*14. Hacer una función que multiplique una matriz de 2x2 por una matriz de 2x5.*/
void iMatrixMultiplication()
{
    int i, j, iMatrix2x2[2][2], iMatrix2x5[2][5], iMatrixResult[2][5]; // matrix l x m * matrix m x n = matrix l x n .. l = 2, m = 2, m = 2, n = 5
    matrixRand(2, 2, iMatrix2x2);
    matrixPrint(2, 2, iMatrix2x2);
    matrixRand(2, 5, iMatrix2x5);
    matrixPrint(2, 5, iMatrix2x5);
    for ( i = 0 ; i < 2 ; i++ ) //i < l
    {
        for ( j = 0 ; j < 5 ; j++ ) //i < n
        {
            iMatrixResult[i][j] = ( iMatrix2x2[i][0] * iMatrix2x5[0][j] ) + ( iMatrix2x2[i][1] * iMatrix2x5[1][j] );
            //printf("\n iMatrixResult[%d][%d]: %d",i, j, iMatrixResult[i][j]); //debug
        }
    }
    matrixPrint(2, 5, iMatrixResult);
}

//Ejercicio 15, opcion e
/*15. Hacer una función que calcule la matriz inversa de una matriz de 2x2.*/
void iMatrix2x2Invert()
{
    int iMatrix2x2[2][2];
    matrixRand(2, 2, iMatrix2x2);
    matrixPrint(2, 2, iMatrix2x2);
    if (matrix2Determinant(iMatrix2x2) != 0)
    {
        printf("\n matrix2Determinant(iMatrix2x2): ");
    }
    else
    {
        printf("\n El determinante de la matriz es 0, la matriz no tiene inversa.");
    }
}
