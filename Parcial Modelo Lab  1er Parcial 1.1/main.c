#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

#define dimension 20

//PROTOTIPADO
//Ejercicio 1
void cargarPila(Pila * );
int generarPila(Pila * , int );
//Ejercicio 2
int copiarImparesPilaAArray(Pila * , int [], int );
void mostrarArrayInt(int [], int );
//Ejercicio 3
int mayorArrayInt(int [], int );
//Ejercicio 4
int menorPila(Pila * , Pila * );
//Ejercicio 5
float promedioArrayInt(int [], int );
//Ejercicio 6
int posicionArregloInt(int );
void mostrarPosicionArregloInt(int [], int );
//Ejercicio 7
void mostrarPila(Pila * );

//MAIN
int main()
{
    //DECLARACIONES
    //Ejercicio 1
    Pila pila;
    inicpila(&pila);
    srand(time(NULL));
    int validosPila;
    //Ejercicio 2
    int arrayInt[dimension];
    int validosArrayInt;
    //Ejercicio 3
    int mayorElementoArrayInt;
    //Ejercicio 4
    Pila descarte;
    inicpila(&descarte);
    int menorElementoPila;
    //Ejercicio 5
    float promedioArray;
    //Ejercicio 6
    int posicionArreglo;

    //LLAMADOS A FUNCION
    //Ejercicio 1
    //cargarPila(&pila); //carga a mano, DESCOMENTAR ANTES DE ENTREGAR
    validosPila = generarPila(&pila, 12); //se pasa validos como segundo parametro
    printf("\n\npila: ");
    mostrar(&pila);

    //Ejercicio 2
    validosArrayInt = copiarImparesPilaAArray(&pila, arrayInt, dimension);
    printf("\narrayInt: ");
    mostrarArrayInt(arrayInt, validosArrayInt);

    //Ejercicio 3
    mayorElementoArrayInt = mayorArrayInt(arrayInt, validosArrayInt);
    printf("\n\nEl mayor elemento del arrayInt es: %i.", mayorElementoArrayInt);

    //Ejercicio 4
    menorElementoPila = menorPila(&pila, &descarte);
    printf("\n\nEl menor elemento de la pila es: %i.", menorElementoPila);
    printf("\n\npila: ");
    mostrar(&pila);

    //Ejercicio 5
    promedioArray = promedioArrayInt(arrayInt, validosArrayInt);
    printf("\n\nEl promedio de todos los elementos del arrayInt es: %f.", promedioArray);

    //Ejercicio 6
    posicionArreglo = posicionArregloInt(validosArrayInt);
    mostrarPosicionArregloInt(arrayInt, validosArrayInt, posicionArreglo);

    //Ejercicio 7
    printf("\n\npila: ");
    mostrarPila(&pila);

    printf("\n\nSaliendo del programa...\n");
    return 0;
}


//FUNCIONES
//Ejercicio 1
void cargarPila(Pila *pila)
{
    char continuar = 's';
    do
    {
        printf("\nIngresando un elemento a la pila. ");
        leer(pila);

        printf("\nDesea continuar agregando elementos a la pila? s/n: ");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while ( continuar == 's');
}

int generarPila(Pila *pila, int validos)
{
    int i = 0;
    while( i < validos )
    {
        apilar(pila, rand()%10);
        i++;
    }
    return i;
}

//Ejercicio 2
int copiarImparesPilaAArray(Pila *pila, int arrayInt[], int dim)
{
    int i = 0, j = 0;
    int validosArrayInt;
    Pila aux;
    inicpila(&aux);

    while( !pilavacia(pila) && i < dim)
    {
        if( tope(pila)%2 == 1 )
        {
            //printf("\narrayInt[%i]: %i, tope(pila): %i, j: %i", i, arrayInt[i],  tope(pila), j); //debug
            arrayInt[j] = tope(pila);
            apilar(&aux, desapilar(pila));
            j++;
        }
        else
        {
            apilar(&aux, desapilar(pila));
        }
        i++;
    }
    while( !pilavacia(&aux) )
    {
        apilar(pila, desapilar(&aux));
    }
    validosArrayInt = j; //variable creada para comprender la funcion
    return validosArrayInt;
}

void mostrarArrayInt(int arrayInt[], int validos)
{
    int i = 0;
    printf("\n");
    while( i < validos )
    {
        printf("|%i| ", arrayInt[i]);
        i++;
    }
}

//Ejercicio 3
int mayorArrayInt(int arrayInt[], int validos)
{
    int i = 1;
    int mayor = arrayInt[0];
    while( i < validos )
    {
        if( mayor < arrayInt[i] )
        {
            mayor = arrayInt[i];
        }
        i++;
    }
    return mayor;
}

//Ejercicio 4
int menorPila(Pila *pila, Pila *descarte)
{
    Pila aux;
    Pila menor;
    inicpila(&aux);
    inicpila(&menor);
    int menorElemento;

    apilar(&menor, desapilar(pila));
    while( !pilavacia(pila) )
    {
        if( tope(&menor) > tope(pila) )
        {
            apilar(&aux, desapilar(&menor));
            apilar(&menor, desapilar(pila));
        }
        else
        {
            apilar(&aux, desapilar(pila));
        }
    }
    while( !pilavacia(&aux) )
    {
        apilar(pila, desapilar(&aux));
    }
    menorElemento = tope(&menor);
    apilar(descarte, desapilar(&menor));
    return menorElemento;
}

//Ejercicio 5
float promedioArrayInt(int arrayInt[], int validos)
{
    int i = 0;
    int suma = 0;
    float promedio;
    while( i < validos )
    {
        suma = suma + arrayInt[i];
        i++;
    }
    promedio = (float)suma / i;
    return promedio;
}

//Ejercicio 6
int posicionArregloInt(int validosArrayInt)
{
    int posicion;
    int posicionValida = 0;
    char salir;
    while( posicionValida == 0 )
    {
        printf("\n\nIngrese la posicion del elemento del array: ");
        fflush(stdin);
        scanf("%i", &posicion);
        if( posicion < 0 || posicion >= validosArrayInt )
        {
            printf("\nLa posicion ingresada no se encuentra dentro del arrayInt.");

            printf("\n\nDesea salir? s/n: ");
            fflush(stdin);
            scanf("%c", &salir);
        }
        else
        {
            posicionValida = 1;
        }
        if( salir == 's' )
        {
            return -1;
        }
    }
    return posicion;
}

void mostrarPosicionArregloInt(int arrayInt[], int validosArrayInt, int posicion)
{
    if( posicion >= 0 && posicion < validosArrayInt )
    {
        printf("\nEl valor del elemento en la posicion seleccionada es: %i", arrayInt[posicion]);
    }
}

//Ejercicio 7
void mostrarPila(Pila *pila)
{
    Pila aux;
    inicpila(&aux);

    while( !pilavacia(pila) )
    {
        apilar(&aux, desapilar(pila));
    }
    printf("\nBASE ---------------------------------------- TOPE\n");
    while( !pilavacia(&aux) )
    {
        printf("|%i| ", tope(&aux));
        apilar(pila, desapilar(&aux));
    }
    printf("\nBASE ---------------------------------------- TOPE\n");
}
