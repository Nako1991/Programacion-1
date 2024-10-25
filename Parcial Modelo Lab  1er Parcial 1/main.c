#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

#define maxAlumnos 100

//PROTOTIPADO
//Ejercicio 1
int cargarNotas(int [], int );
int validarNota(int );
int generarNotas(int [], int, int );
void mostrarArrayInt(int [], int );
//Ejercicio 2
void apilarNotas(int [], int, Pila, Pila * );
//Ejercicio 3
int buscarMayorNota(int [], int );
//Ejercicio 4
void cargarYDividirPila(Pila , Pila * , Pila * );
//Ejercicio 5
void generarPila(Pila * , int );
void dividirPila(Pila * , Pila, Pila * , Pila * );
int pasarPilaAArreglo(Pila * , Pila * , int [], int );
//Ejercicio 6
float promedioArrayIntercalado(int [], int );

//MAIN
int main()
{
    //DECLARACIONES
    srand(time(NULL));
    //Ejercicio 1
    int notas[maxAlumnos];
    int validosNotas;
    //Ejercicio 2
    Pila pilaAprobados;
    inicpila(&pilaAprobados);
    Pila pilaDesaprobados;
    inicpila(&pilaDesaprobados);
    //Ejercicio 3
    int mayorNota;
    //Ejercicio 4
    Pila pilaA;
    inicpila(&pilaA);
    Pila pilaB;
    inicpila(&pilaB);
    Pila pilaC;
    inicpila(&pilaC);
    //Ejercicio 5
    Pila pilaD;
    inicpila(&pilaD);
    Pila descarte;
    inicpila(&descarte);
    int arregloPilaB[maxAlumnos]; //arbitrarios 100 espacios de memoria
    int validosArregloPilaB;
    //Ejercicio 6
    float promedioArray;

    //Ejercicio 1
    //validosNotas = cargarNotas(notas, maxAlumnos); //SI ME OLVIDO DE DESCOMENTAR PERDONE MI ALMA
    validosNotas = generarNotas(notas, maxAlumnos, 30);
    printf("\nLa cantidad de notas ingresadas es de: %i\n", validosNotas);
    mostrarArrayInt(notas, validosNotas);

    //Ejercicio 2
    apilarNotas(notas, validosNotas, pilaDesaprobados, &pilaAprobados);
    /**Estos print son para corroborar el tipo de pasaje de las pilas
    printf("\npilaDesaprobados: ");
    mostrar(&pilaDesaprobados);
    printf("\npilaAprobados: ");
    mostrar(&pilaAprobados); */

    //Ejercicio 3
    mayorNota = buscarMayorNota(notas, validosNotas);
    printf("\nLa mayor nota de la clase es de: %i\n", mayorNota);

    //Ejercicio 4
    //cargarYDividirPila(pilaA, &pilaB, &pilaC); //SI ME OLVIDO DE DESCOMENTAR PERDONE MI ALMA
    /**Estos print son para corroborar el tipo de pasaje de las pilas
    printf("\npilaA: ");
    mostrar(&pilaA);
    printf("\npilaB: ");
    mostrar(&pilaB);
    printf("\npilaC: ");
    mostrar(&pilaC); */

    //Ejercicio 5
    generarPila(&pilaD, 20);
    printf("\npilaD: ");
    mostrar(&pilaD);
    dividirPila(&pilaD, pilaA, &pilaB, &pilaC);
    printf("\npilaB: ");
    mostrar(&pilaB);
    validosArregloPilaB = pasarPilaAArreglo(&pilaB, &descarte, arregloPilaB, maxAlumnos);
    printf("\narregloPilaB: ");
    mostrarArrayInt(arregloPilaB, validosArregloPilaB);
    printf("\n\npilaB: ");
    mostrar(&pilaB);

    //Ejercicio 6
    promedioArray = promedioArrayIntercalado(arregloPilaB, validosArregloPilaB);
    printf("\nEl promedio del array es de: %.2f", promedioArray);

    printf("\n\nSaliendo del programa...");
    return 0;
}

//FUNCIONES
//Ejercicio 1
int cargarNotas(int notas[], int dimension)
{
    int i = 0, validos; //variable validos creada para mejor comprension
    char continuar = 's';
    int nota;

    while( continuar == 's' && i < dimension )
    {
        printf("\nIngrese la nota nro %i: ", i+1);
        fflush(stdin);
        scanf("%i", &nota);

        if( validarNota(nota) == 1 )
        {
            notas[i] = nota;
            i++;
        }
        else
        {
            printf("\nLa nota ingresada no es valida.");
        }

        printf("\nDesea continuar ingresando notas? s/n: ");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    validos = i;
    return validos;
}

int validarNota(int nota)
{
    if( nota >= 0 && nota <= 10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int generarNotas(int notas[], int dimension, int validos)
{
    int i = 0;
    while( i < validos)
    {
        notas[i] = rand()%11;
        i++;
    }
    return validos;
}

void mostrarArrayInt(int notas[], int validos)
{
    int i = 0;
    printf("\n");
    while( i < validos )
    {
        printf("|%i| ", notas[i]);
        i++;
        if( i%10 == 0 )
        {
            printf("\n");
        }
    }
}

//Ejercicio 2
void apilarNotas(int notas[], int validos, Pila pilaDesaprobados, Pila *pilaAprobados)
{
    int i = 0;
    while( i < validos )
    {
        if( notas[i] <= 5)
        {
            apilar(&pilaDesaprobados, notas[i]);
        }
        else
        {
            apilar(pilaAprobados, notas[i]);
        }
        i++;
    }
    /**Estos print son para corroborar el tipo de pasaje de los parametros
    printf("\npilaDesaprobados: ");
    mostrar(&pilaDesaprobados);
    printf("\npilaAprobados: ");
    mostrar(pilaAprobados);*/
}

//Ejercicio 3
int buscarMayorNota(int notas[], int validos)
{
    int i = validos - 2;
    int mayorNota = notas[validos - 1];
    while( i >= 0 )
    {
        if( mayorNota < notas[i] )
        {
            mayorNota = notas[i];
        }
        i--;
    }
    return mayorNota;
}

//Ejercicio 4
void cargarYDividirPila(Pila pilaA, Pila *pilaB, Pila *pilaC)
{
    char continuar = 's';
    int elemento;
    while( continuar == 's' )
    {
        printf("\nIngrese un elemento (numero entero) para ser almacenado segun el criterio: ");
        fflush(stdin);
        scanf("%i", &elemento);

        if( elemento%10 == 0 )
        {
            apilar(&pilaA, elemento);
        }
        else if( elemento%2 == 0 && elemento%10 != 0 )
        {
            apilar(pilaB, elemento);
        }
        else if( elemento%2 == 1 )
        {
            apilar(pilaC, elemento);
        }

        printf("\nDesea continuar ingresando notas? s/n: ");
        fflush(stdin);
        scanf("%c", &continuar);
    }

    /**Estos print son para corroborar el tipo de pasaje de los parametros
    printf("\npilaA: ");
    mostrar(&pilaA);
    printf("\npilaB: ");
    mostrar(pilaB);
    printf("\npilaC: ");
    mostrar(pilaC); */
}

//Ejercicio 5
void generarPila(Pila *pila, int validos)
{
    int i = 0;
    while( i < validos )
    {
        apilar(pila, rand()%60);
        i++;
    }
}

void dividirPila(Pila *pila, Pila pilaA, Pila *pilaB, Pila *pilaC)
{
    while( !pilavacia(pila) )
    {
        if( tope(pila)%10 == 0 )
        {
            apilar(&pilaA, desapilar(pila));
        }
        else if( tope(pila)%2 == 0 && tope(pila)%10 != 0 )
        {
            apilar(pilaB, desapilar(pila));
        }
        else if( tope(pila)%2 == 1 )
        {
            apilar(pilaC, desapilar(pila));
        }
    }
}

int pasarPilaAArreglo(Pila *pila, Pila *descarte, int arreglo[], int dimension)
{
    int i = 0, validos;
    Pila aux;
    inicpila(&aux);

    while( !pilavacia(pila) && i < dimension )
    {
        if( tope(pila) >= 4 && tope(pila) <= 48)
        {
            arreglo[i] = tope(pila);
            i++;
            apilar(descarte, desapilar(pila));
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
    validos = i;
    return validos;
}

//Ejercicio 6
float promedioArrayIntercalado(int array[], int validos)
{
    int i = validos-1;
    int flip = 0, suma = 0, j = 0;
    float promedio;
    while( i >= 0 )
    {
        if( flip == 0 )
        {
            suma = suma + array[i];
            j++;
        }

        if( flip == 0 )
        {
            flip = 1;
        }
        else if( flip == 1 )
        {
            flip = 0;
        }
        i--;
    }
    promedio = (float)suma / j;
    return promedio;
}
