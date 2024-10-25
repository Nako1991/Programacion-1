#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int cargarPila(Pila *);
int copiarImparesarrayIntPila(Pila *, int []);
void mostrarArrayInt(int [], int );
void generarPila(Pila *, int );
int mayorElementoArray(int [], int );
void eliminarMenorElementoPila(Pila *, Pila *);
float promedioArrayInt(int [], int );
void mostrarPila(Pila *);
int ingresarPosicionArrayInt(int );

int main()
{
    Pila pila1;
    Pila descarte;
    inicpila(&pila1);
    inicpila(&descarte);
    int arrayInt[20];
    int validosPila, validosArrayInt, mayorElemento, posicionSeleccionada;
    srand(time(NULL));
    float promedioArray;

    validosPila = cargarPila(&pila1); //usando valores random para probar, descomentar al final
    //generarPila(&pila1, 12);
    printf("\npila1: ");
    mostrar(&pila1);

    validosArrayInt = copiarImparesarrayIntPila(&pila1, arrayInt);
    printf("\narrayInt: ");
    mostrarArrayInt(arrayInt, validosArrayInt);

    mayorElemento = mayorElementoArray(arrayInt, validosArrayInt);
    printf("\n\nEl mayor elemento del arrayInt es: %i", mayorElemento);

    printf("\nEliminando el menor elemento de la pila1...");
    eliminarMenorElementoPila(&pila1, &descarte);
    printf("\npila1: ");
    mostrar(&pila1);

    printf("\nCalculando el promedio de todos los elementos del arrayInt...");
    promedioArray = promedioArrayInt(arrayInt, validosArrayInt);
    printf("\nEl promedio de los elementos del array es de: %.2f\n", promedioArray);

    posicionSeleccionada = ingresarPosicionArrayInt(validosArrayInt);
    //int posicionSeleccionada = 3;// debug
    printf("\nEl valor de la posicion recién ingresada es: %i", arrayInt[posicionSeleccionada]);

    mostrarPila(&pila1);

    printf("\n\nSaliendo del programa...\n");
    return 0;
}

int cargarPila(Pila *pila1)
{
    int validos = 0;
    int elemento;
    char continuar = 's';

    while( continuar == 's' )
    {
        printf("\nIngrese un valor a la pila: ");
        fflush(stdin);
        scanf("%i", &elemento);

        apilar(pila1, elemento);
        validos++;

        printf("\nDesea continuar apilando? s/n: ");
        fflush(stdin);
        scanf("%c", &continuar);
    }

    return validos;
}

int copiarImparesarrayIntPila(Pila *pila, int arrayInt[])
{
    int validos = 0;
    Pila aux;
    inicpila(&aux);

    //printf("\nIngreso a copiarImparesarrayIntPila..."); //debug
    while( !pilavacia(pila) )
    {
        //printf("\nIngreso a '!pilavacia(pila)'"); //debug
        if( (tope(pila)%2) == 1 )
        {
            //printf("\nIngreso a 'tope(pila)%2 == 1'"); //debug
            arrayInt[validos] = tope(pila);
            apilar(&aux, desapilar(pila));
            validos++;
        }
        else
        {
            //printf("\nIngreso a 'else'"); //debug
            apilar(&aux, desapilar(pila));
        }
    }
    while( !pilavacia(&aux) )
    {
        apilar(pila, desapilar(&aux));
    }

    return validos;
}

void mostrarArrayInt(int arrayInt[], int validos)
{
    int i = 0;
    printf("\n");
    while( i < validos)
    {
        printf(" |%i| ", arrayInt[i]);
        i++;
    }
}

void generarPila(Pila *pila1, int nroElementos)
{
    int i = 0;
    while( i < nroElementos )
    {
        apilar(pila1, rand()%10);
        i++;
    }
}

int mayorElementoArray(int array[], int validos)
{
    int i = 1;
    int mayor = array[0];

    while( i < validos && array[i] >  mayor )
    {
        mayor = array[i];
        i++;
    }
    return mayor;
}

void eliminarMenorElementoPila(Pila *pila1, Pila *descarte)
{
    Pila aux;
    Pila menor;
    inicpila(&aux);
    inicpila(&menor);

    apilar(&menor, desapilar(pila1));
    while( !pilavacia(pila1))
    {
        if(  tope(pila1) < tope(&menor) )
        {
            apilar(&aux, desapilar(&menor));
            apilar(&menor, desapilar(pila1));
        }
        else
        {
            apilar(&aux, desapilar(pila1));
        }
    }
    while( !pilavacia(&aux) )
    {
        apilar(pila1, desapilar(&aux));
    }

    apilar(descarte, desapilar(&menor));
}

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

    promedio = (float)suma / validos; //forzado a float
    return promedio;
}

void mostrarPila(Pila *pila)
{
    Pila aux;
    inicpila(&aux);

    printf("\nBASE--------------------------------------------------------TOPE\n");

    while( !pilavacia(pila) )
    {
        printf("|%i| ", tope(pila));
        apilar(&aux, desapilar(pila));
    }

    printf("\nBASE--------------------------------------------------------TOPE\n");

    while( !pilavacia(&aux) )
    {
        apilar(pila, desapilar(&aux));
    }
}

int ingresarPosicionArrayInt(validos)
{
    int posicion = -1;

    while( posicion == -1 )
    {
        printf("\nIngresar la posicion de la informacion del array a la que desea acceder: ");
        fflush(stdin);
        scanf("%i", &posicion);

        if( posicion >= 0 && posicion < validos )
        {
            return posicion;
        }
        else
        {
            printf("\nLa posicion ingresada no se encuentra dentro del arrayInt.\n");
        }
    }
}

void mostrarElementoSeleccionado(int arrayInt[], int elemento)
{
    printf("\nEl valor de la posicion ingresada es: %i\n", arrayInt[elemento]);
}
