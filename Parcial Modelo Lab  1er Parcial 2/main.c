#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
//CONSTANTES
#define MAXDIAS 20 //20 numero arbitrario de días

//PROTOTIPADO
//Ejercicio 1
void cargarPila(Pila * );
void ejemploPila(Pila * );
void generarPila(Pila *, int );
//Ejercicio 2
int pilaAArray(Pila, int []);
int buscarMayorTramo(Pila, int * );
//Ejercicio 3
void mostrarDiasPila(Pila );
//Ejercicio 4
int kilometrosPorDia(Pila, int []);
int paradasPorDia(Pila , int []);
//Ejercicio 5
void mostrarArrayInt(int [], int );

//MAIN
//Ejercicio 6
int main()
{
    srand(time(NULL));
    //DECLARACIONES
    //Ejercicio 1
    Pila trekking;
    inicpila(&trekking);
    //Ejercicio 2
    int diaMayorTramo = -1; //inicializada para evitar un bug
    int mayorTramo;
    //Ejercicio 4
    int arrayTrekking[MAXDIAS];
    int validosArrayTrekking;
    int arrayTrekkingP[MAXDIAS];
    int validosArrayTrekkingK;
    int arrayTrekkingK[MAXDIAS];
    int validosArrayTrekkingP;

    //LLAMADOS A FUNCION
    //Ejercicio 1
    printf("\nEjercicio 1: ");
    //cargarPila(&trekking); //SI ME OLVIDO DE DESCOMENTAR PERDONE MI ALMA
    //ejemploPila(&trekking);
    generarPila(&trekking, 20); //20 tomado de forma arbitraria, brick test
    printf("\ntrekking: ");
    mostrar(&trekking);

    //Ejercicio 2
    printf("\nEjercicio 2: ");
    validosArrayTrekking = pilaAArray(trekking, arrayTrekking);
    mayorTramo = buscarMayorTramo(trekking, &diaMayorTramo);
    printf("\nEl tramo mas largo del recorrido es de: %i. Dia: %i\n", mayorTramo, diaMayorTramo);

    //Ejercicio 3
    printf("\nEjercicio 3: ");
    printf("\ntrekking: ");
    mostrarDiasPila(trekking);

    //Ejercicio 4
    printf("\n\nEjercicio 4: ");
    validosArrayTrekkingK = kilometrosPorDia(trekking, arrayTrekkingK);
    printf("\nvalidosArrayTrekkingK: %i.", validosArrayTrekkingK);
    validosArrayTrekkingP = paradasPorDia(trekking, arrayTrekkingP);
    printf("\nvalidosArrayTrekkingP: %i.", validosArrayTrekkingP);

    //Ejercicio 5
    printf("\n\nEjercicio 5: ");
    printf("\nkilometrosPorDia: ");
    mostrarArrayInt(arrayTrekkingK, validosArrayTrekkingK);
    printf("\nparadasPorDia: ");
    mostrarArrayInt(arrayTrekkingP, validosArrayTrekkingP);

    printf("\n\nSaliendo del programa... \n");
    return 0;
}

//FUNCIONES
//Ejercicio 1
void cargarPila(Pila *trekking)
{
    int elemento;
    char continuar = 's';

    while( continuar == 's' )
    {
        printf("\nIngrese el valor del elemento a apilar: ");
        fflush(stdin);
        scanf("%i", &elemento);

        if( elemento >= -1 )
        {
            apilar(trekking, elemento);
        }
        else
        {
            printf("\nEl valor del elemento ingresado no es valido.");
        }

        printf("\nDesea continuar ingresando datos? s/n: ");
        fflush(stdin);
        scanf("%c", &continuar);
    }
}

void ejemploPila(Pila *trekking)
{
    apilar(trekking, 5);
    apilar(trekking, 4);
    apilar(trekking, 10);
    apilar(trekking, 8);
    apilar(trekking, 2);
    apilar(trekking, -1);
    apilar(trekking, 8);
    apilar(trekking, 5);
    apilar(trekking, 7);
    apilar(trekking, -1);
    apilar(trekking, 4);
    apilar(trekking, 15);
    apilar(trekking, 1);
}

void generarPila(Pila *pila, int validos)
{
    int i = 0, descanso;
    Pila aux;
    inicpila(&aux);
    while( i < validos )
    {
        apilar(pila, rand()%10+1); //apila elementos del 1 al 10
        descanso = rand()%4; //hay 25% chance que termine el dia
        if( descanso == 0 )
        {
            apilar(&aux, desapilar(pila));
            apilar(pila, -1);
        }
        i++;
    }
}

//Ejercicio 2
int pilaAArray(Pila pila, int array[])
{
    int validos = 0;
    Pila aux;
    inicpila(&aux);
    while( !pilavacia(&pila) )
    {
        array[validos] = tope(&pila);
        apilar(&aux, desapilar(&pila));
        validos++;
    }
    return validos;
}

int buscarMayorTramo(Pila trekking, int *diaMayorTramo)
{
    int i = 0;
    int mayorTramo = tope(&trekking);
    Pila aux;
    inicpila(&aux);
    while( !pilavacia(&trekking) )
    {
        apilar(&aux, desapilar(&trekking));
    }
    while( !pilavacia(&aux) )
    {
        if( tope(&aux) == -1 )
        {
            i++;
        }
        if( mayorTramo < tope(&aux) )
        {
            mayorTramo = tope(&aux);
            *diaMayorTramo = i+1; //modifico el puntero por referencia
        }
        apilar(&trekking, desapilar(&aux));
    }
    if( *diaMayorTramo == -1) *diaMayorTramo = i+1;
    return mayorTramo; //retorno el mayorTramo
}

//Ejercicio 3
void mostrarDiasPila(Pila pila)
{
    int dia = 1;
    Pila aux;
    inicpila(&aux);

    while( !pilavacia(&pila) )
    {
        apilar(&aux, desapilar(&pila));
    }
    printf("\nDia %i: ", dia);
    while( !pilavacia(&aux) )
    {
        if( tope(&aux) == -1 )
        {
            if( pilavacia(&pila) ) printf("|0|");
            apilar(&pila, desapilar(&aux));
            dia++;
            printf("\nDia %i: ", dia);
            if( tope(&aux) == -1 && tope(&pila) == -1 || pilavacia(&aux) && tope(&pila) == -1 ) printf("|0|"); //mil horrores para solucionar este bug
        }
        if( !pilavacia(&aux) && tope(&aux) != -1 )
        {
            printf("|%i| ", tope(&aux));
            apilar(&pila, desapilar(&aux));
        }
    }
}

//Ejercicio 4
int kilometrosPorDia(Pila trekking, int arrayTrekkingK[])
{
    int i = 0, kmXDia = 0, dias;
    Pila aux;
    inicpila(&aux);

    while( !pilavacia(&trekking) )
    {
        apilar(&aux, desapilar(&trekking));
    }
    while( !pilavacia(&aux) )
    {
        if( tope(&aux) == -1 )
        {
            arrayTrekkingK[i] = kmXDia;
            kmXDia = 0;
            i++;
        }
        if( tope(&aux) != -1 ) kmXDia = kmXDia + tope(&aux);
        apilar(&trekking, desapilar(&aux));
    }
    arrayTrekkingK[i] = kmXDia;
    dias = i+1;
    return dias;
}

int paradasPorDia(Pila trekking, int arrayTrekkingP[])
{
    int i = 0, paradasXDia = 0, dias;
    Pila aux;
    inicpila(&aux);

    while( !pilavacia(&trekking) )
    {
        apilar(&aux, desapilar(&trekking));
    }
    while( !pilavacia(&aux) )
    {
        if( tope(&aux) == -1 )
        {
            arrayTrekkingP[i] = paradasXDia;
            paradasXDia = 0;
            i++;
        }
        if( tope(&aux) != -1 ) paradasXDia++;
        apilar(&trekking, desapilar(&aux));
    }
    arrayTrekkingP[i] = paradasXDia;
    dias = i+1;
    return dias;
}

//Ejercicio 5
void mostrarArrayInt(int array[], int validos)
{
    int i = 0;
    printf("\n");
    while( i < validos )
    {
        printf("|%i| ", array[i]);
        i++;
    }
    printf("\n");
}
