//TRABAJO PRACTICO Nº1: PILAS

//1. Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos que se
//encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.
/*
#include<pila.h>
int main()
{
    Pila DADA;
    Pila AUX1;
    Pila AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);
    printf("Ingresar los 5 valores para ser cargados a la pila: ");
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    mostrar(&DADA);
    apilar(&AUX1, desapilar(&DADA));
    apilar(&AUX1, desapilar(&DADA));
    apilar(&AUX1, desapilar(&DADA));
    apilar(&AUX2, desapilar(&DADA));
    apilar(&AUX2, desapilar(&DADA));
    mostrar(&AUX1);
    mostrar(&AUX2);
}
*/

//2. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar todos los
//elementos de la pila ORIGEN a la pila DESTINO.
/*
#include<pila.h>
void main()
{
    Pila ORIGEN;
    Pila DESTINO;
    inicpila(&ORIGEN);
    inicpila(&DESTINO);
    apilar(&ORIGEN, 4);
    apilar(&ORIGEN, 3);
    apilar(&ORIGEN, 7);
    apilar(&ORIGEN, 6);
    printf("La pila ORIGEN contiene:\n");
    mostrar(&ORIGEN);
    do
    {
        apilar(&DESTINO, desapilar(&ORIGEN));
    } while (!pilavacia(&ORIGEN));
    printf("Luego de pasar los elementos la pila DESTINO contiene:\n");
    mostrar(&DESTINO);
}
*/

//3. Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al
//valor 8
/*
#include<pila.h>
int main()
{
    Pila DADA;
    Pila DISTINTOS;
    inicpila(&DADA);
    inicpila(&DISTINTOS);
    printf("Ingresar los 5 valores para ser cargados a la pila: ");
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    while (!pilavacia(&DADA))
    {
        if (tope(&DADA) == 8)
        {
            desapilar(&DADA);
        } else {
            apilar(&DISTINTOS, desapilar(&DADA));
        }
    }
    mostrar(&DADA);
    mostrar(&DISTINTOS);
}
*/

//4. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar los elementos de
//la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.
/*
#include<pila.h>
int main()
{
    Pila ORIGEN;
    Pila DESTINO;
    Pila AUX;
    inicpila(&ORIGEN);
    inicpila(&DESTINO);
    inicpila(&AUX);
    printf("Ingresar los 5 valores para ser cargados a la pila: ");
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    mostrar(&ORIGEN);
    while (!pilavacia(&ORIGEN))
    {
        apilar(&AUX, desapilar(&ORIGEN));
        mostrar(&AUX);
    }
    while (!pilavacia(&AUX))
    {
        apilar(&DESTINO, desapilar(&AUX));
        mostrar(&DESTINO);
    }
}
*/

//5. Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA contenga los elementos
//cargados originalmente en ella, pero en orden inverso
/*
#include<pila.h>
int main()
{
    Pila DADA;
    Pila AUX1;
    Pila AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);
    printf("Ingresar los 5 valores para ser cargados a la pila: ");
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    mostrar(&DADA);
    while (!pilavacia(&DADA))
    {
        apilar(&AUX1, desapilar(&DADA));
        mostrar(&AUX1);
    }
    while (!pilavacia(&AUX1))
    {
        apilar(&AUX2, desapilar(&AUX1));
        mostrar(&AUX2);
    }
    while (!pilavacia(&AUX2))
    {
        apilar(&DADA, desapilar(&AUX2));
        mostrar(&DADA);
    }
}
*/

//6. Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes
//elementos en el mismo orden.
/*
#include<pila.h>
int main()
{
    Pila DADA;
    Pila AUX1;
    Pila AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);
    printf("Ingresar los 5 valores para ser cargados a la pila: ");
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    mostrar(&DADA);
    apilar(&AUX1, desapilar(&DADA));
    while (!pilavacia(&DADA))
    {
        apilar(&AUX2, desapilar(&DADA));
        mostrar(&AUX2);
    }
    apilar(&DADA, desapilar(&AUX1));
    while (!pilavacia(&AUX2))
    {
        apilar(&DADA, desapilar(&AUX2));
        mostrar(&DADA);
    }
}
*/

//7. Pasar el último elemento (base) de la pila DADA a su primera posición (tope), dejando los restantes
//elementos en el mismo orden.
/*
#include<pila.h>
int main()
{
    Pila DADA;
    Pila AUX1;
    Pila AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);
    printf("Ingresar los 5 valores para ser cargados a la pila: ");
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    mostrar(&DADA);
    while (!pilavacia(&DADA))
    {
        apilar(&AUX1, desapilar(&DADA));
        mostrar(&AUX1);
    }
    apilar(&AUX2, desapilar(&AUX1));
    while (!pilavacia(&AUX1))
    {
        apilar(&DADA, desapilar(&AUX1));
        mostrar(&DADA);
    }
    apilar(&DADA, desapilar(&AUX2));
    mostrar(&DADA);
}
*/

//8. Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.
/*
#include<pila.h>
int main()
{
    Pila MAZO;
    Pila JUGADOR1;
    Pila JUGADOR2;
    inicpila(&MAZO);
    inicpila(&JUGADOR1);
    inicpila(&JUGADOR2);
    apilar(&MAZO, 1);
    apilar(&MAZO, 5);
    apilar(&MAZO, 4);
    apilar(&MAZO, 8);
    apilar(&MAZO, 9);
    apilar(&MAZO, 7);
    apilar(&MAZO, 2);
    apilar(&MAZO, 0);
    apilar(&MAZO, 3);
    apilar(&MAZO, 6);
    printf("Mazo:\n");
    mostrar(&MAZO);
    while (!pilavacia(&MAZO))
    {
        apilar(&JUGADOR1, desapilar(&MAZO));
        apilar(&JUGADOR2, desapilar(&MAZO));
    }
    printf("Jugador1:\n");
    mostrar(&JUGADOR1);
    printf("Jugador2:\n");
    mostrar(&JUGADOR2);
}
*/

//9. Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado
/*
#include<pila.h>
int main()
{
    int contadorA=0;
    int contadorB=0;
    Pila A;
    Pila B;
    Pila AUX;
    inicpila(&A);
    inicpila(&B);
    inicpila(&AUX);
    apilar(&A, 2);
    apilar(&A, 4);
    apilar(&A, 6);
    apilar(&A, 4);
    apilar(&A, 1);
    apilar(&B, 6);
    apilar(&B, 6);
    apilar(&B, 8);
    apilar(&B, 3);
    apilar(&B, 2);
    apilar(&B, 4);
    mostrar(&A);
    mostrar(&B);
    while (!pilavacia(&A))
    {
        apilar(&AUX, desapilar(&A));
        contadorA++;
    }
    apilar(&A, desapilar(&AUX));
    while (!pilavacia(&B))
    {
        apilar(&AUX, desapilar(&B));
        contadorB++;
    }
    apilar(&B, desapilar(&AUX));
    printf("La pila A tiene %d elementos\n", contadorA);
    printf("La pila B tiene %d elementos\n", contadorB);
}
*/

//10. Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales (en cantidad de
//elementos, valores que contienen y posición de los mismos). Mostrar por pantalla el resultado
/*
#include<pila.h>
int main()
{
    Pila A;
    Pila B;
    inicpila(&A);
    inicpila(&B);
    printf("Pila A:\n");
    leer(&A);
    leer(&A);
    leer(&A);
    leer(&A);
    leer(&A);
    printf("Pila A:\n");
    leer(&B);
    leer(&B);
    leer(&B);
    leer(&B);
    leer(&B);
    mostrar(&A);
    mostrar(&B);
    if ((!pilavacia(&A) && pilavacia(&B)) || (pilavacia(&A) && !pilavacia(&B)) || (tope(&A) != tope(&B)))
    {
        printf("Las Pilas no son iguales.");
    } else if ((tope(&A) == tope(&B)) && (!pilavacia(&A) && !pilavacia(&B)))
    {
        while (!pilavacia(&A))
        {
        desapilar(&A);
        desapilar(&B);
        if ((pilavacia(&A)) && (pilavacia(&B)))
        {
            printf("Las Pilas son iguales.");
        }
        }
    }
}
*/

//11. Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los
//elementos que sean iguales al tope de la pila MODELO
/*
#include<pila.h>
int main()
{
    Pila DADA;
    Pila MODELO;
    Pila AUX;
    inicpila(&DADA);
    inicpila(&MODELO);
    inicpila(&AUX);
    apilar(&MODELO, 3);
    apilar(&MODELO, 2);
    apilar(&MODELO, 4);
    printf("Pila MODELO:\n");
    mostrar(&MODELO);
    apilar(&DADA, 4);
    apilar(&DADA, 6);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 4);
    apilar(&DADA, 1);
    apilar(&DADA, 2);
    while (!pilavacia(&DADA))
    {
        printf("Pila DADA:\n");
        mostrar(&DADA);
        if (tope(&DADA) == tope(&MODELO))
        {
            desapilar(&DADA);
        } else {
            apilar(&AUX, desapilar(&DADA));
            printf("Pila AUX:\n");
            mostrar(&AUX);
        }
    }
    while (!pilavacia(&AUX))
    {
        apilar(&DADA, desapilar(&AUX));
    }
    printf("Pila DADA:\n");
    mostrar(&DADA);
}
*/

//12. Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los
//elementos que existan en MODELO.
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    char siONo;
    int iguales=0;
    Pila DADA;
    Pila MODELO;
    Pila AUX1;
    Pila AUX2;
    Pila AUX3;
    inicpila(&DADA);
    inicpila(&MODELO);
    inicpila(&AUX1);
    inicpila(&AUX2);
    inicpila(&AUX3);
    apilar(&DADA, 4);
    apilar(&DADA, 7);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 1);
    apilar(&DADA, 1);
    apilar(&DADA, 2);
    apilar(&DADA, 6);
    apilar(&DADA, 3);
    apilar(&DADA, 9);
    printf("\nPila DADA:\n");
    mostrar(&DADA);
    printf("Desea ingresar datos a la Pila MODELO? (si 's' o no 'n')\n");
    fflush(stdin);
    scanf("%c", &siONo);
    while (siONo != 'n')
    {
        leer(&MODELO);
        printf("Desea ingresar datos a la Pila MODELO? (si 's' o no 'n')\n");
        fflush(stdin);
        scanf("%c", &siONo);
    }
    printf("Pila MODELO:\n");
    mostrar(&MODELO);
    while (!pilavacia(&DADA))
    {
        printf("Pila DADA:\n");
        mostrar(&DADA);
        iguales = 0;
        while (!pilavacia(&AUX2))
        {
            apilar(&MODELO, desapilar(&AUX2));
            printf("Apilando AUX2 a MODELO\n");
        }
        while (!pilavacia(&MODELO))
        {
            if (tope(&DADA) == tope(&MODELO))
            {
                iguales = 1;
                printf("Seteando valor de 'iguales' a 1\n");
            }
            apilar(&AUX2, desapilar(&MODELO));
            printf("Apilando MODELO a AUX2\n");
        }
        if (iguales == 1)
        {
            apilar(&AUX3, desapilar(&DADA));
            printf("Topes iguales, desapilando DADA en AUX3.\n");
        }
        else
        {
            apilar(&AUX1, desapilar(&DADA));
            printf("apilando DADA a AUX1.\n");
        }
    }
    printf("DADA esta vacio.\n");
    printf("Reapilando DADA desde AUX1...\n");
    while (!pilavacia(&AUX1))
    {
        apilar(&DADA, desapilar(&AUX1));
    }
    printf("\nPila DADA procesada:\n");
    mostrar(&DADA);
}
*/

//13. Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores
//o iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila
//MENORES.
/*
#include<pila.h>
int main()
{
    Pila DADA;
    Pila LIMITE;
    Pila MAYORES;
    Pila MENORES;
    inicpila(&DADA);
    inicpila(&LIMITE);
    inicpila(&MAYORES);
    inicpila(&MENORES);
    apilar(&DADA, 4);
    apilar(&DADA, 7);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 1);
    apilar(&DADA, 1);
    apilar(&DADA, 2);
    apilar(&DADA, 6);
    apilar(&DADA, 3);
    apilar(&DADA, 9);
    printf("\nPila DADA:\n");
    mostrar(&DADA);
    apilar(&LIMITE, 4);
    printf("\nPila LIMITE:\n");
    mostrar(&LIMITE);
    while (!pilavacia(&DADA))
    {
        if (tope(&DADA) >= tope(&LIMITE))
        {
            apilar(&MAYORES, desapilar(&DADA));
        }
        else
        {
            apilar(&MENORES, desapilar(&DADA));
        }
    }
    printf("MAYORES");
    mostrar(&MAYORES);
    printf("MENORES");
    mostrar(&MENORES);
}
*/

//14. Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope
//de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR. (NO contar los elementos)
/*
#include<pila.h>
int main()
{
    int interruptor = 0;
    Pila DADA;
    Pila AUX;
    Pila PAR;
    Pila IMPAR;
    inicpila(&DADA);
    inicpila(&AUX);
    inicpila(&PAR);
    inicpila(&IMPAR);
    apilar(&DADA, 4);
    apilar(&DADA, 7);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 1);
    apilar(&DADA, 1);
    apilar(&DADA, 2);
    apilar(&DADA, 6);
    apilar(&DADA, 3);
    apilar(&DADA, 9);
    printf("\nPila DADA:\n");
    mostrar(&DADA);
    while (!pilavacia(&DADA))
    {
        if (interruptor == 0)
        {
            apilar(&IMPAR, desapilar(&DADA));
            interruptor = 1;
            printf("\nIMPAR");
        }
        else
        {
            apilar(&PAR, desapilar(&DADA));
            interruptor = 0;
            printf("\nPAR");
        }
    }
    while ((!pilavacia(&IMPAR)) || (!pilavacia(&PAR)))
    {
        if (interruptor == 0)
        {
            apilar(&AUX, desapilar(&PAR));
            interruptor = 1;
            printf("\nApilando de PAR a AUX");
        }
        else
        {
            apilar(&AUX, desapilar(&IMPAR));
            interruptor = 0;
            printf("\nApilando de IMPAR a AUX");
        }
    }
    if (interruptor == 0)
    {
        apilar(&PAR, desapilar(&AUX));
        printf("\nLa pila es PAR");
        mostrar(&PAR);
    }
    else
    {
        apilar(&IMPAR, desapilar(&AUX));
        printf("\nLa pila es IMPAR");
        mostrar(&IMPAR);
    }
    mostrar(&AUX);
}
*/

//15. ¿Cuál es la condición del siguiente ciclo? ¿Cuándo finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas):
/*
while (!pilavacia(&Pila1)) {
apilar (&Pila2, desapilar(&Descarte))
}
*/
//Mientras Pila1 no este vacia, apila desde descarte hacia pila2

//16. ¿Que realiza el siguiente código escrito en lenguaje C (Pila1, Aux y Result son pilas
/*
while (!pilavacia(&Pila1)) {
if (tope(&Pila1) == 5) {
apilar (&Aux, desapilar(&Pila1));
apilar (&Result, desapilar(&Aux));
}
}
*/
//Mientras pila1 no este vacia y el valor del tope de la pila sea 5, apila AUX desde PILA1 y apila RESULT desde AUX.

//17. Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos
//elementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algún
//valor 5”, se realizó el siguiente programa:

// este programa carga por teclado una pila Origen y pasa a la pila Destino todos aquellos elementos que
//preceden el valor 5
/*
int main() {
Pila Origen, Distinto;
inicpila(&Origen);
inicpila(&Distinto);
leer(&Origen);
if (!pilaVacia(&Origen)){
while (tope(&Origen) != 5) {
apilar (&Distinto, desapilar(&Origen));
}
}
}
*/
//a. ¿Resuelve el problema planteado?
//El programa no inicia.
//b. ¿Cuáles son los errores que encuentra?
//No se cargo la libreria de pila. La mayoria de los nombres de variables y funciones estan mal escritos.
//El programa no te explica que hace, que introducir ni te muestra los resultados.
//El programa solo carga un valor a Origen, haciendo el loop innecesario.
//El programa necesita varias partes mas para cumplir con lo que pide el ejercicio.
//c. Reescribir el código para que resuelva adecuadamente el problema planteado
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    int i;
    int origenCap;
    Pila ORIGEN, DISTINTO;
    inicpila(&ORIGEN);
    inicpila(&DISTINTO);
    printf("Cuantos valores desea ingresar a la Pila ORIGEN?:");
    fflush(stdin);
    scanf("%d", &origenCap);
    for ( i = 0; i < origenCap; i++)
    {
        leer(&ORIGEN);
    }
    printf("\nPila ORIGEN:\n");
    mostrar(&ORIGEN);
    if (!pilavacia(&ORIGEN))
    {
        while (tope(&ORIGEN) != 5)
        {
            apilar(&DISTINTO, desapilar(&ORIGEN));
            printf("Los valores son distintos, Apilando de ORIGEN a DISTINTO...\n");
        }
    }
    mostrar(&DISTINTO);
}
*/
//d. Indicar los componentes del programa.
//Pilas: ORIGEN y DISTINTO; Variables: i y origenCap.
//El programa comienza consultando que tan grande desea que sea la Pila ORIGEN, a partir de eso
//toma los valores ingresados por el usuario para completar la Pila.
//Cuando la pila ORIGEN no esta vacia compara el tope con el valor 5
//Si son iguales termina el programa, si son distintos desapila ORIGEN y vuelve a comparar.
//Cuando ORIGEN esta vacia termina el programa. Al terminar muestra los valores de DISTINTO.

//18. Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):
/*
while ( (!pilaVacia(&Pila1)) && (!pilaVacia(&Pila2)) ) {
apilar (&Descarte, desapilar(&Pila1));
apilar (&Descarte, desapilar(&Pila2));
}
*/
//a. ¿Cuál es la condición del ciclo? Explique con sus palabras
//Si PILA1 y PILA2 no están vacias, desapila el tope de PILA1 y el tope de PILA2 a la pila DESCARTE.
//b. ¿Cuales son los posibles estados de ambas pilas al finalizar el ciclo?
//Si PILA1 y PILA2 estan vacias. Si PILA1 esta vacia y PILA2 no, si PILA2 esta vacia y PILA1 no.

//TEST DE SUMA DE INTEGER CON TOPE
/*
#include<pila.h>
#include<stdio.h>
int main()
{
    int j1;
    Pila TEST;
    inicpila(&TEST);
    j1 = 0;
    printf("valor de j1 es %d", j1);
    apilar(&TEST, 5);
    mostrar(&TEST);
    j1 = j1 + tope(&TEST);
    printf("el nuevo valor de j1 es de %d", j1);
}
*/
