#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{

    int num = 0;

    Pila dada, aux, menor;

    inicpila(&dada);
    inicpila(&aux);
    inicpila(&menor);

    apilar(&dada, 5);
    apilar(&dada, 3);
    apilar(&dada, 1);
    apilar(&dada, 2);
    apilar(&dada, 4);


    /** Encontrar el menor en una pila **/

    if(!pilavacia(&dada)){
        apilar(&menor, desapilar(&dada));
    }

    while(!pilavacia(&dada)){
        if(tope(&dada)<tope(&menor)){
            apilar(&aux, desapilar(&menor));
            apilar(&menor, desapilar(&dada));
        }
        else{
            apilar(&aux, desapilar(&dada));
        }
    }

    while(!pilavacia(&aux)){
        apilar(&dada, desapilar(%aux));
    }

    printf("El menor es: %i", tope(&menor));




    /** Ordenamiento por seleccion **/


    Pila ordenadaXseleccion, dada;

    inicpila(&ordenadaXseleccion);
    inicpila(&dada);


    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);

    while (!pilavacia(&dada))
    {

        apilar(&menor, desapilar(&dada));


        while(!pilavacia(&dada))
        {
            if(tope(&menor)>tope(&dada))
            {
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(&dada));
            }
            else
                apilar(&aux, desapilar(&dada));
        }


        while(!pilavacia(&aux))
        {
            apilar(&dada, desapilar(&aux));
        }


        apilar(&ordenadaXseleccion, desapilar(&menor));
    }

    printf("Pila dada\n");
    mostrar(&dada);

    printf("Pila ordenada x seleccion\n");
    mostrar(&ordenadaXseleccion);


    /** Ordenamiento por inserccion **/


    Pila dada, aux, dato;

    inicpila(&dada);
    inicpila(&aux);
    inicpila(&dato);

    apilar(&dato, desapilar(&dada));

    while(!pilavacia(&dada) && tope(&dada)>tope(&dato)){
        apilar(&aux, desapilar(&dada));
    }

    apilar(&dada, desapilar(&dato));

    while(!pilavacia(&aux)){
        apilar(&dada, desapilar(&aux));
    }


///** Algoritmo de eliminacion **/
//
//    Pila descarte;
//    inicpila(&descarte);
//    int elemento;
//
//    printf("Ingrese un elemento a eliminar en la pila dada: ");
//    scanf("%i", &elemento);
//
//
//    while (!pilavacia(&dada)&&tope(&dada)!=elemento)
//    {
//        apilar(&aux, desapilar(&dada));
//    }
//
//
//    if(!pilavacia(&dada))
//    {
//        apilar(&descarte, desapilar(&dada));
//    }
//
//    while (!pilavacia(&aux))
//    {
//        apilar(&dada, desapilar(&aux));
//    }
//
//    printf("\nPila dada");
//    mostrar(&dada);
//
//    printf("\nPila descarte");
//    mostrar(&descarte);























    /*
    Pila miPila, aux;

    inicpila(&miPila);
    inicpila(&aux);

    apilar(&miPila, 4);
    apilar(&miPila, 5);
    apilar(&miPila, 6);
    apilar(&miPila, 7);
    apilar(&miPila, 8);


    apilar(&aux, desapilar(&miPila));

    mostrar(&miPila);
    mostrar(&aux);




//crear una pila de forma dinamica

    Pila pilita;
    inicpila(&pilita);
    char control = 's';

    do{
        leer(&pilita);
        printf("Si desea continuar presione s\n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's');

    mostrar(&pilita);


    //Recorrer una pila con ayuda de un aux y de pilavacia

    Pila pila3, aux;
    inicpila(&pila3);
    inicpila(&aux);

    char control = 's';

    do{
        leer(&pila3);
        printf("Si desea continuar presione s\n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's');

    mostrar(&pila3);

    while(!pilavacia(&pila3)){
        apilar(&aux, desapilar(&pila3));
    }

    mostrar(&aux);


    //Realizar un filtro


    Pila pilaOriginal, aux, basura;
    inicpila(&pilaOriginal);
    inicpila(&aux);
    inicpila(&basura);

    char control = 's';

    do{
        leer(&pilaOriginal);
        printf("Si desea continuar presione s\n");
        fflush(stdin);
        scanf("%c", &control);
    }while(control == 's');

    mostrar(&pilaOriginal);

    while(!pilavacia(&pilaOriginal)){
        if(tope(&pilaOriginal) == 5){
            apilar(&basura, desapilar(&pilaOriginal));
        }
        else {
            apilar(&aux, desapilar(&pilaOriginal));
        }
    }

    mostrar(&aux);
    mostrar(&basura);
    */
}

