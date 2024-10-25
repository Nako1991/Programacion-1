//TRABAJO PRACTICO Nº3: FUNCIONES

#include<stdio.h>
#include<pila.h>
void generarPila();
void apilarVarios();
int main()
{
    int salir = 0;
    do
    {
        char nombrePila;
        int numeroTarea;
        printf("\n........................................................\n");
        printf("MENU PRINCIPAL");
        printf("\n........................................................\n");
        printf("1. Ingresa tantos valores en una Pila como se requiera.\n");
        printf("2. Transfiere todos los elementos de una Pila a otra.\n");
        printf("3. Transfiere todos los elementos de una Pila a otra manteniendo el orden.\n");
        printf("4. Busca el menor elemento de una pila, lo retorna como valor y lo remueve de la pila.\n");
        printf("5. Genera una Pila, ordena los valores de otra pila por seleccion dentro de esta.\n");
        printf("6. Introduce un valor dentro de una pila ordenada conservando el orden.\n");
        printf("7. Genera una Pila, ordena los valores de otra pila por insercion dentro de esta.\n");
        printf("8. Suma los dos primeros elementos de una pila y retorna su resultado sin alterar la pila.\n");
        printf("9. Calcula el promedio del valor de todos los elementos de una pila.\n");//invoca otras 3 funciones, una que calcula la sema, otra que cuenta los elementos, otra que los divida
        printf("10. Toma los valores de una pila y los transforma en un numero decimal.\n");
        printf("11. Muestra los valores de una Pila.\n");
        printf("........................................................\n");
        printf("Ingrese el numero de la Tarea que desea realizar, si desea salir ingrese '0': ");
        fflush(stdin);
        scanf("%d", &numeroTarea);
        printf("........................................................\n");
        switch (numeroTarea)
        {
            case 0: //ingresa 0 para terminar el programa
                salir = 1;
                break;
            case 1:
                seleccionarPila();
                apilarVarios(nombrePila);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12: //ingresa 12 para generar una nueva pila de nombre A luego B, luego C... etc
                generarPila();
                break;
        }
    }
    while (salir == 0);
    printf("\nGracias por usar el programa.\n");
}
//12. Genera una nueva pila.
void generarPila()
{
    char nombrePila;
    contadorPila = contadorPila + 1;
    printf("\nGenerando una nueva Pila.\n");
    printf("El contador esta en %d\n", contadorPila);
    switch (contadorPila)
    {
    case 1:
        nombrePila = 'A';
        Pila A;
        inicpila(&A);
        break;
    case 2:
        nombrePila = 'B';
        Pila B;
        inicpila(&B);
        break;
    case 3:
        nombrePila = 'C';
        Pila C;
        inicpila(&C);
        break;
    case 4:
        nombrePila = 'D';
        Pila D;
        inicpila(&D);
        break;
    case 5:
        nombrePila = 'E';
        Pila E;
        inicpila(&E);
        break;
    case 6:
        nombrePila = 'F';
        Pila F;
        inicpila(&F);
        break;
    case 7:
        nombrePila = 'G';
        Pila G;
        inicpila(&G);
        break;
    case 8:
        nombrePila = 'H';
        Pila H;
        inicpila(&H);
        break;
    case 9:
        nombrePila = 'I';
        Pila I;
        inicpila(&I);
        break;
    case 10:
        nombrePila = 'J';
        Pila J;
        inicpila(&J);
        break;
    }
    printf("Una Pila de nombre '%c' ha sido generada.\n", nombrePila);
}
//1. Hacer una función que permita ingresar varios elementos a una pila, tanto como quiera el usuario.
void apilarVarios(x)
{
    int i, totalElemento, valorElemento;
    char nombrePila;
    printf("\nSi aun no tiene una pila la puede generar con la tarea numero 12 de este programa.\n");
    printf("Ingrese el nombre de la Pila que desea utilizar: ");
    fflush(stdin);
    scanf("&c\n", nombrePila);
    printf("Cuantos elementos quiere ingresar a la Pila?\n");
    fflush(stdin);
    scanf("%d", &totalElemento);
    printf("Ingrese los valores de los elementos uno a uno.\n");
    for (i = 0; i < totalElemento; i++)
    {
        printf("Por favor ingresar el valor del elemento numero %d que desea ingresar a la Pila: ", i + 1);
        fflush(stdin);
        scanf("%d", &valorElemento);
        apilar(&nombrePila, valorElemento);
    }
    printf("La Pila contiene los siguientes valores: \n");
    mostrar(&nombrePila);
}
//2. Hacer una función que pase todos los elementos de una pila a otra
void moverPila(x, y) //x: pila q se desea mover, y: pila q va a recibir los valores
{
    printf("\nComenzando la transferencia de valores de una pila a otra\n");
    while (!pilavacia(&x))
    {
        apilar(&y, desapilar(&x));
    }
    printf("Transferencia completa, la nueva pila contiene:\n");
    mostrar(&y);
}
//12. Genera una nueva pila.
void generarPila()
{
    char nombrePila;
    contadorPila = contadorPila + 1;
    printf("\nGenerando una nueva Pila.\n");
    printf("El contador esta en %d\n", contadorPila);
    switch (contadorPila)
    {
    case 1:
        nombrePila = 'A';
        Pila A;
        inicpila(&A);
        break;
    case 2:
        nombrePila = 'B';
        Pila B;
        inicpila(&B);
        break;
    case 3:
        nombrePila = 'C';
        Pila C;
        inicpila(&C);
        break;
    case 4:
        nombrePila = 'D';
        Pila D;
        inicpila(&D);
        break;
    case 5:
        nombrePila = 'E';
        Pila E;
        inicpila(&E);
        break;
    case 6:
        nombrePila = 'F';
        Pila F;
        inicpila(&F);
        break;
    case 7:
        nombrePila = 'G';
        Pila G;
        inicpila(&G);
        break;
    case 8:
        nombrePila = 'H';
        Pila H;
        inicpila(&H);
        break;
    case 9:
        nombrePila = 'I';
        Pila I;
        inicpila(&I);
        break;
    case 10:
        nombrePila = 'J';
        Pila J;
        inicpila(&J);
        break;
    }
    printf("Una Pila de nombre '%c' ha sido generada.\n", nombrePila);
}

