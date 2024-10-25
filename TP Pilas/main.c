#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

//EJERCICIOS
//1. Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos que se
//encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.
int ejercicioNro1()
{
    Pila DADA, AUX1, AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    printf("\nCargar a pila DADA\n");
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);

    printf("\nDADA:");
    mostrar(&DADA);

    printf("\nApilando los 3 primeros valores (tope) en AUX1 y los 2 ultimos (base) en AUX2...");

    apilar(&AUX1, desapilar(&DADA));
    apilar(&AUX1, desapilar(&DADA));
    apilar(&AUX1, desapilar(&DADA));

    apilar(&AUX2, desapilar(&DADA));
    apilar(&AUX2, desapilar(&DADA));

    printf("\nDADA:");
    mostrar(&DADA);
    printf("\nAUX1:");
    mostrar(&AUX1);
    printf("\AUX2:");
    mostrar(&AUX2);
}

//2. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar todos los
//elementos de la pila ORIGEN a la pila DESTINO.
int ejercicioNro2()
{
    Pila ORIGEN, DESTINO;
    inicpila(&ORIGEN);
    inicpila(&DESTINO);

    printf("\nCargar elementos a la pila ORIGEN\n");
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    printf("\nORIGEN:");
    mostrar(&ORIGEN);

    printf("\nApilando todos los elementos de ORIGEN a DESTINO...\n");
    while( !pilavacia(&ORIGEN) )
    {
        apilar(&DESTINO, desapilar(&ORIGEN));
    }

    printf("\nORIGEN:");
    mostrar(&ORIGEN);
    printf("\nDESTINO:");
    mostrar(&DESTINO);
}

//3. Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.
int ejercicioNro3()
{
    Pila DADA, DISTINTOS, AUX;
    inicpila(&DADA);
    inicpila(&DISTINTOS);
    inicpila(&AUX);

    printf("\nCargar elementos a la pila DADA\n");
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    printf("\nDADA:");
    mostrar(&DADA);

    printf("\nMoviendo todos los elementos distintos a 8 a la pila DISTINTOS...\n");
    while ( !pilavacia(&DADA) )
    {
        if ( tope(&DADA) == 8)
        {
            apilar(&AUX, desapilar(&DADA));
        }
        else
        {
            apilar(&DISTINTOS, desapilar(&DADA));
        }
    }

    printf("\nDADA:");
    mostrar(&DADA);
    printf("\nDISTINTOS:");
    mostrar(&DISTINTOS);
    printf("\nAUX:");
    mostrar(&AUX);
}

//4. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO. Pasar los elementos de
//la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.
int ejercicioNro4()
{
    Pila ORIGEN, DESTINO, AUX;
    inicpila(&ORIGEN);
    inicpila(&DESTINO);
    inicpila(&AUX);

    printf("\nPila ORIGEN\n");
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    printf("\nORIGEN:");
    mostrar(&ORIGEN);

    printf("\nApilando todos los elementos de ORIGEN a AUX...\n");
    while ( !pilavacia(&ORIGEN) )
    {
        apilar(&AUX, desapilar(&ORIGEN));
    }
    printf("\nAUX:");
    mostrar(&AUX);

    printf("\nORIGEN:");
    mostrar(&ORIGEN);

    printf("\nApilando todos los elementos de AUX a DESTINO...\n");
    while ( !pilavacia(&AUX) )
    {
        apilar(&DESTINO, desapilar(&AUX));
    }
    printf("\nDESTINO:");
    mostrar(&DESTINO);

    printf("\nAUX:");
    mostrar(&AUX);

    printf("\nORIGEN:");
    mostrar(&ORIGEN);
}

//5. Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA contenga los elementos
//cargados originalmente en ella, pero en orden inverso.
int ejercicioNro5()
{
    Pila DADA, AUX1, AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    printf("\nCargar elementos a la pila DADA\n");
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    printf("\nDADA:");
    mostrar(&DADA);

    printf("\nMoviendo todos los elementos de DADA a AUX1...\n");
    while ( !pilavacia(&DADA) )
    {
        apilar(&AUX1, desapilar(&DADA));
    }
    printf("\nAUX1:");
    mostrar(&AUX1);
    printf("\nDADA:");
    mostrar(&DADA);

    printf("\nMoviendo todos los elementos de AUX1 a AUX2...\n");
    while ( !pilavacia(&AUX1) )
    {
        apilar(&AUX2, desapilar(&AUX1));
    }
    printf("\nAUX2:");
    mostrar(&AUX2);
    printf("\nAUX1:");
    mostrar(&AUX1);

    printf("\nMoviendo todos los elementos de AUX2 a DADA...\n");
    while ( !pilavacia(&AUX2) )
    {
        apilar(&DADA, desapilar(&AUX2));
    }
    printf("\nDADA INVERSA:");
    mostrar(&DADA);
    printf("\nAUX2:");
    mostrar(&AUX2);
}

//6. Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes
//elementos en el mismo orden.
int ejercicioNro6()
{
    Pila DADA, AUX1, AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    printf("\nCargando 5 elementos a la pila DADA como ejemplo...\n");
    apilar(&DADA, 4);
    apilar(&DADA, 3);
    apilar(&DADA, 6);
    apilar(&DADA, 2);
    apilar(&DADA, 9);
    printf("\nDADA:");
    mostrar(&DADA);

    printf("\nApilando el tope de DADA en AUX1...\n");
    apilar(&AUX1, desapilar(&DADA));
    printf("\nApilando el resto de DADA en AUX2...\n");
    while ( !pilavacia(&DADA) )
    {
        apilar(&AUX2, desapilar(&DADA));
    }
    printf("\nAUX1:");
    mostrar(&AUX1);
    printf("\nAUX2:");
    mostrar(&AUX2);
    printf("\nDADA:");
    mostrar(&DADA);

    printf("\nApilando el tope de AUX1 en DADA...\n");
    apilar(&DADA, desapilar(&AUX1));
    printf("\nApilando todos los elementos de AUX2 en DADA...\n");
    while ( !pilavacia(&AUX2) )
    {
        apilar(&DADA, desapilar(&AUX2));
    }
    printf("\nDADA:");
    mostrar(&DADA);
    printf("\nAUX1:");
    mostrar(&AUX1);
    printf("\nAUX2:");
    mostrar(&AUX2);
}

//7. Pasar el último elemento (base) de la pila DADA a su primera posición (tope), dejando los restantes
//elementos en el mismo orden.
int ejercicioNro7()
{
    Pila DADA, AUX1, AUX2;
    inicpila(&DADA);
    inicpila(&AUX1);
    inicpila(&AUX2);

    printf("\nCargando 5 elementos a la pila DADA como ejemplo...\n");
    apilar(&DADA, 3);
    apilar(&DADA, 8);
    apilar(&DADA, 1);
    apilar(&DADA, 9);
    apilar(&DADA, 5);
    printf("\nDADA:");
    mostrar(&DADA);

    printf("\nApilando todos los elementos de DADA en AUX1...\n");
    while ( !pilavacia(&DADA) )
    {
        apilar(&AUX1, desapilar(&DADA));
    }
    printf("\nApilando el tope de AUX1 (base de DADA) en AUX2...\n");
    apilar(&AUX2, desapilar(&AUX1));

    printf("\nAUX1:");
    mostrar(&AUX1);
    printf("\nAUX2:");
    mostrar(&AUX2);
    printf("\nDADA:");
    mostrar(&DADA);

    printf("\nApilando todos los elementos de AUX1 en DADA...\n");
    while ( !pilavacia(&AUX1) )
    {
        apilar(&DADA, desapilar(&AUX1));
    }
    printf("\nApilando el tope de AUX2 en DADA...\n");
    apilar(&DADA, desapilar(&AUX2));

    printf("\nDADA:");
    mostrar(&DADA);
    printf("\nAUX1:");
    mostrar(&AUX1);
    printf("\nAUX2:");
    mostrar(&AUX2);
}

//8. Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.
int ejercicioNro8()
{
    Pila MAZO, JUGADOR1, JUGADOR2;
    inicpila(&MAZO);
    inicpila(&JUGADOR1);
    inicpila(&JUGADOR2);

    printf("\nCargando 8 cartas a la pila MAZO...\n");
    apilar(&MAZO, 2);
    apilar(&MAZO, 4);
    apilar(&MAZO, 6);
    apilar(&MAZO, 7);
    apilar(&MAZO, 1);
    apilar(&MAZO, 8);
    apilar(&MAZO, 2);
    apilar(&MAZO, 3);
    printf("\nMAZO:");
    mostrar(&MAZO);

    printf("\nRepartiendo las cartas a cada jugador...\n");
    while ( !pilavacia(&MAZO))
    {
        apilar(&JUGADOR1, desapilar(&MAZO));
        apilar(&JUGADOR2, desapilar(&MAZO));
    }
    printf("\nMAZO:");
    mostrar(&MAZO);
    printf("\nJUGADOR1:");
    mostrar(&JUGADOR1);
    printf("\nJUGADOR2:");
    mostrar(&JUGADOR2);
}

//9. Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
int ejercicioNro9()
{
    Pila A, B, AUX;
    inicpila(&A);
    inicpila(&B);
    inicpila(&AUX);

    printf("\nCargando 5 elementos a la pila A...\n");
    apilar(&A, 2);
    apilar(&A, 5);
    apilar(&A, 7);
    apilar(&A, 9);
    apilar(&A, 1);
    printf("\nA:");
    mostrar(&A);

    printf("\nCargando 3 elementos a la pila B...\n");
    apilar(&B, 0);
    apilar(&B, 9);
    apilar(&B, 7);
    printf("\nB:");
    mostrar(&B);

    while ( (!pilavacia(&A)) && (!pilavacia(&B)) )
    {
        apilar(&AUX, desapilar(&A));
        apilar(&AUX, desapilar(&B));
    }
    printf("\nAl menos una de las pilas se vacio...\n");
    printf("\nA:");
    mostrar(&A);
    printf("\nB:");
    mostrar(&B);

    if ( (pilavacia(&A)) && (pilavacia(&B)) )
    {
        printf("\nLas pilas tienen la misma cantidad de elementos.");
    }
    else if ( pilavacia(&A) )
    {
        printf("\nLa pila B tiene mas elementos que la pila A.");
    }
    else if ( pilavacia(&B) )
    {
        printf("\nLa pila A tiene mas elementos que la pila B\n");
    }
}

//10. Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales (en cantidad de
//elementos, valores que contienen y posición de los mismos). Mostrar por pantalla el resultado.
int ejercicioNro10()
{
    char salirMenu, seleccionMenu;
    Pila A, B, AUX;
    inicpila(&A);
    inicpila(&B);
    inicpila(&AUX);

    //MENU PARA CARGA DE ELEMENTOS A PILAS
    do
    {
        printf("\n\nMENU");
        printf("\n\nIngrese \"A\" para introducir elementos a la pila A.");
        printf("\nIngrese \"B\" para introducir elementos a la pila B.");
        printf("\nIngrese \"a\" para remover un elemento de la pila A.");
        printf("\nIngrese \"b\" para remover un elemento de la pila B.");
        printf("\nIngrese \"s\" para salir del menu e iniciar el programa.");
        printf("\nCualquier otra letra para continuar.");
        printf("\nSeleccion: ");
        fflush(stdin);
        scanf("%c", &seleccionMenu);

        switch (seleccionMenu)
        {
            case 'A' :
                do
                {
                    printf("\nCargar elementos a la pila A\n");
                    leer(&A);
                    printf("\nSeguir apilando? (\"q\" para salir, cualquier otra letra para continuar): \n");
                    fflush(stdin);
                    scanf("%c", &seleccionMenu);
                }
                while ( seleccionMenu != 'q' );
                break;
            case 'B' :
                do
                {
                    printf("\nCargar elementos a la pila B\n");
                    leer(&B);
                    printf("\nSeguir apilando? (\"q\" para salir, cualquier otra letra para continuar): \n");
                    fflush(stdin);
                    scanf("%c", &seleccionMenu);
                }
                while ( seleccionMenu != 'q' );
                break;
            case 'a' :
                apilar(&AUX, desapilar(&A));
                break;
            case 'b' :
                apilar(&AUX, desapilar(&B));
                break;
            case 's' :
                salirMenu = seleccionMenu;
                break;
        }
        printf("\nA:");
        mostrar(&A);
        printf("\nB:");
        mostrar(&B);
    }
    while ( salirMenu != 's' );

    printf("\nFinalizado el ingreso de elementos a las pilas.\n");
    printf("\nA:");
    mostrar(&A);
    printf("\nB:");
    mostrar(&B);

    while ( !pilavacia(&A) && !pilavacia(&B) )
    {
        if ( tope(&A) == tope(&B) )
        {
            printf("\nLos topes de A: '%i' y B: '%i' son iguales, desapilando...\n", tope(&A), tope(&B));
            apilar(&AUX, desapilar(&A));
            apilar(&AUX, desapilar(&B));
        }
        else
        {
            printf("\nLos topes de A: '%i' y B: '%i' son distintos.\n", tope(&A), tope(&B));
            while( !pilavacia(&A) )
            {
                apilar(&AUX, desapilar(&A));
            }
        }
    }

    if ( pilavacia(&A) && pilavacia(&B) )
    {
        printf("\nLas pilas son iguales.\n");
    }
    else if ( pilavacia(&A) || pilavacia(&B) )
    {
        printf("\nLas pilas son distintas.\n");
    }
}

//FORMA SIMPLIFICADA DEL EJERCICIO USANDO BREAK Y SIN MENU
int ejercicioNro10b()
{
    char salirMenu, seleccionMenu;
    Pila A, B, AUX;
    inicpila(&A);
    inicpila(&B);
    inicpila(&AUX);

    printf("\nCargando elementos a la pila A...\n");
    apilar(&A, 0);
    apilar(&A, 9);
    apilar(&A, 7);
    printf("\nA:");
    mostrar(&A);

    printf("\nCargando elementos a la pila B...\n");
    apilar(&B, 0);
    apilar(&B, 9);
    apilar(&B, 7);
    apilar(&A, 9); //comentar para hacer A == B
    apilar(&A, 1); //comentar para hacer A == B
    printf("\nB:");
    mostrar(&B);

    while( !pilavacia(&A) || !pilavacia(&B) )
    {
        if ( tope(&A) != tope(&B) )
        {
            printf("\nLas pilas son distintas.");
            //SE PUEDE LOGRAR EL MISMO EFECTO DESAPILANDO CUALQUIERA DE LAS 2 PILAS ENTERAS A AUX
            break;
        }
        else
        {
            apilar(&AUX, desapilar(&A));
            apilar(&AUX, desapilar(&B));
        }
        if ( pilavacia(&A) && pilavacia(&B) )
        {
            printf("\nLas pilas son iguales.");
            break;
        }
    }
}

//11. Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los
//elementos que sean iguales al tope de la pila MODELO.
int ejercicioNro11()
{
    Pila DADA, MODELO, AUX1, AUX2;
    inicpila(&DADA);
    inicpila(&MODELO);
    inicpila(&AUX1);
    inicpila(&AUX2);

    printf("\nCargando 8 elementos a la pila DADA...\n");
    apilar(&DADA, 2);
    apilar(&DADA, 4);
    apilar(&DADA, 6);
    apilar(&DADA, 2);
    apilar(&DADA, 1);
    apilar(&DADA, 8);
    apilar(&DADA, 2);
    apilar(&DADA, 3);
    printf("\nDADA:");
    mostrar(&DADA);

    printf("\nIngrese un elemento a MODELO para comparar: \n");
    leer(&MODELO);
    printf("\nMODELO:");
    mostrar(&MODELO);

    printf("\nComparando los valores de los topes de DADA y MODELO.\n");
    while ( !pilavacia(&DADA) )
    {
        if ( tope(&DADA) != tope(&MODELO) )
        {
            printf("\nLos topes DADA: '%i', MODELO: '%i' son distintos, apilando DADA en AUX1...\n", tope(&DADA), tope(&MODELO));
            apilar(&AUX1, desapilar(&DADA));
        }
        else
        {
            printf("\nLos topes DADA: '%i', MODELO: '%i' son iguales, apilando DADA en AUX2...\n", tope(&DADA), tope(&MODELO));
            apilar(&AUX2, desapilar(&DADA));
        }
    }

    printf("\nApilando de vuelta AUX1 en DADA...\n");
    while ( !pilavacia(&AUX1) )
    {
        apilar(&DADA, desapilar(&AUX1));
    }

    printf("\nDADA:");
    mostrar(&DADA);
    printf("\nMODELO:");
    mostrar(&MODELO);
}

//12. Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los
//elementos que existan en MODELO.
int ejercicioNro12()
{
    //Inicializacion de Pilas
    Pila DADA, MODELO, AUXDADA, AUXMODELO, AUXDESCARTE;
    inicpila(&DADA);
    inicpila(&MODELO);
    inicpila(&AUXDADA);
    inicpila(&AUXMODELO);
    inicpila(&AUXDESCARTE);

    //Generacion aleatoria de elementos para DADA y MODELO
    //Uso un contador para generar aleatoreamente las pilas
    int insertarHasta;
    srand(time(NULL));
    insertarHasta = rand()%5+8; //Genera de 8 a 12 elementos
    printf("\nIntroduciendo elementos a la pila DADA...");
    while(insertarHasta > 0)
    {
        printf("\nApilando un nuevo elemento a DADA...");
        apilar(&DADA, rand()%8);
        insertarHasta--;
    }
    printf("\n\nDADA: ");
    mostrar(&DADA);

    insertarHasta = rand()%4; //Genera de 0 a 4 elementos
    printf("\nIntroduciendo elementos a la pila MODELO...");
    while(insertarHasta > 0)
    {
        printf("\nApilando un nuevo elemento a MODELO...");
        apilar(&MODELO, rand()%8);
        insertarHasta--;
    }
    printf("\n\nMODELO: ");
    mostrar(&MODELO);

    //Compara todos los valores de DADA uno por uno hasta quedar vacia
    while ( !pilavacia(&DADA) )
    {
        printf("\nDADA tiene al menos un elemento...");
        printf("\nComparando topes...");

        //Compara todos los valores de MODELO uno por uno hasta quedar vacia o que los topes sean iguales
        while( !pilavacia(&MODELO)  )
        {
            if ( tope(&DADA) == tope(&MODELO) )
            {
                printf("\nLos topes son iguales. Eliminando el elemento, apilando DADA en AUXDESCARTE...");
                apilar(&AUXDESCARTE, desapilar(&DADA));
                printf("\n\nDADA: ");
                mostrar(&DADA);
                printf("\nVolviendo a apilar todos los elementos de AUXMODELO en MODELO...");
                while ( !pilavacia(&AUXMODELO) )
                {
                    apilar(&MODELO, desapilar(&AUXMODELO));
                }
            }
            else
            {
                printf("\nLos topes son distintos. Apilando MODELO en AUXMODELO...");
                apilar(&AUXMODELO, desapilar(&MODELO));
            }
            printf("\n\nModelo: ");
            mostrar(&MODELO);
        }

        if ( !pilavacia(&DADA) ) //evita bug donde se desapilaba DADA estando vacia
        {
            printf("\nNingun tope de MODELO coincide con el tope de DADA. Apilando DADA en AUXDADA...");
            apilar(&AUXDADA, desapilar(&DADA));
        }
        printf("\nLa pila MODELO esta vacia. Apilando AUXMODELO en MODELO...");
        while ( !pilavacia(&AUXMODELO) )
        {
            apilar(&MODELO, desapilar(&AUXMODELO));
        }
        printf("\n\nDADA: ");
        mostrar(&DADA);
    }
    printf("\nDADA esta vacia. Volviendo a apilar de AUXDADA en DADA.");
    while ( !pilavacia(&AUXDADA) )
    {
        apilar(&DADA, desapilar(&AUXDADA));
    }
    printf("\n\nDADA: ");
    mostrar(&DADA);
    printf("\nAUXDESCARTE: ");
    mostrar(&AUXDESCARTE);
    printf("\nModelo: ");
    mostrar(&MODELO);
}

//13. Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores
//o iguales que el tope de LIMITE a la pila MAYORESES, y los elementos que sean menores a la pila MENORES.
int ejercicioNro13()
{
    //Inicializacion de Pilas
    Pila DADA, LIMITE, MAYORES, MENORES;
    inicpila(&DADA);
    inicpila(&LIMITE);
    inicpila(&MAYORES);
    inicpila(&MENORES);

    //Generacion aleatoria de elementos para DADA y LIMITE
    //Uso un contador generado aleatoreamente para cargar elementos a DADA
    int insertarHasta;
    srand(time(NULL));
    insertarHasta = rand()%3+10; //Genera de 10 a 12 elementos
    printf("\nIntroduciendo elementos a la pila DADA...");
    while(insertarHasta >= 0)
    {
        printf("\nApilando un nuevo elemento a DADA...");
        apilar(&DADA, rand()%10); //Los elementos tiene valores del 0 al 9
        insertarHasta--;
    }
    printf("\n\nDADA: ");
    mostrar(&DADA);

    printf("\nApilando un nuevo elemento a LIMITE...");
    apilar(&LIMITE, rand()%5+3); //Genera un LIMITE de valor 3 a 7
    printf("\n\nLIMITE: ");
    mostrar(&LIMITE);

    //Comparando los topes de DADA con LIMITE
    while ( !pilavacia(&DADA) )
    {
        printf("\nLa pila DADA tiene al menos un elemento y su tope es: %i", tope(&DADA));
        if ( tope(&DADA) >= tope(&LIMITE) )
        {
            printf("\nEl tope de DADA es mayor o igual al tope de LIMITE. Apilando DADA en MAYORES...");
            apilar(&MAYORES, desapilar(&DADA));
        }
        else
        {
            printf("\nEl tope de DADA es menor al tope de LIMITE. Apilando DADA en MENORES...");
            apilar(&MENORES, desapilar(&DADA));
        }
    }

    //Mostrando las Pilas
    printf("\n\nDADA: ");
    mostrar(&DADA);
    printf("\nLIMITE: ");
    mostrar(&LIMITE);
    printf("\nMAYORES: ");
    mostrar(&MAYORES);
    printf("\nMENORES: ");
    mostrar(&MENORES);
}

//14. Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope
//de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR. (NO contar los elementos)
int ejercicioNro14()
{
    //Inicializacion de Pilas
    Pila DADA, AUXPAR, AUXIMPAR, AUX;
    inicpila(&DADA);
    inicpila(&AUXPAR);
    inicpila(&AUXIMPAR);
    inicpila(&AUX);

    //Uso un contador generado aleatoreamente para cargar elementos a DADA
    int insertarHasta;
    srand(time(NULL));
    insertarHasta = rand()%6+10; //Genera de 10 a 15 elementos
    printf("\nIntroduciendo elementos a la pila DADA...");
    while(insertarHasta >= 0)
    {
        printf("\nApilando un nuevo elemento a DADA...");
        apilar(&DADA, rand()%10); //Los elementos tiene valores del 0 al 9
        insertarHasta--;
    }
    printf("\n\nDADA: ");
    mostrar(&DADA);

    //Desapilando DADA en AUXPAR y AUXIMPAR
    while( !pilavacia(&DADA) )
    {
        if ( !pilavacia(&DADA) ) //evita que se desapile DADA cuando esta vacia
        {
            apilar(&AUXIMPAR, desapilar(&DADA));
        }
        if ( !pilavacia(&DADA) ) //lo mismo
        {
            apilar(&AUXPAR, desapilar(&DADA));
        }
    }

    //Desapilando AUXPAR hasta que quede vacia (AUXPAR siempre es <= a AUXIMPAR)
    while ( !pilavacia(&AUXPAR) )
    {
        apilar(&AUX, desapilar(&AUXPAR));
        apilar(&AUX, desapilar(&AUXIMPAR));
    }

    //Comparando los elementos de las pilas para deducir si es par o impar
    if ( pilavacia(&AUXIMPAR) && pilavacia(&AUXPAR) )
    {
        printf("\nLa cantidad de elementos de la pila DADA es par.");
        apilar(&AUXPAR, desapilar(&AUX));
    }
    else
    {
        printf("\nLa cantidad de elementos de la pila DADA es impar.");
        //El tope de AUX ya esta apilado en AUXIMPAR
    }

    //Mostrando las Pilas
    printf("\n\nAUX: ");
    mostrar(&AUX);
    printf("\n\nAUXIMPAR: ");
    mostrar(&AUXIMPAR);
    printf("\n\nAUXPAR: ");
    mostrar(&AUXPAR);

}

int ejercicioNro15()
{
    printf("\nde la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR. (NO contar los elementos)");
    printf("\n\n15. Cual es la condicion del siguiente ciclo? Cuando finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas):");
    printf("\n\n| while (!pilavacia(&Pila1)) {");
    printf("\n|     apilar (&Pila2, desapilar(&Descarte))}");
    printf("\n| }");
    printf("\n\n-La condicion para que el ciclo se repita es que la Pila1 tenga al menos un elemento.");
    printf("\n-El ciclo continuara indefinidamente ya que Pila1 nunca es modificada, haciendo que la condicion sea siempre verdadera.\n");
}

int ejercicioNro16()
{
    printf("\n\n16. Que realiza el siguiente codigo escrito en lenguaje C (Pila1, Aux y Result son pilas):");
    printf("\n\n| while (!pilavacia(&Pila1)) {");
    printf("\n|     if (tope(&Pila1) == 5) {");
    printf("\n|         apilar (&Aux, desapilar(&Pila1));");
    printf("\n|         apilar (&Result, desapilar(&Aux));");
    printf("\n|     }");
    printf("\n| }");
    printf("\n\n-El codigo inicia un bucle que se repite mientras Pila1 no este vacia y luego compara si tope de Pila1 es igual a 5");
    printf("\n-Durante el bucle se apila el tope de Pila1 en AUX y luego ese mismo tope se apila en Result de forma redundante.");
    printf("\n-Si el tope de Pila1 es distinto a 5 y la pila no esta vacia, entonces entrara en un bucle infinito");
    printf("\n-ya que no se cumple la condicion 'if' y no se desapila Pila1.\n");
}

int ejercicioNro17()
{
    printf("\n\n17. Para el ejercicio \"Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos");
    printf("\nelementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algun");
    printf("\nvalor 5\", se realizo el siguiente programa:");
    printf("\n\n| int main() {");
    printf("\n|     Pila Origen, Distinto;");
    printf("\n|     inicpila(&Origen);");
    printf("\n|     inicpila(&Distinto);");
    printf("\n|     leer(&Origen);");
    printf("\n|     if (!pilaVacia(&Origen)){");
    printf("\n|         while (tope(&Origen) != 5) {");
    printf("\n|             apilar (&Distinto, desapilar(&Origen));");
    printf("\n|         }");
    printf("\n|     }");
    printf("\n| }");
    printf("\n\na. Resuelve el problema planteado?");
    printf("\nb. Cuales son los errores que encuentra?");
    printf("\nc. Reescribir el codigo para que resuelva adecuadamente el problema planteado.");
    printf("\nd. Indicar los componentes del programa.");
    printf("\n\n-a. No.");
    printf("\n\n-b. #El funcionamiento del programa es: ");
    printf("\n-   Se carga por teclado un valor que se apila en Origen.");
    printf("\n-   Si Origen no esta vacia el programa inicia un bucle");
    printf("\n-   siendo la condicion que el tope de Origen sea distinto a 5.");
    printf("\n-   Si el tope de Origen es distinto de 5, se apila el tope de Origen en Distinto.");
    printf("\n-   Si el tope de Origen es igual 5, el programa entra en un bucle infinito.");
    printf("\n\n-   #El programa carga solo un dato del usuario para apilar en Origen.");
    printf("\n-   En su lugar deberia iniciar un bucle y preguntar si desea continuar apilando.");
    printf("\n-   #El programa no compara todos los elementos que preceden a 5, solo los que no son iguales.");
    printf("\n-   Deberia comparar 1 por 1 los valores entre el valor tope de toda la pila y el 5.");
    printf("\n-   #Si se ingresa cualquier valor que no sea 5 el programa entra en un bucle infinito.");
    printf("\n-   Esto ocurre porque la pila Origen queda vacia luego del primer bucle, y se vuelve a leer su tope");
    printf("\n-   el tope de la pila vacia devuelve un valor al azar, siendo este distinto a 5, lo que perdura");
    printf("\n-   el bucle indefinidamente y apila un nuevo numero al azar en Distinto cada vez que hace el ciclo.");
    printf("\n\nc. Iniciando el programa...\n");

    //d. Inicializacion de Pilas
    Pila Origen, Distinto, Aux;
    inicpila(&Origen);
    inicpila(&Distinto);
    inicpila(&Aux);

    //Ingreso de elementos a Origen
    char continuar = 'c';
    printf("\n\nApilando elementos en Origen\n");
    while( continuar == 'c' )
    {
        leer(&Origen);
        printf("Desea ingresar otro elemento a Origen? ('c' para continuar, otra letra para salir)");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    printf("\nOrigen");
    mostrar(&Origen);

    //Compara el tope de Origen == 5 hasta encontrarlo o vaciar la pila
    while ( !pilavacia(&Origen) )
    {
        if ( tope(&Origen) != 5 )
        {
            printf("\nTope de Origen es distinto de 5. apilando Origen en Distinto...");
            apilar(&Distinto, desapilar(&Origen));
        }
        else
        {
            printf("\nTope de Origen es igual a 5. apilando todo Origen en Aux...");
            while ( !pilavacia(&Origen) )
            {
                apilar(&Aux, desapilar(&Origen)); //apilo todo Origen en AUX para vaciar Origen
            }
        }
    }

    //Muestra las Pilas
    printf("\nOrigen");
    mostrar(&Origen);
    printf("\nDistinto");
    mostrar(&Distinto);
    printf("\nAux");
    mostrar(&Aux);
}

int ejercicioNro18()
{
    printf("\n\n18. Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):");
    printf("\n| while ( (!pilaVacia(&Pila1)) && (!pilaVacia(&Pila2)) ) {");
    printf("\n|     apilar (&Descarte, desapilar(&Pila1));");
    printf("\n|     apilar (&Descarte, desapilar(&Pila2));");
    printf("\n| }");
    printf("\n\na. Cual es la condicion del ciclo? Explique con sus palabras");
    printf("\n\n-a. Si hay al menos un elemento en Pila1 Y hay al menos un elemento en Pila2:");
    printf("\n-   Se apila el tope de Pila1 y luego el tope de Pila2 en descarte.");
    printf("\n\nb. Cuales son los posibles estados de ambas pilas al finalizar el ciclo?");
    printf("\n\n-b. Hay 3 posibles estados:");
    printf("\n-   1-Que ambas pilas esten vacias.");
    printf("\n-   2-Que Pila1 este vacia y Pila2 tenga algun elemento.");
    printf("\n-   3-Que Pila2 este vacia y Pila1 tenga algun elemento.\n");
}

//MAIN MENU
int main()
{
    int continuar, nroEjercicio;
    continuar = 1; //cuando continuar = 0 se sale del programa

    do
    {
        printf("\nUTN - FR Mar del Plata - Tecnico Universitario en Programacion");
        printf("\n\nProgramacion I y Laboratorio I");
        printf("\n\n1. Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos que se");
        printf("\nencuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.");
        printf("\n\n2. Cargar desde el teclado la pila ORIGEN e inicializar en vacio la pila DESTINO. Pasar todos los");
        printf("\nelementos de la pila ORIGEN a la pila DESTINO.");
        printf("\n\n3. Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos");
        printf("\nal valor 8.");
        printf("\n\n4. Cargar desde el teclado la pila ORIGEN e inicializar en vacio la pila DESTINO. Pasar los elementos de");
        printf("\nla pila ORIGEN a la pila DESTINO, pero dejandolos en el mismo orden.");
        printf("\n\n5. Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA contenga los elementos");
        printf("\ncargados originalmente en ella, pero en orden inverso.");
        printf("\n\n6. Pasar el primer elemento (tope) de la pila DADA a su ultima posicion (base), dejando los restantes");
        printf("\nelementos en el mismo orden.");
        printf("\n\n7. Pasar el ultimo elemento (base) de la pila DADA a su primera posicion (tope), dejando los restantes");
        printf("\nelementos en el mismo orden.");
        printf("\n\n8. Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.");
        printf("\n\n9. Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.");
        printf("\n\n10. Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales (en cantidad de");
        printf("\nelementos, valores que contienen y posicion de los mismos). Mostrar por pantalla el resultado.");
        printf("\n\n11. Suponiendo la existencia de una pila MODELO que no este vacia, eliminar de la pila DADA todos los");
        printf("\nelementos que sean iguales al tope de la pila MODELO.");
        printf("\n\n12. Suponiendo la existencia de una pila MODELO (vacia o no), eliminar de la pila DADA todos los");
        printf("\nelementos que existan en MODELO.");
        printf("\n\n13. Suponiendo la existencia de una pila LIMITE, pasar los elementos de la pila DADA que sean mayores");
        printf("\no iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.");
        printf("\n\n14. Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope");
        printf("\nde la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR. (NO contar los elementos)");
        printf("\n\n15. Cual es la condicion del siguiente ciclo? Cuando finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas):");
        printf("\n\n| while (!pilavacia(&Pila1)) {");
        printf("\n|     apilar (&Pila2, desapilar(&Descarte))}");
        printf("\n| }");
        printf("\n\n16. Que realiza el siguiente codigo escrito en lenguaje C (Pila1, Aux y Result son pilas):");
        printf("\n\n| while (!pilavacia(&Pila1)) {");
        printf("\n|     if (tope(&Pila1) == 5) {");
        printf("\n|         apilar (&Aux, desapilar(&Pila1));");
        printf("\n|         apilar (&Result, desapilar(&Aux));");
        printf("\n|     }");
        printf("\n| }");
        printf("\n\n17. Para el ejercicio \"Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos");
        printf("\nelementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algun");
        printf("\nvalor 5\", se realizo el siguiente programa:");
        printf("\n\n| int main() {");
        printf("\n|     Pila Origen, Distinto;");
        printf("\n|     inicpila(&Origen);");
        printf("\n|     inicpila(&Distinto);");
        printf("\n|     leer(&Origen);");
        printf("\n|     if (!pilaVacia(&Origen)){");
        printf("\n|         while (tope(&Origen) != 5) {");
        printf("\n|             apilar (&Distinto, desapilar(&Origen));");
        printf("\n|         }");
        printf("\n|     }");
        printf("\n| }");
        printf("\n\na. Resuelve el problema planteado?");
        printf("\nb. Cuales son los errores que encuentra?");
        printf("\nc. Reescribir el codigo para que resuelva adecuadamente el problema planteado.");
        printf("\nd. Indicar los componentes del programa.");
        printf("\n\n18. Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):");
        printf("\n| while ( (!pilaVacia(&Pila1)) && (!pilaVacia(&Pila2)) ) {");
        printf("\n|     apilar (&Descarte, desapilar(&Pila1));");
        printf("\n|     apilar (&Descarte, desapilar(&Pila2));");
        printf("\n| }");
        printf("\n\na. Cual es la condicion del ciclo? Explique con sus palabras");
        printf("\nb. Cuales son los posibles estados de ambas pilas al finalizar el ciclo?");

        printf("\n\nIngrese un numero de ejercicio a ejecutar (0 para salir): ");
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
                ejercicioNro13();
                break;
            case 14:
                ejercicioNro14();
                break;
            case 15:
                ejercicioNro15();
                break;
            case 16:
                ejercicioNro16();
                break;
            case 17:
                ejercicioNro17();
                break;
            case 18:
                ejercicioNro18();
                break;
            case 0:
                continuar = 0;
                break;
            default:
                printf("\nEl numero de ejercicio ingresado no es valido.\n\n");
                break;
        }

        if ( continuar != 0 )
        {
            printf("\nEjercicio finalizado, desea continuar ejecutando la guia? (0 para salir): ");
            scanf("%i", &continuar);
        }

    }
    while ( continuar != 0 );

    printf("\n\nSaliendo del programa...\n");
}
