//Prueba de retorno de char (funciona)
/*
#include<stdio.h>
#include<pila.h>
char dameLetra();
int main()
{
    int i;
    char letrita;
    printf("De numerito a letrita\n");
    for (i = 1; i < 3; i++)
    {
        letrita = dameLetra(i);
        printf("La letra correspondiente al numero %d es: %c\n", i, letrita);
    }
}
char dameLetra(int numerito)
{
    if (numerito == 1) return 'A';
    if (numerito == 2) return 'B';
}
*/
//Prueba de retorno de variable int (funciona)
/*
#include<stdio.h>
#include<pila.h>
int suma();
int main()
{
    int a = 2, b = 5, c = 3, ab, abc;
    ab = suma(a, b);
    abc = suma(ab, c);
    printf("%d\n", abc);
}
int suma(int valor1, int valor2)
{
    int resultado;
    resultado = valor1 + valor2;
    printf("resultado: %d = valor1: %d + valor2: %d\n", resultado, valor1, valor2);
    return resultado;
}
*/
//modificar una pila utilizando una variable como su nombre
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    char nombrePila;
    Pila A;
    inicpila(&A);//quiero q si returna el nombre de la variable tenga una forma de apuntar a la pila adecuada
    printf("introducir el nombre de la pila: ");
    fflush(stdin);
    nombrePila = getche( );//el resultado de getche lo tengo q relacionar con la direccion de memoria de la pila q coincida en nombre
    printf("\nel valor de nombrePila es %c\n", nombrePila);
    apilar(&nombrePila, 5);
    mostrar(&nombrePila);
}
*/
//retornar una pila con una funcion
/*
#include<stdio.h>
#include<pila.h>
int main()
{
    Pila A;
    Pila B;
    inicpila(&A);
    inicpila(&B);
}
Pila retornoPilaONo (Pila x)
{
    apilar(&x, 2);
    apilar(&x, 3);
    apilar(&x, 4);
    return A;
}
retorno = retornoPilaONo(A);
mostrar(&retorno);
*/

/*
#include<stdio.h>
#include<pila.h>

int main()
{
    Pila PILA;
    inicpila(&PILA);
    apilar(&PILA, 2);
    apilar(&PILA, 3);
    apilar(&PILA, 4);
    mostrarPila(&PILA);
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
        printF("%d  ");
        apilar(&AUX, desapilar(pila));
    }
    while(!pilavacia(&AUX))
    {
        apilar(pila, desapilar(&AUX));
    }
    printf("\nBASE ---------------------------------------------- TOPE\n");
}
*/
