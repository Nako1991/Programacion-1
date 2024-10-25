#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

//Prototipado
void ejercicioNro1();
void ejercicioNro2();
void ejercicioNro3();
void ejercicioNro4();
void ejercicioNro5();
void ejercicioNro6();
void ejercicioNro7();
void ejercicioNro8();
void ejercicioNro9();
void ejercicioNro10();
void ejercicioNro11();
void ejercicioNro12();

int ingresarValidosArray(int [], int );
void mostrarArray(int [],int );
int generarValidosArray(int [], int );
int sumatoriaArray(int [],int );
void generarPila(Pila*, int );
void copiarArrayEnPila(int [],int, Pila* );
int generarValidosArrayF(float [], int );
float sumatoriaArrayF(float [],int );
void mostrarArrayF(float [],int );
void mostrarTablaASCII();
int generarValidosArrayC(char [], int );
int buscarEnArrayC(char [], int, char );
void mostrarArrayC(char [],int );
void ordenarArrayC(char [], int );
void insertarC(char [], int, char );
int insertarEnArrayC(char [], int, char );
char maximoArrayC(char [], int );
int generarValidosArrayBinario(int [], int );
int capicuaArray(int [], int );
void invertirArray(int [], int );
void invertirInteger(int *, int *);
void ordenarXSeleccionArrayInt(int [], int );
int indexMenorArrayInt(int [], int, int );
void ordenarXInsercionArrayInt(int [], int );
void intercalarOrdenadoArrayInt(int [], int, int [], int, int [], int );


int main()
{
    int nroEjercicio;
    char continuar = 'c'; //cuando continuar != 'c' se sale del programa

    do
    {
        printf("\nTrabajo Practico Nro 4: Arreglos");
        printf("\n\n1. Hacer una funcion que reciba como parametro un arreglo de numeros enteros y permita que");
        printf("\nel usuario ingrese valores al mismo por teclado. La funcion debe retornar la cantidad de)");
        printf("\nelementos cargados en el arreglo (o pueden utilizar como puntero validos)");
        printf("\n\n2. Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos)");
        printf("\ncargados en el y los muestre por pantalla.");
        printf("\n\n3. Hacer una funcion que reciba como parametro un arreglo y la cantidad de elementos (validos)");
        printf("\ncargados en el y calcule la suma de sus elementos.");
        printf("\n\n4. Hacer una funcion que reciba como parametro un arreglo, la cantidad de elementos (validos)");
        printf("\n\cargados en el y una Pila. La funcion debe copiar los elementos del arreglo en la pila.");
        printf("\n\n5. Realizar una funcion que sume los elementos de un arreglo de numeros reales (float) de");
        printf("\ndimension 100. (se recomienda hacer una funcion para cargar y otra para mostrar para este");
        printf("\ntipo de dato asociado al arreglo)");
        printf("\n\n6. Realizar una funcion que indique si un elemento dado se encuentra en un arreglo de caracteres.");
        printf("\n\n7. Realizar una funcion que inserte un caracter en un arreglo ordenado alfabeticamente,");
        printf("\nconservando el orden.");
        printf("\n\n8. Realizar una funcion que obtenga el maximo caracter de un arreglo dado.");
        printf("\n\n9. Realizar una funcion que determine si un arreglo es capicua.");
        printf("\n\n10. Realizar una funcion que invierta los elementos de un arreglo. (sin utilizar un arreglo auxiliar)");
        printf("\n\n11. Ordenar un arreglo segun los siguientes metodos: a. Seleccion   b. Insercion");
        printf("\n\n12. Dados dos arreglos ordenados alfabeticamente, crear un tercer arreglo con los elementos de");
        printf("\nlos dos primeros intercalados, de manera que quede un arreglo tambien ordenado alfabeticamente.");
        printf("\n\n13. Dado el vector {1,5,6,7,8} escribir un programa que genere otro vector con la suma del");
        printf("\ncontenido de todo los elementos anteriores al indice actual: {1,6,12,19,27}.");

        printf("\n\nIngrese un numero de ejercicio a ejecutar (0 para salir): ");
        fflush(stdin);
        scanf("%i", &nroEjercicio);

        switch(nroEjercicio)
        {
        case 1:
            ejercicioNro1();
            break;
        case 2:
            ejercicioNro2();
            break;
        case 3:
            ejercicioNro3();
            break;
        case 4:
            ejercicioNro4();
            break;
        case 5:
            ejercicioNro5();
            break;
        case 6:
            ejercicioNro6();
            break;
        case 7:
            ejercicioNro7();
            break;
        case 8:
            ejercicioNro8();
            break;
        case 9:
            ejercicioNro9();
            break;
        case 10:
            ejercicioNro10();
            break;
        case 11:
            ejercicioNro11();
            break;
        case 12:
            ejercicioNro12();
            break;
        case 13:
            //ejercicioNro13();
            break;
        case 0:
            continuar = 's';
            break;
        default:
            printf("\nEl numero de ejercicio ingresado no es valido.\n\n");
            break;
        }

        if ( continuar != 's' )
        {
            printf("\n\nEjercicio finalizado, desea continuar ejecutando la guia? ('c' para continuar, cualquier otro caracter para salir): ");
            fflush(stdin);
            scanf("%c", &continuar);
        }

    }
    while ( continuar == 'c' );

    printf("\n\nSaliendo del programa...\n");
}

/**Hacer una funcion que reciba como parámetro un arreglo de numeros enteros y permita que
//el usuario ingrese valores al mismo por teclado. La funcion debe retornar la cantidad de
//elementos cargados en el arreglo (o pueden utilizar como puntero válidos)*/
void ejercicioNro1()
{
    int array[15];
    int validos;

    validos = ingresarValidosArray(array, 15);

    printf("\nLos datos cargados en el array son: ");
    mostrarArray(array, validos);
}

/**2. Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos)
cargados en él y los muestre por pantalla.*/
void ejercicioNro2()
{
    int array[8];
    int validos;
    srand(time(NULL));

    validos = generarValidosArray(array, 8);
    printf("\nArray: ");
    mostrarArray(array, validos);
}


/**3. Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos)
cargados en él y calcule la suma de sus elementos.*/
void ejercicioNro3()
{
    int array[8];
    int validos, suma;
    srand(time(NULL));

    validos = generarValidosArray(array, 8);
    printf("\nArray: ");
    mostrarArray(array, validos);
    suma = sumatoriaArray(array, validos);
    printf("\nLa suma de los elementos del array es de: %i", suma);
}

/**4. Hacer una función que reciba como parámetro un arreglo, la cantidad de elementos (válidos)
cargados en él y una Pila. La función debe copiar los elementos del arreglo en la pila.*/
void ejercicioNro4()
{
    int array[8];
    int validos;
    Pila pila;
    inicpila(&pila);
    srand(time(NULL));

    validos = generarValidosArray(array, 8);
    printf("\nArray: ");
    mostrarArray(array, validos);
    copiarArrayEnPila(array, validos, &pila);
    printf("\npila: ");
    mostrar(&pila);

}

/**5. Realizar una función que sume los elementos de un arreglo de números reales (float) de
dimensión 100. (se recomienda hacer una función para cargar y otra para mostrar para este
tipo de dato asociado al arreglo)*/
void ejercicioNro5()
{
    int validos;
    float array[8];
    float suma;
    srand(time(NULL));

    validos = generarValidosArrayF(array, 8);
    printf("\nArray: ");
    mostrarArrayF(array, validos);
    suma = sumatoriaArrayF(array, validos);
    printf("\nLa suma de los elementos del array es de: %.2f", suma);
}

/**6. Realizar una función que indique si un elemento dado se encuentra en un arreglo de caracteres.*/
void ejercicioNro6()
{
    char arrayChar[12];
    int validos;
    char elemento;
    elemento = 'e';
    srand(time(NULL));
    // mostrarTablaASCII(); //debug
    // NUMEROS DEL 0 AL 9: 48 - 57
    // CARACTERES DEL 'A' 65 AL 'Z' 90
    // CARACTERES DEL 'a' 97 AL 'z' 122
    validos = generarValidosArrayC(arrayChar, 12);
    printf("\nArray:");
    mostrarArrayC(arrayChar, validos);
    if( buscarEnArrayC(arrayChar, validos, elemento) == 1 )
    {
        printf("\nEl elemento se encuentra dentro del Array.\n");
    }
    else
    {
        printf("\nEl elemento no se encuentra dentro del Array.\n");
    }
}

/**7. Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente,
conservando el orden.*/
void ejercicioNro7()
{
    char arrayOrdenadoC[12];
    int validos;
    char caracterAInsertar;

    validos = generarValidosArrayC(arrayOrdenadoC, 11); //el array se completa dejando 1 espacio vacio 11/12
    ordenarArrayC(arrayOrdenadoC, validos);
    printf("\nArray de caracteres ordenado: ");
    mostrarArrayC(arrayOrdenadoC, validos);

    printf("\nIngrese un caracter a insertar en el Array: ");
    fflush(stdin);
    scanf("%c", &caracterAInsertar);

    //printf("\nvalidos: %i", validos); //debug VALIDOS VALE 11
    validos = insertarEnArrayC(arrayOrdenadoC, validos, caracterAInsertar); //se inserta el nuevo elemento
    printf("\nArray de caracteres ordenado luego de la insercion: ");
    //printf("\nvalidos: %i", validos); //debug VALIDOS VALE 118 POR ALGUN MOTIVO MISTERIOSO
    mostrarArrayC(arrayOrdenadoC, validos); //el array se completa, y se muestra validos + 1 = dimension
}

/** 8. Realizar una función que obtenga el máximo carácter de un arreglo dado*/
void ejercicioNro8()
{
    char arrayC[12];
    int validos;
    char maximoChar;

    validos = generarValidosArrayC(arrayC, 12);
    printf("\nArray de caracteres: ");
    mostrarArrayC(arrayC, validos);
    maximoChar = maximoArrayC(arrayC, validos);
    printf("\nmaximo: %c", maximoChar);
}

/**9. Realizar una función que determine si un arreglo es capicúa*/
void ejercicioNro9()
{
    int arrayI[5];
    int validos, esCapicua;

    validos = generarValidosArrayBinario(arrayI, 5);
    printf("\nArray de integers: ");
    mostrarArray(arrayI, validos);

    esCapicua = capicuaArray(arrayI, validos);
    if( esCapicua == 0 )
    {
        printf("\nEl array no es capicua.");
    }
    else
    {
        printf("\nEl array es capicua.");
    }

}

/**10. Realizar una función que invierta los elementos de un arreglo. (sin utilizar un arreglo auxiliar) */
void ejercicioNro10()
{
    int arrayI[15];
    int validos;

    validos = generarValidosArray(arrayI, 15);
    printf("\nArray de integers: ");
    mostrarArray(arrayI, validos);

    invertirArray(arrayI, validos);

    printf("\nArray de integers invertido: ");
    mostrarArray(arrayI, validos);
}

/**11. Ordenar un arreglo según los siguientes métodos: a. Selección b. Inserción */
void ejercicioNro11()
{
    int arrayInt1[12], arrayInt2[12];
    int validos1, validos2;

    validos1 = generarValidosArray(arrayInt1, 12);
    printf("\nArray de integers 1: ");
    mostrarArray(arrayInt1, validos1);
    validos2 = generarValidosArray(arrayInt2, 12);
    printf("\nArray de integers 2: ");
    mostrarArray(arrayInt2, validos2);

    ordenarXSeleccionArrayInt(arrayInt1, validos1);
    ordenarXInsercionArrayInt(arrayInt2, validos2);

    printf("\nArray de integers 1 ordenado por seleccion: ");
    mostrarArray(arrayInt1, validos1);
    printf("\nArray de integers 2 ordenado por insercion: ");
    mostrarArray(arrayInt2, validos2);
}

/**12. Dados dos arreglos ordenados alfabéticamente, crear un tercer arreglo con los elementos de
los dos primeros intercalados, de manera que quede un arreglo también ordenado alfabéticamente. */
void ejercicioNro12()
{
    int arrayInt1[8], arrayInt2[8], arrayIntIntercalado[16];
    int validos1, validos2, validosIntercalado;
    srand(time(NULL));

    validos1 = generarValidosArray(arrayInt1, 8);
    validos2 = generarValidosArray(arrayInt2, 8);
    validosIntercalado = validos1 + validos2;

    ordenarXSeleccionArrayInt(arrayInt1, validos1);
    ordenarXInsercionArrayInt(arrayInt2, validos2);

    printf("\nArray de integers ordenados 1: ");
    mostrarArray(arrayInt1, validos1);
    printf("\nArray de integers ordenados 2: ");
    mostrarArray(arrayInt2, validos2);

    intercalarOrdenadoArrayInt(arrayIntIntercalado, validosIntercalado, arrayInt1, validos1, arrayInt2, validos2);
    printf("\nArray de integers intercalado: ");
    mostrarArray(arrayIntIntercalado, validosIntercalado);
}

//FUNCIONES
int ingresarValidosArray(int array[], int dimensionArray)
{
    int validos;
    validos = 0;
    char continuar = 'c';

    while( validos < dimensionArray && continuar == 'c' )
    {
        printf("\nIngrese el valor del dato a ingresar al array: ");
        fflush(stdin);
        scanf("%i", &array[validos]);

        printf("\nDesea continuar ingresando valores? ( 'c' para continuar, cualquier otro valor para salir): ");
        fflush(stdin);
        scanf("%c", &continuar);

        validos++;
    }

    return validos;
}

void mostrarArray(int array[],int validos)
{
    int i = 0;

    printf("\n");
    while( i < validos )
    {
        printf("|%i| ", array[i]);
        i++;
    }
}

int generarValidosArray(int array[], int dimensionArray)
{
    int validos = 0;

    while( validos < dimensionArray )
    {
        array[validos] = rand()%10;
        validos++;
    }
    return validos;
}

int sumatoriaArray(int array[],int validos)
{
    int i = 0;
    int suma = 0;

    while( i < validos )
    {
        suma = suma + array[i];
        i++;
    }
    return suma;
}

void generarPila(Pila* pila, int elementos)
{
    int i = 0;

    while( i < elementos )
    {
        apilar(pila, rand()%10);
        i++;
    }
}

void copiarArrayEnPila(int array[],int validos, Pila* pila)
{
    int i = 0;

    while( i < validos )
    {
        apilar(pila, array[i]);
        i++;
    }
}

int generarValidosArrayF(float array[], int dimensionArray)
{
    int validos = 0;

    while( validos < dimensionArray )
    {
        array[validos] = ( rand()%10 + rand()%10 * 0.1 + rand()%10 * 0.01 );
        validos++;
    }
    return validos;
}

float sumatoriaArrayF(float array[],int validos)
{
    int i = 0;
    float suma = 0;

    while( i < validos )
    {
        suma = suma + array[i];
        i++;
    }
    return suma;
}

void mostrarArrayF(float array[],int validos)
{
    int i = 0;

    printf("\n");
    while( i < validos )
    {
        printf("|%.2f| ", array[i]);
        i++;
    }
}

void mostrarTablaASCII()
{
    int i;
    char caracter;
    for( i = 0 ; i < 256 ; i++ )
    {
        caracter = i;
        printf("\n Char #%i: '%c'.", caracter, caracter);
    }
}

int generarValidosArrayC(char arrayChar[], int dimensionTotal)
{
    int validos = 0;
    while( validos < dimensionTotal )
    {
        arrayChar[validos] = rand()%25+97;
        validos++;
    }
    return validos;
}

int buscarEnArrayC(char arrayChar[], int validos, char elemento)
{
    int i = 0;
    while( i < validos )
    {
        if( arrayChar[i] == elemento ) return 1;
        i++;
    }
    return 0;
}

void mostrarArrayC(char arrayChar[],int validos)
{
    int i = 0;

    printf("\n");
    while( i < validos )
    {
        printf("'%c' ", arrayChar[i]);
        i++;
    }
}

void ordenarArrayC(char arrayChar[], int validos)
{
    int i = 0;
    while( i < validos - 1 )
    {
        //printf("\nSe cumple la condicion: ( i < validos - 1 )."); //debug
        //printf("\n i: %i, arrayChar[%i]: '%c' == %i, validos: %i", i, i, arrayChar[i], arrayChar[i], validos); //debug
        insertarC(arrayChar, i, arrayChar[i+1]);
        i++;
    }
}

void insertarC(char arrayChar[], int indexInicial, char caracterAInsertar)
{
    int i = indexInicial;
    while( i >= 0 && caracterAInsertar < arrayChar[i] )
    {
        //printf("\nSe cumple la condicion: ( i >= 0 && caracterAInsertar < arrayChar[i] )."); //debug
        //printf("\ni: %i, caracterAInsertar: %i, arrayChar[%i]: %c == %i, arrayChar[%i]: %c == %i", i, caracterAInsertar, i, arrayChar[i], arrayChar[i], i+1, arrayChar[i+1], arrayChar[i+1]); //debug
        arrayChar[i+1] = arrayChar[i];
        i--;
    }
    arrayChar[i+1] = caracterAInsertar;
}

int insertarEnArrayC(char arrayOrdenadoChar[], int validos, char caracterAInsertar)
{
    int i = validos;
    while( i >= 0 && caracterAInsertar < arrayOrdenadoChar[i])
    {
        arrayOrdenadoChar[i+1] = arrayOrdenadoChar[i];
        i--;
    }
    arrayOrdenadoChar[i+1] = caracterAInsertar;
    return validos + 1;
}

char maximoArrayC(char arrayC[], int validos)
{
    int i = 0;
    char maximo;
    while( i < validos)
    {
        if( maximo < arrayC[i])
        {
            maximo = arrayC[i];
        }
        i++;
    }
    return maximo;
}

int generarValidosArrayBinario(int array[], int dimensionArray)
{
    int validos = 0;

    while( validos < dimensionArray )
    {
        array[validos] = rand()%2;
        validos++;
    }
    return validos;
}

int capicuaArray(int array[], int validos)
{
    int i = 0;
    int esCapicua = 1;

    while( i < validos )
    {
        if( array[i] != array[(validos-1)-i])
        {
            esCapicua = 0;
            return esCapicua;
        }
        i++;
    }
    return esCapicua;
}

void invertirArray(int arrayI[], int validos)
{
    int i = 0, copia;

    while( i < validos / 2 )
    {
        invertirInteger(&arrayI[i], &arrayI[(validos-1) - i]);
        i++;
    }
}

void invertirInteger(int *x, int *y)
{
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

void ordenarXSeleccionArrayInt(int array[], int validos)
{
    int i = 0;
    int indexMenor;

    while( i < validos - 1 )
    {
        indexMenor = indexMenorArrayInt(array, i, validos);
        invertirInteger(&array[i], &array[indexMenor]);
        i++;
    }
}

int indexMenorArrayInt(int array[], int inicio, int validos)
{
    int i = inicio;
    int menor = array[inicio];
    int indexMenor = inicio;
    while( i < validos )
    {
        if( menor > array[i] )
        {
            menor = array[i];
            indexMenor = i;
        }
        i++;
    }
    return indexMenor;
}

void ordenarXInsercionArrayInt(int array[], int validos)
{
    int i = 1;
    int j;
    int valorAOrdenar;

    while( i < validos )
    {
        j = i;
        valorAOrdenar = array[i];
        while( j > 0 && array[j-1] > valorAOrdenar )
        {
            array[j] = array[j-1];
            j--;
        }
        array[j] = valorAOrdenar;
        i++;
    }
}

void intercalarOrdenadoArrayInt(int arrayIntIntercalado[], int validosIntercalado, int arrayInt1[], int validos1, int arrayInt2[], int validos2)
{
    int i = 0, j = 0, k = 0;

    while( i < validos1 && j < validos2 )
    {
        if( arrayInt1[i] < arrayInt2[j] )
        {
            arrayIntIntercalado[k] = arrayInt1[i];
            i++;
        }
        else
        {
            arrayIntIntercalado[k] = arrayInt2[j];
            j++;
        }
        k++;
    }

    while( i < validos1 )
    {
        arrayIntIntercalado[k] = arrayInt1[i];
        i++;
        k++;
    }
    while( j < validos2 )
    {
        arrayIntIntercalado[k] = arrayInt2[j];
        j++;
        k++;
    }
}
