/*
Trabajo Práctico N° 3: Funciones
1. Hacer una función que permita ingresar varios elementos a una pila, tanto como quiera el
usuario.
2. Hacer una función que pase todos los elementos de una pila a otra.
3. Hacer una función que pase todos los elementos de una pila a otra, pero conservando el orden.
4. Hacer una función que encuentre el menor elemento de una pila y lo retorna. La
misma debe eliminar ese dato de la pila.
5. Hacer una función que pase los elementos de una pila a otra, de manera que se genere una
nueva pila ordenada. Usar la función del ejercicio 4. (Ordenamiento por selección)
6. Hacer una función que inserta en una pila ordenada un nuevo elemento, conservando el orden
de ésta.
7. Hacer una función que pase los elementos de una pila a otra, de manera que se genere una
nueva pila ordenada. Usar la función del ejercicio 6. (Ordenamiento por inserción)
8. Hacer una función que sume y retorne los dos primeros elementos de una pila (tope y anterior),
sin alterar su contenido.
9. Hacer una función que calcule el promedio de los elementos de una pila, para ello hacer también
una función que calcule la suma, otra para la cuenta y otra que divida. En total son cuatro
funciones, y la función que calcula el promedio invoca a las otras 3.
10. Hacer una función que reciba una pila con números de un solo dígito (es responsabilidad de
quien usa el programa) y que transforme esos dígitos en un número decimal. Por ejemplo, la pila:
ejemplo tope 1 4 6 7 8 base -> 14678
11.Ejercicios extra, con el fin de generar una experiencia de usuario diferente a la que otorga la librería
se requiere desarrollar las siguientes funciones:
● Realizar una función que cargue la pila sin utilizar la función leer.
● Realizar una función que muestre la pila sin utilizar la función mostrar.
*/

#include<stdio.h>
#include<pila.h>
#include<math.h>

int main()
{
    //MENU
    int flag=1; //flag: valor que rompe el loop
    int seleccionMenu;
    int valorAIngresar;
    int promedio;
    Pila PILA;
    inicpila(&PILA);
    Pila INVERTIDA;
    inicpila(&INVERTIDA);
    Pila COPIA;
    inicpila(&COPIA);
    Pila AUXILIAR;
    inicpila(&AUXILIAR);
    Pila MENOR;
    inicpila(&MENOR);
    Pila ORDENADA;
    inicpila(&ORDENADA);
    Pila SUMA;
    inicpila(&SUMA);
    printf("\n\nTrabajo Practico Numero 3 - Funciones");
    printf("Se Creo la PILA");
    do //loop del menu
    {
        printf("\nMenu de opciones");
        printf("\n1. Ingresar elementos a una Pila");
        printf("\n2. Mover PILA a INVERTIDA (se invierte el orden)");
        printf("\n3. Mover PILA a COPIA");
        printf("\n4. Mover el menor valor de PILA a MENOR y lo retorna");
        printf("\n5. Mover PILA a ORDENADA ordenando cada valor de forma descendente por seleccion (de tope a base)");
        printf("\n6. Ingresar un elemento a ORDENADA, conservando el orden");
        printf("\n7. Mover PILA a ORDENADA ordenando cada valor de forma descendente por insercion (de tope a base)");
        printf("\n8. Suma el tope y el anterior de PILA y lo retorna");
        printf("\n9. Devuelve el promedio de los valores dentro de una PILA");
        printf("\n10. Transfiere todos los valores de una PILA a un decimal entero");
        printf("\n11. Ejemplo de Leer y Mostrar manual");
        printf("\nIngrese la opcion de menu que desea utilizar (numeros del 1 al ~): ");
        scanf("%d", &seleccionMenu);
        switch(seleccionMenu) //check de opcion elegida
        {
        case 1:
            apilarVarios(&PILA);
            printf("\nSaliendo al menu...");
            break;
        case 2:
            moverPilaInvertida(&PILA, &INVERTIDA);
            printf("\nSaliendo al menu...");
            break;
        case 3:
            moverPila(&PILA, &INVERTIDA, &COPIA);
            printf("\nSaliendo al menu...");
            break;
        case 4:
            moverMenor(&PILA, &AUXILIAR, &MENOR);
            printf("\nSaliendo al menu...");
            break;
        case 5:
            moverOrdenada(&PILA, &AUXILIAR, &MENOR, &ORDENADA);
            printf("\nSaliendo al menu...");
            break;
        case 6:
            printf("\nIngrese el valor que desea insertar en ORDENADA: ");
            fflush(stdin);
            scanf("%d", &valorAIngresar);
            apilar(&PILA, valorAIngresar);
            seleccionOrdenada (&ORDENADA, &AUXILIAR, &PILA);
            printf("\nPILA:\n");
            mostrar(&PILA);
            printf("\AUXILIAR:\n");
            mostrar(&AUXILIAR);
            printf("\ORDENADA:\n");
            mostrar(&ORDENADA);
            printf("\nSaliendo al menu...");
            break;
        case 7:
            insercionOrdenada (&PILA, &AUXILIAR, &ORDENADA);
            printf("\nSaliendo al menu...");
            break;
        case 8:
            sumaTopeYAnterior(&PILA, &AUXILIAR);
            printf("\nSaliendo al menu...");
            break;
        case 9:
            promedio = promedioPila(&PILA, &AUXILIAR);
            printf("\nEl promedio de todos los valores dentro de la pila es: %d", promedio);
            printf("\nSaliendo al menu...");
            break;
        case 10:
            decimalPila (&PILA, &AUXILIAR);
            printf("\nSaliendo al menu...");
            break;
        case 11:
            leerPila(&PILA);
            mostrarPila(&PILA);
            printf("\nSaliendo al menu...");
            break;
        default: //si la seleccion no esta en el menu sale del loop
            flag=-1;
            printf("\nGracias por usar el programa");
            break;
        }
    }
    while (flag == 1);
}

//Ejercicio 1
void apilarVarios(pila) //apila un valor a la vez y consulta si se quiere continuar
{
    int flag=1;
    int valorAIngresar;
    do
    {
        printf("\nIngrese el valor que desea apilar: ");
        fflush(stdin);
        scanf("%d", &valorAIngresar);
        apilar(pila, valorAIngresar);
        mostrar(pila);
        printf("\nDesea ingresar otro valor? (ingrese 0 para salir): ");
        fflush(stdin);
        scanf("%d", &flag);
    }
    while (flag != 0);
}

//Ejercicio 2
void moverPilaInvertida(pila, pilaInvertida) //apila el tope de una pila en otra hasta vaciarla, invirtiendo los ropes en la segunda pila
{
    printf("\nCopiando PILA en INVERTIDA");
    while (!pilavacia(pila))
    {
        apilar(pilaInvertida, desapilar(pila));
    }
    printf("\nPILAINVERTIDA:\n");
    mostrar(pilaInvertida);
}

//Ejercicio 3
void moverPila(pila, pilaInvertida, pilaCopia)
{
    printf("\nCopiando PILA en INVERTIDA");
    while (!pilavacia(pila))
    {
        apilar(pilaInvertida, desapilar(pila));
    }
    while (!pilavacia(pilaInvertida))
    {
        apilar(pilaCopia, desapilar(pilaInvertida));
    }
    printf("\nPILACOPIA:\n");
    mostrar(pilaCopia);
}

//Ejercicio 4
int moverMenor(pila, pilaAux, pilaMenor)
{
    printf("\nMoviendo el menor de PILA a MENOR");
    apilar(pilaMenor, desapilar(pila));
    while (!pilavacia(pila))
    {
        if (tope(pilaMenor) <= tope(pila))
        {
            apilar(pilaAux, desapilar(pila));
        }
        else
        {
            apilar(pilaAux, desapilar(pilaMenor));
            apilar(pilaMenor, desapilar(pila));
        }
    }
    while (!pilavacia(pilaAux))
    {
        apilar(pila, desapilar(pilaAux));
    }
    printf("\nPILA:\n");
    mostrar(pila);
    printf("\nMENOR:\n");
    mostrar(pilaMenor);
    return tope(pilaMenor);
}

/* //Ejercicio 4 DEBUG
int moverMenor(pila, pilaAux, pilaMenor)
{
    printf("\nMoviendo el menor de PILA a MENOR")
    int i=0; //debug
    apilar(pilaMenor, desapilar(pila));
    printf("\nMENOR: %d", tope(pilaMenor));
    while (!pilavacia(pila))
    {
        i++;
        printf("\nLoop desapilando PILA numero: %d", i);
        if (tope(pilaMenor) <= tope(pila))
        {
            apilar(pilaAux, desapilar(pila));
            printf("\nApilando desde PILA a AUX.");
        }
        else
        {
            apilar(pilaAux, desapilar(pilaMenor));
            apilar(pilaMenor, desapilar(pila));
            printf("\nApilando desde MENOR a AUX y desde PILA a MENOR.");
        }
        printf("\nEl MENOR elemento de PILA es: %d", tope(pilaMenor));
        printf("\nPILA:\n");
        mostrar(pila);
        printf("\nAUXILIAR:\n");
        mostrar(pilaAux);
        printf("\nMENOR:\n");
        mostrar(pilaMenor);
    }
    while (!pilavacia(pilaAux))
    {
        apilar(pila, desapilar(pilaAux));
    }
    printf("\nPILA:\n");
    mostrar(pila);
    printf("\nAUXILIAR:\n");
    mostrar(pilaAux);
    printf("\nMENOR:\n");
    mostrar(pilaMenor);
    return tope(pilaMenor);
}
*/

//Ejercicio 5
void moverOrdenada (pila, pilaAux, pilaMenor, pilaOrdenada)
{
    printf("\nOrdenando PILA en ORDENADA");
    while (!pilavacia(pila))
    {
        moverMenor(pila, pilaAux, pilaMenor);
        apilar(pilaOrdenada, desapilar(pilaMenor));
    }
    printf("\nORDENADA:\n");
    mostrar(pilaOrdenada);
}

//Ejercicio 6
void seleccionOrdenada (pila, pilaAux, pilaOrdenada)
{
    if (pilavacia(pilaOrdenada))
    {
        printf("\nORDENADA esta vacia, apilando de PILA a ORDENADA");
        apilar(pilaOrdenada, desapilar(pila));
        while (!pilavacia(pilaAux))
        {
            apilar(pilaOrdenada, desapilar(pilaAux));
        }
    }
    else
    {
        printf("\nORDENADA no esta vacia");
        while (!pilavacia(pilaOrdenada))
        {
            if (pilavacia(pila))
            {
                break;
            }
            if (tope(pila) <= tope(pilaOrdenada))
            {
                printf("\ntope de PILA es menor o igual a tope de ORDENADA, apilando de PILA a ORDENADA");
                apilar(pilaOrdenada, desapilar(pila));
                while (!pilavacia(pilaAux))
                {
                    apilar(pilaOrdenada, desapilar(pilaAux));
                }
            }
            else
            {
                apilar(pilaAux, desapilar(pilaOrdenada));
            }
        }
    }
}


//Ejercicio 7 1.0
void insercionOrdenada (pila, pilaAux, pilaOrdenada)
{
    printf("\nPILA:\n");
    mostrar(pila);
    printf("\nOrdenando PILA a ORDENADA");
    while (!pilavacia(pila))
    {
        seleccionOrdenada (pila, pilaAux, pilaOrdenada);
    }
    printf("\nORDENADA:\n");
    mostrar(pilaOrdenada);
    printf("\nFin de la insercion ordenada");
}

/*//Ejercicio 7 DEBUG
void insercionOrdenada (pila, pilaAux, pilaOrdenada)
{
    printf("\nOrdenando PILA a ORDENADA");
    while (!pilavacia(pila))
    {
        if (pilavacia(pilaOrdenada))
        {
            printf("\nORDENADA:\n");
            mostrar(pilaOrdenada);
            printf("\nPILA:\n");
            mostrar(pila);
            apilar(pilaOrdenada, desapilar(pila));
            while (!pilavacia(pilaAux))
            {
                printf("\nORDENADA:\n");
                mostrar(pilaOrdenada);
                printf("\nAUXILIAR:\n");
                mostrar(pilaAux);
                apilar(pilaOrdenada, desapilar(pilaAux));
            }
        }
        else
        {
            while (!pilavacia(pilaOrdenada))
            {
                if (pilavacia(pila))
                {
                    break;
                }
                if (tope(pila) <= tope(pilaOrdenada))
                {
                    printf("\nORDENADA:\n");
                    mostrar(pilaOrdenada);
                    printf("\nPILA:\n");
                    mostrar(pila);
                    apilar(pilaOrdenada, desapilar(pila));
                    while (!pilavacia(pilaAux))
                    {
                        printf("\nORDENADA:\n");
                        mostrar(pilaOrdenada);
                        printf("\nAUXILIAR:\n");
                        mostrar(pilaAux);
                        apilar(pilaOrdenada, desapilar(pilaAux));
                    }
                }
                else
                {
                    printf("\nAUXILIAR:\n");
                    mostrar(pilaAux);
                    printf("\nORDENADA:\n");
                    mostrar(pilaOrdenada);
                    apilar(pilaAux, desapilar(pilaOrdenada));
                }
            }
        }
    }
    printf("\nPILA:\n");
    mostrar(pila);
    printf("\nORDENADA:\m");
    mostrar(pilaOrdenada);
    printf("\nFin de la insercion ordenada");
}
*/

//Ejercicio 8
int sumaTopeYAnterior (pila, pilaAux)
{
    int suma;
    apilar(pilaAux, desapilar(pila));
    suma = (tope(pila) + tope(pilaAux));
    apilar(pila, desapilar(pilaAux));
    printf("%d", suma);
    return suma;
}

//Ejercicio 9
int sumatoriaPila (pila, pilaAux)
{
    int suma = 0, i = 0;
    printf("\n ingreso a la funcion sumatoriaPila");
    while (!pilavacia(pila))
    {
        i++;
        printf("\n bucle 1 desapilando pila y sumando");
        suma = suma + tope(pila);
        apilar(pilaAux, desapilar(pila));
        printf("\n suma = %d", suma);
    }
    while(!pilavacia(pilaAux))
    {
        apilar(pila, desapilar(pilaAux));
        printf("\n bucle 1 desapilando aux a pila");
    }
    return suma;
}

int contadorPila (pila, pilaAux)
{
    int cont = 0;
    while (!pilavacia(pila))
    {
        cont++;
        apilar(pilaAux, desapilar(pila));
    }
    while(!pilavacia(pilaAux))
    {
        apilar(pila, desapilar(pilaAux));
    }
    return cont;
}

int promedioPila (pila, pilaAux)
{
    int promedio, sumatoria, contador;
    printf("\n ingreso a la funcion promedioPila");
    sumatoria = sumatoriaPila(pila, pilaAux);
    printf("\n sumatoria = %d", sumatoria);
    contador = contadorPila(pila, pilaAux);
    printf("\n contador = %d", contador);
    promedio = (sumatoria / contador);
    printf("\n promedio = %d", promedio);
    return promedio;
}

//Ejercicio 10 (incluye excepciones para valor 0
int decimalPila (pila, pilaAux)
{
    int i = 0, decimal = 0, topePila, potencia, flag = -1; //la flag es para cuando el primer valor de la PILA es 0
    printf("\n ingreso a la funcion decimalPila");         //transforma el decimal en 10 (ultima digito 0) y activa
    while (!pilavacia(pila))                               //el flag para restar 10 del numero final y corregir
    {
        potencia = round(pow(10, i));
        if (tope(pila) == 0)
        {
            flag = 1;
            decimal = decimal + (10 * potencia);
            i++;
            topePila = tope(pila);
            printf("\n flag = %d, tope = %d, potencia = %d, decimal = %d", flag, topePila, potencia, decimal);
            printf("\n bucle %d desapilando aux a pila", i);
            apilar(pilaAux, desapilar(pila));
        }
        else
        {
            decimal = decimal + (tope(pila) * potencia);
            i++;
            topePila = tope(pila);
            printf("\n flag = %d, tope = %d, potencia = %d, decimal = %d", flag, topePila, potencia, decimal);
            printf("\n bucle %d desapilando aux a pila", i);
            apilar(pilaAux, desapilar(pila));
            if (flag == 1)
            {
                decimal = decimal - potencia;
                flag = -1;
            }
        }
    }
    while(!pilavacia(pilaAux))
    {
        apilar(pila, desapilar(pilaAux));
    }
    printf("\n decimal = %d", decimal);
    return decimal;
}

//Ejercicio 11
int leerPila (pila)
{
    int valor;
    printf("\nIngrese el valor que desea apilar: ");
    fflush(stdin);
    scanf("%d", &valor);
    apilar(pila, valor);
    mostrar(pila);
}

int mostrarPila(pila)
{
    int memo;
    Pila AUX;
    inicpila(&AUX);
    printf("\nBASE ---------------------------------------------- TOPE\n");
    while (!pilavacia(pila))
    {
        memo = tope(pila);
        printf("%d  ");
        apilar(&AUX, desapilar(pila));
    }
    while(!pilavacia(&AUX))
    {
        apilar(pila, desapilar(&AUX));
    }
    printf("\nBASE ---------------------------------------------- TOPE\n");
}

