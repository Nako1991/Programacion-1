//1. Sumar los elementos de una pila (usar variables enteras)
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    int sumaTope = 0;
    Pila DADA;
    Pila DESCARTE;
    inicpila(&DADA);
    inicpila(&DESCARTE);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 5);
    apilar(&DADA, 6);
    apilar(&DADA, 7);
    printf("Pila DADA:\n");
    mostrar(&DADA);
    while (!pilavacia(&DADA))
    {
        sumaTope = (sumaTope + tope(&DADA));
        apilar(&DESCARTE, desapilar(&DADA));
    }
    printf("Suma total: %d\n", sumaTope);
}
*/

//2. Contar los elementos de una pila (usar variables enteras)
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    int cuentaTope = 0;
    Pila DADA;
    Pila DESCARTE;
    inicpila(&DADA);
    inicpila(&DESCARTE);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 5);
    apilar(&DADA, 6);
    printf("Pila DADA:\n");
    mostrar(&DADA);
    while (!pilavacia(&DADA))
    {
        cuentaTope++;
        apilar(&DESCARTE, desapilar(&DADA));
    }
    printf("La Pila DADA tiene %d elementos.\n", cuentaTope);
}
*/

//3. Calcular el promedio de los valores de una pila (usar variables)
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    float sumaTope = 0;
    float cuentaTope = 0;
    float promedioPila;
    Pila DADA;
    Pila DESCARTE;
    inicpila(&DADA);
    inicpila(&DESCARTE);
    apilar(&DADA, 3);
    apilar(&DADA, 4);
    apilar(&DADA, 5);
    apilar(&DADA, 6);
    apilar(&DADA, 7);
    apilar(&DADA, 8);
    apilar(&DADA, 9);
    apilar(&DADA, 10);
    printf("Pila DADA:\n");
    mostrar(&DADA);
    while (!pilavacia(&DADA))
    {
        cuentaTope++;
        sumaTope = (sumaTope + tope(&DADA));
        apilar(&DESCARTE, desapilar(&DADA));
    }
    printf("sumaTope = %f, cuentaTope = %f\n", sumaTope, cuentaTope);
    promedioPila = sumaTope / cuentaTope;
    printf("Promedio total de la Pila DADA: %f\n", promedioPila);
}
*/

//4. Encontrar el menor elemento de una pila y guardarlo en otra. (sin variables enteras, solo
//pilas)
/*
#include<stdio.h>
#include<Pila.h>
int main()
{
    Pila DADA;
    Pila MENOR;
    Pila DESCARTE;
    inicpila(&DADA);
    inicpila(&MENOR);
    inicpila(&DESCARTE);
    apilar(&DADA, 2);
    apilar(&DADA, 1);
    apilar(&DADA, 6);
    apilar(&DADA, 2);
    apilar(&DADA, 2);
    apilar(&DADA, 5);
    apilar(&DADA, 9);
    apilar(&DADA, 4);
    printf("Pila DADA:\n");
    mostrar(&DADA);
    apilar(&MENOR, desapilar(&DADA));
    while (!pilavacia(&DADA))
    {
        printf("Comparando valores de topes...\n");
        if (tope(&MENOR) <= tope(&DADA))
        {
            apilar(&DESCARTE, desapilar(&DADA));
            printf("Apilando desde DADA a DESCARTE.\n");
        }
        else
        {
            apilar(&DESCARTE, desapilar(&MENOR));
            apilar(&MENOR, desapilar(&DADA));
            printf("Apilando desde MENOR a DESCARTE y desde DADA a MENOR.\n");
        }
        printf("El menor elemento de DADA es: %d\n", tope(&MENOR));
        printf("Pila DADA:\n");
        mostrar(&DADA);
    }
}
*/

//5. Insertar un elemento en una pila ordenada de menor (tope) a mayor (base) de forma tal
//que se conserve el orden. (sin variables enteras, solo pilas)
/*
#include<stdio.h>
#include<Pila.h>
int main() // prueba con 7 1 y 0
{
    Pila DADA;
    Pila AUX1;
    Pila ELEMENTO;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&ELEMENTO);
    apilar(&DADA, 9);
    apilar(&DADA, 7);
    apilar(&DADA, 7);
    apilar(&DADA, 6);
    apilar(&DADA, 5);
    apilar(&DADA, 3);
    apilar(&DADA, 2);
    apilar(&DADA, 2);
    apilar(&DADA, 1);
    printf("Pila DADA:\n");
    mostrar(&DADA);
    printf("Introducir el valor del elemento a insertar dentro de la Pila\n");
    leer(&ELEMENTO);
    printf("Pila ELEMENTO:\n");
    mostrar(&ELEMENTO);
    while (!pilavacia(&DADA))
    {
        if (tope(&ELEMENTO) < tope(&DADA))
        {
            apilar(&DADA, desapilar(&ELEMENTO));
            printf("\nInsertando el elemento en la pila...\n");
        }
        else
        {
            apilar(&AUX1, desapilar(&DADA));
            printf("El tope de DADA no es mayor que el tope de ELEMENTO\n");
        }
    }
    if ((pilavacia(&DADA)) && (tope(&ELEMENTO) <= tope(&AUX1)))
    {
        apilar(&DADA, desapilar(&ELEMENTO));
        printf("La pila se vacio sin encontrar un valor menor, el elemento se encuentra en el tope de la Pila.\n");
    }
    while (!pilavacia(&AUX1))
    {
        apilar(&DADA, desapilar(&AUX1));
        printf("Apilando desde AUX1 a DADA.\n");
    }
    printf("Pila DADA con el elemento introducido:\n");
    mostrar(&DADA);
}
*/

//6. Usando lo resuelto en el ejercicio 4, pasar los elementos de una pila a otra de forma tal que
//la segunda pila quede ordenada de mayor (tope) a menor (base). Esto se llama m้todo de
//ordenaci๓n por selecci๓n
/*
#include<stdio.h>
#include<Pila.h>
int main()
{
    Pila DADA;
    Pila ORDENADA;
    Pila MENOR;
    Pila AUX;
    inicpila(&DADA);
    inicpila(&ORDENADA);
    inicpila(&MENOR);
    inicpila(&AUX);
    apilar(&DADA, 2);
    apilar(&DADA, 1);
    apilar(&DADA, 6);
    apilar(&DADA, 2);
    apilar(&DADA, 2);
    apilar(&DADA, 5);
    apilar(&DADA, 9);
    apilar(&DADA, 4);
    printf("Pila DADA:\n");
    mostrar(&DADA);
    while ((!pilavacia(&DADA)) || (!pilavacia(&MENOR)) || (!pilavacia(&AUX)))
    {
        while (!pilavacia(&AUX))
        {
            apilar(&DADA, desapilar(&AUX));
        }
        printf("Apilando desde AUX a DADA.\n");
        apilar(&MENOR, desapilar(&DADA));
        while (!pilavacia(&DADA))
        {
            printf("Comparando valores de topes...\n");
            if (tope(&MENOR) <= tope(&DADA))
            {
                apilar(&AUX, desapilar(&DADA));
                printf("Apilando desde DADA a AUX.\n");
            }
            else
            {
                apilar(&AUX, desapilar(&MENOR));
                apilar(&MENOR, desapilar(&DADA));
                printf("Apilando desde MENOR a AUX y desde DADA a MENOR.\n");
            }
            printf("El menor elemento de DADA es: %d\n", tope(&MENOR));
        }
        apilar(&ORDENADA, desapilar(&MENOR));
        printf("Apilando desde MENOR a ORDENADA.\n");
        mostrar(&ORDENADA);
    }
}
*/

//7. Determinar si un elemento buscado estแ dentro de una pila. Al encontrarlo, finalizar la
//b๚squeda.
/*
#include<stdio.h>
#include<pila.h>
int main()
{บบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ
    int e; //elemento buscado
    Pila DADA;
    Pila AUX;
    inicpila(&DADA);
    inicpila(&AUX);
    apilar(&DADA, 2);
    apilar(&DADA, 4);
    apilar(&DADA, 2);
    apilar(&DADA, 6);
    apilar(&DADA, 8);
    apilar(&DADA, 4);
    apilar(&DADA, 7);
    apilar(&DADA, 9);
    printf("Pila DADA\n");
    mostrar(&DADA);
    printf("\n Ingresar el valor del elemento a buscar: ");
    fflush(stdin);
    scanf("%d", &e);
    printf("\n El elemento a buscar es: %d\n", e);
    apilar(&AUX, desapilar(&DADA));
    printf("Apilando de DADA a AUX.\n");
    while (!pilavacia(&DADA))
    {
        if (tope(&DADA) == e) break;
        apilar(&AUX, desapilar(&DADA));
    }
    printf("Pila DADA\n");
    mostrar(&DADA);
    printf("Pila AUX\n");
    mostrar(&AUX);
}
*/

//8. Eliminar un elemento de una pila. El eliminarlo, finalizar el recorrido y dejar el resto en el
//mismo orden.
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    int e; //elemento a eliminar
    Pila DADA;
    Pila AUX;
    Pila DESCARTE;
    inicpila(&DADA);
    inicpila(&AUX);
    inicpila(&DESCARTE);
    apilar(&DADA, 2);
    apilar(&DADA, 4);
    apilar(&DADA, 2);
    apilar(&DADA, 6);
    apilar(&DADA, 8);
    apilar(&DADA, 4);
    apilar(&DADA, 7);
    apilar(&DADA, 9);
    printf("Pila DADA\n");
    mostrar(&DADA);
    printf("\n Ingresar el valor del elemento a buscar: ");
    fflush(stdin);
    scanf("%d", &e);
    printf("\n El elemento a buscar es: %d\n", e);
    apilar(&AUX, desapilar(&DADA));
    printf("Apilando de DADA a AUX para comenzar.\n");
    while (!pilavacia(&DADA))
    {
        if (tope(&DADA) == e)
        {
            apilar(&DESCARTE, desapilar(&DADA));
            printf("Se encontro una coincidencia, eliminando elemento...\n");
            break;
        }
        apilar(&AUX, desapilar(&DADA));
    }
    while (!pilavacia(&AUX))
    {
        apilar(&DADA, desapilar(&AUX));
    }
    printf("Pila DADA\n");
    mostrar(&DADA);
}
*/

//9. Verificar si una pila DADA es capic๚a.
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    Pila DADA;
    Pila DADA2;
    Pila AUX;
    Pila AUX2;
    inicpila(&DADA);
    inicpila(&DADA2);
    inicpila(&AUX);
    inicpila(&AUX2);
    apilar(&DADA, 5);
    apilar(&DADA, 2);
    apilar(&DADA, 1);
    apilar(&DADA, 7);
    apilar(&DADA, 1);
    apilar(&DADA, 2);
    apilar(&DADA, 5);
    printf("Pila DADA\n");
    mostrar(&DADA);
    //Copia de DADA a DADA2
    while (!pilavacia(&DADA))
    {
        apilar(&DADA2, tope(&DADA));
        apilar(&AUX, desapilar(&DADA));
    }
    while (!pilavacia(&AUX))
    {
        apilar(&DADA, desapilar(&AUX));
    }
    printf("\nDADA copiado a DADA2\n");
    //Bucle que compara si DADA y DADA2 son iguales al invertir DADA (capicua)
    while (!pilavacia(&DADA))
    {
        printf("Comparando topes...\n");
        if (tope(&DADA) == tope(&DADA2))
        {
            apilar(&AUX, desapilar(&DADA));
            apilar(&AUX2, desapilar(&DADA2));
        }
        else
        //Si los topes no coinciden la pila no es capicua
        {
            printf("Las pilas no son capicua.\n");
            break;
        }
    }
    //Si salimos del loop checkeamos dada para saber si no es capicua, si esta vacia, es capicua.
    if (pilavacia(&DADA))
    {
        printf("Las pilas son capicua.\n");
    }
}
*/

//10. Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos
//sobre sํ mismo), realizar un programa que calcule en la pila C la operaci๓n de uni๓n.
//A : base 1 2 3 tope
//B: base 2 3 5 7 tope
//Pila AUB = base 3 2 1 7 5 tope
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    Pila A;
    Pila B;
    Pila C;
    Pila AUX1;
    Pila AUX2;
    inicpila(&A);
    inicpila(&B);
    inicpila(&C);
    inicpila(&AUX1);
    inicpila(&AUX2);
    apilar(&A, 1);
    apilar(&A, 2);
    apilar(&A, 3);
    apilar(&B, 2);
    apilar(&B, 3);
    apilar(&B, 5);
    apilar(&B, 7);
    printf("Pila A\n");
    mostrar(&A);
    printf("Pila B\n");
    mostrar(&B);
    //Copia de A a C
    while (!pilavacia(&A))
    {
        apilar(&C, tope(&A));
        apilar(&AUX1, desapilar(&A));
    }
    while (!pilavacia(&AUX1))
    {
        apilar(&A, desapilar(&AUX1));
    }
    printf("A copiado a C\n");
    //Bucle que compara A con B, y los separa dependiendo si son iguales o no.
    while (!pilavacia(&B))
    {
        printf("Comienza el bucle...\n");

        printf("Reapilando de AUX1 a A si fuera necesario...\n");
        while (!pilavacia(&AUX1))
        {
            apilar(&A, desapilar(&AUX1));
        }
        while (!pilavacia(&A))
        {
            printf("Comparando topes...\n");
            if (tope(&B) == tope(&A))
            {
                apilar(&AUX2, desapilar(&B));
                printf("Los topes son iguales. Apilando de B a AUX2.\n");
                break;
            }
            else
            {
                apilar(&AUX1, desapilar(&A));
                printf("Los topes son distintos, Apilando de A a AUX1.\n");
            }
        }
        if (pilavacia(&A))
            {
                apilar(&C, desapilar(&B));
                printf("B es distinto a todos los valores de A, apilando de B a C\n");
            }
        printf("Pila B\n");
        mostrar(&B);
    }
    printf("Pila C, union de A con B:\n");
    mostrar(&C);
}
*/

//11. Intercalar dos pilas ordenadas en forma creciente (ORDENADA1 y ORDENADA2) dejando
//el resultado en una pila tambi้n ordenada en forma creciente (ORDENADAFINAL)
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    Pila ORDENADA1;
    Pila ORDENADA2;
    Pila ORDENADAFINAL;
    inicpila(&ORDENADA1);
    inicpila(&ORDENADA2);
    inicpila(&ORDENADAFINAL);
    apilar(&ORDENADA1, 7);
    apilar(&ORDENADA1, 5);
    apilar(&ORDENADA1, 3);
    apilar(&ORDENADA1, 1);
    apilar(&ORDENADA2, 9);
    apilar(&ORDENADA2, 6);
    apilar(&ORDENADA2, 5);
    apilar(&ORDENADA2, 2);
    apilar(&ORDENADA2, 2);
    printf("Pila ORDENADA1\n");
    mostrar(&ORDENADA1);
    printf("Pila ORDENADA2\n");
    mostrar(&ORDENADA2);
    while (!pilavacia(&ORDENADA1) || (!pilavacia(&ORDENADA2)))
    {
        printf("Comienza el bucle\n");
        if ((tope(&ORDENADA1) <= tope(&ORDENADA2)) || (pilavacia(&ORDENADA2)))
        {
            apilar(&ORDENADAFINAL, desapilar(&ORDENADA1));
        }
        else if ((tope(&ORDENADA1) > tope(&ORDENADA2)) || (pilavacia(&ORDENADA1)))
        {
            apilar(&ORDENADAFINAL, desapilar(&ORDENADA2));
        }
        printf("\nPila ORDENADAFINAL:\n");
        mostrar(&ORDENADAFINAL);
    }
}
*/

//12. Dada la pila ORIGEN ordenarla en forma ascendente por m้todo de inserci๓n dejando el
//resultado en la pila ORIGEN. Para este ejercicio usar lo aprendido para el ejercicio 5
/*
#include<stdio.h>
#include<Pila.h>
int main()
{
    Pila ORIGEN;
    Pila INVERTIDA;
    Pila AUX;
    inicpila(&ORIGEN);
    inicpila(&INVERTIDA);
    inicpila(&AUX);
    apilar(&ORIGEN, 0);
    apilar(&ORIGEN, 1);
    apilar(&ORIGEN, 5);
    apilar(&ORIGEN, 8);
    apilar(&ORIGEN, 4);
    apilar(&ORIGEN, 4);
    apilar(&ORIGEN, 2);
    apilar(&ORIGEN, 7);
    apilar(&ORIGEN, 9);
    apilar(&ORIGEN, 1);
    apilar(&ORIGEN, 5);
    printf("Pila ORIGEN:\n");
    mostrar(&ORIGEN);
    apilar(&INVERTIDA, desapilar(&ORIGEN));
    printf("Apilando Origen a AUX\n");
    while (!pilavacia(&ORIGEN))
    {
        while (!pilavacia(&INVERTIDA))
        {
            printf("Comienza el bucle de INVERTIDA no vacio, se comparan los valores\n");
            if (tope(&INVERTIDA) <= tope(&ORIGEN))
            {
                apilar(&INVERTIDA, desapilar(&ORIGEN));
                printf("INVERTIDA es menor o igual a ORIGEN, se apila ORIGEN a INVERTIDA\n");
                break;
            }
            else
            {
                apilar(&AUX, desapilar(&INVERTIDA));
                printf("INVERTIDA es mayor a ORIGEN, se apila INVERTIDA en AUX\n");
            }
        }
        if ((tope(&ORIGEN) < tope(&AUX)) && pilavacia(&INVERTIDA))
        {
            apilar(&INVERTIDA, desapilar(&ORIGEN));
            printf("Se reviso toda la pila. Apilando desde ORIGEN a la base de INVERTIDA\n");
        }
        while (!pilavacia(&AUX))
        {
            apilar(&INVERTIDA, desapilar(&AUX));
            printf("Apilando desde AUX a INVERTIDA\n");
        }
        printf("Pila ORIGEN:\n");
        mostrar(&ORIGEN);
        printf("Pila INVERTIDA:\n");
        mostrar(&INVERTIDA);
    }
    printf("\nPila ORIGEN esta vacia, Apilando desde INVERTIDA a ORIGEN\n");
    while (!pilavacia(&INVERTIDA))
    {
        apilar(&ORIGEN, desapilar(&INVERTIDA));
    }
    printf("\nPila ORIGEN ordenada:\n");
    mostrar(&ORIGEN);
}
*/

//13. Suponer un juego de cartas en el que en cada mano se reparten dos cartas por jugador. Un
//jugador gana la mano cuando la suma de sus cartas es mayor que las del contrario y al
//hacerlo coloca todas las cartas (las de ้l y las de su rival) en su pila de puntos. En caso de
//empate (y para simplificar) siempre gana el jugador1. Simular la ejecuci๓n del juego de tal
//manera que dada una pila MAZO (con un n๚mero de elementos m๚ltiplo de cuatro)
//distribuya las cartas en las pilas PUNTOSJUG1 y PUNTOSJUG2 como si estos hubieran
//jugado. Utilizar las pilas auxiliares que crea conveniente.
/*
#include<stdio.h>
#include<stdlib.h>
#include<pila.h>
int main()
{
    int gameover = 0;
    int mazoGen = 0;
    int i, r, j1, j2;
    char mazoNew;
    Pila PUNTOSJUG1;
    Pila PUNTOSJUG2;
    Pila MAZO;
    Pila MANOJUG1;
    Pila MANOJUG2;
    inicpila(&PUNTOSJUG1);
    inicpila(&PUNTOSJUG2);
    inicpila(&MAZO);
    inicpila(&MANOJUG1);
    inicpila(&MANOJUG2);
    printf("El MAZO de cartas contiene cartas que varian en valor del 1 al 13.\n");
    printf("El MAZO contiene 20 cartas en total, haciendo del juego un mejor de 5.\n");
    printf("Se repartiran 2 cartas a cada jugador, el jugador que sume mแs puntos en su mano\n");
    printf("se quedara con las cartas de su rival y las sumara a su pila junto con su mano.\n");
    while (gameover == 0) //menu principal, se sale al modificar gameover a 1
    {
        j1 = 0;
        j2 = 0;
        while (mazoGen == 0)
        {
            while (!pilavacia(&MAZO))
            {
                desapilar(&MAZO); //desapilo en el aire para no tener 25000 mazos por cada vez q se genera uno
            }
            for (i=0; i<20; i++) //generaci๓n de un mazo nuevo aleatorio
            {
                r = (int)rand() % 13+1;
                apilar(&MAZO, r);
            }
            printf("El MAZO generado aleatoriamente es:\n");
            mostrar(&MAZO);
            printf("Para generar un nuevo mazo ingrese 'n', para continuar ingrese 'c':");
            fflush(stdin);
            scanf("%c", &mazoNew); //esta conforme con el mazo o quiere generar otro?
            if (mazoNew == 'n')
            {
                printf("Generando un nuevo mazo...\n");
            }
            else if (mazoNew != 'n')
            {
                mazoGen = 1;
            }
        }
        while (!pilavacia(&MAZO)) //Partida completa hasta terminar el mazo
        {
            if (pilavacia(&MANOJUG1))
            {
                printf("Repartiendo las cartas a los jugadores...\n");
                for (i=0;i<2;i++) //repartiendo las cartas
                {
                    apilar(&MANOJUG1, desapilar(&MAZO));
                    apilar(&MANOJUG2, desapilar(&MAZO));
                }
            }
            printf("Presentando las cartas en la mesa: \n");
            printf("Jugador 1::\n");
            mostrar(&MANOJUG1);
            printf("Jugador 2:\n");
            mostrar(&MANOJUG2);
            apilar(&PUNTOSJUG1, desapilar(&MANOJUG1));
            apilar(&PUNTOSJUG2, desapilar(&MANOJUG2));
            if ((tope(&MANOJUG1) + tope(&PUNTOSJUG1)) > (tope(&MANOJUG2) + tope(&PUNTOSJUG2))) //comparacion para decidir quien gano la mano
            {
                apilar(&PUNTOSJUG1, desapilar(&MANOJUG1));
                apilar(&PUNTOSJUG1, desapilar(&PUNTOSJUG2));
                apilar(&PUNTOSJUG1, desapilar(&MANOJUG2));
                printf("Esta ronda ha ganado el Jugador 1, llevese esos puntos...\n");
            }
            else if ((tope(&MANOJUG1) + tope(&PUNTOSJUG1)) == (tope(&MANOJUG2) + tope(&PUNTOSJUG2)))
            {
                apilar(&PUNTOSJUG1, desapilar(&MANOJUG1));
                apilar(&PUNTOSJUG1, desapilar(&PUNTOSJUG2));
                apilar(&PUNTOSJUG1, desapilar(&MANOJUG2));
                printf("Han empatado, pero el jugador 1  lleva la ventaja, asi que gana esta ronda.\n");
            }
            else
            {
                apilar(&PUNTOSJUG2, desapilar(&MANOJUG2));
                apilar(&PUNTOSJUG2, desapilar(&PUNTOSJUG1));
                apilar(&PUNTOSJUG2, desapilar(&MANOJUG1));
                printf("Esta mano ha ganado el jugador 2, llene esa pila con puntos\n");
            }
        }
        while (!pilavacia(&PUNTOSJUG1)) //mazo vacio, se suman los puntos de cada jugador
        {
            j1 = j1 + tope(&PUNTOSJUG1);
            apilar(&MAZO, desapilar(&PUNTOSJUG1));
        }
        while (!pilavacia(&PUNTOSJUG2))
        {
            j2 = j2 + tope(&PUNTOSJUG2);
            apilar(&MAZO, desapilar(&PUNTOSJUG2));
        }
        printf("El jugador 1 tiene: %d puntos en total.\n", j1);
        printf("El jugador 2 suma un valor de %d puntos.\n", j2);
        if (j1 > j2) //se comparan los puntos para decidir quien gano el juego
        {
            printf("El jugador 1 ha ganado la competencia!\n");
        }
        else if (j1 == j2)
        {
            printf("La competencia ha llegado a un empate, increible. Se resolvera con otro juego?\n");
        }
        else
        {
            printf("El jugador 2 ha vencido al jugador 1, muy merecida victoria.\n");
        }
        printf("Desea volver a jugar? ( 's' para aceptar, 'n' para salir)\n"); //desea jugar otra vez?
        fflush(stdin);
        scanf("%c", &mazoNew);
        if (mazoNew == 'n') //salir del juego
        {
            gameover = 1;
        }
        else if (mazoNew == 's')//jugar denuevo
        {
            while (!pilavacia(&MAZO))
            {
                desapilar(&MAZO); //desapilo en el aire para no tener 25000 mazos cada vez q se genera uno
            }
            mazoGen = 0;
        }
    }
    printf("Game Over, gracias por jugar."); //gg
}
*/
