/*
Test 1, Introducir e Imprimir Datos, numero entero
# include <stdio.h>
int main()
{
    int x;
    printf("Bienvenidos al mundo de C\n");
    printf("Introduzca un valor entero: ");
    scanf("%d", &x);
    printf("\nEl valor que introdujo fue %d", x);
    return 0;
}
*/

/*
// test 2, letra
# include <stdio.h>
# include <conio.h>
// los compiladores más modernos traen portabilidad para "conio.h", un
//archivo cabecera o HEADER que antiguamente era exclusivo de Borland
//International.
int main( )
{
char letra;
printf ( "Introduzca una letra: " );
fflush(stdin); // leer nota al pie de página
letra = getche( );
printf ( "\nLa letra que introdujo es: %c", letra );
return 0;
}
*/

/*
//Test 3, string
#include<stdio.h>
void main()
{
    char nombre[15];
    printf("Ingrese su nombre: ");
    fflush(stdin);
    scanf("%s", nombre);
    printf("%s", nombre);
}
*/


//TRABAJO PRACTICO Nº 0: INICIAL
//PROBLEMAS SECUENCIALES

//1. Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto
//dinero ganará después de un mes si el banco paga a razón de 2% mensual.
/*
#include<stdio.h>
void main()
{
    float inversion;
    printf("Bienvenido al Banco de pruebas de plazo fijo, introduzca la cantidad de dinero a invertir: ");
    scanf("%f", &inversion);
    inversion = inversion*0.02;
    printf("\nSu ganancia de este mes es: $%f", inversion);
}
*/

//2. Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea
//saber cuánto deberá pagar finalmente por su compra.
/*
#include<stdio.h>
void main()
{
    float totalDeCompra;
    printf("Gracias por utilizar nuestro cupon de descuento!\n");
    printf("Por favor ingrese el valor total de la compra para saber cuanto debe abonar: ");
    scanf("%f", &totalDeCompra);
    totalDeCompra = totalDeCompra - totalDeCompra*0.15;
    printf("\nEl valor total de su compra con descuento es de: %f", totalDeCompra);
}
*/

//3. Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay
//en un grupo de estudiantes
/*
#include<stdio.h>
void main()
{
    float nroHombres;
    float nroMujeres;
    float nroTotal; //Se puede trabajar sin esta variable pero creo que de esta forma es más conveniente
    printf("Ingrese la cantidad de estudiantes mujeres que hay en el grupo: ");
    scanf("%f", &nroMujeres);
    printf("Ingrese la cantidad de estudiantes hombres que hay en el grupo: ");
    scanf("%f", &nroHombres);
    nroTotal = nroHombres + nroMujeres;
    nroHombres = nroHombres*100/nroTotal;
    nroMujeres = nroMujeres*100/nroTotal;
    printf("\nEl total de estudiantes en el grupo es de: %f", nroTotal);
    printf("\nEl porcentaje de mujeres en el grupo es de: %f%", nroHombres);
    printf("\nEl porcentaje de hombres en el grupo es de: %f%", nroMujeres);
}
*/

//PROBLEMAS CONDICIONALES SELECTIVOS SIMPLES

//1. Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara si su
//promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.
/*
#include<stdio.h>
void main()
{
    float calificacionUno;
    float calificacionDos;
    float calificacionTres;
    float promedio;
    printf("Para determinar si se aprueba el curso por favor ingresar las calificaciones");
    printf("\nIngresar la primera calificacion: ");
    scanf("%f", &calificacionUno);
    printf("\nIngresar la segunda calificacion: ");
    scanf("%f", &calificacionDos);
    printf("\nIngresar la tercera calificacion: ");
    scanf("%f", &calificacionTres);
    promedio = ( calificacionUno + calificacionDos + calificacionTres ) / 3;
    printf("\nSu promedio de calificacion es de: %f", promedio);
    if ( promedio >= 7 )
    {
        printf("\nFelicitaciones, has aprobado con un %f!", promedio);
    } else {
        printf("\nHas desaprobado con un %f, mejor suerte la proxima!", promedio);
    }
}
*/

//2. En un almacén se hace un 20% de descuento a los clientes cuya compra supere los
//$5000 ¿Cuál será la cantidad que pagara una persona por su compra?
/*
#include<stdio.h>
void main()
{
    float valorCompra;
    printf("Gracias por su compra, por favor ingrese el valor totalde su compra\npara saber si entra dentro de nuestras promociones: ");
    scanf("%f", &valorCompra);
    if (valorCompra >= 5000)
    {
        valorCompra *= 0.8;
        printf("Su compra supera el valor minimo para el descuento!\nFelicitaciones, ahora solo debera abonar %f", valorCompra);
    } else {
        printf("Su compra no supera el valor necesario para recibir el descuento");
    }
}
*/

//3. Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera: Si
//trabaja 40 horas o menos se le paga $300 por hora Si trabaja más de 40 horas se le
//paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.
/*
#include<stdio.h>
void main()
{
    int salario;
    int horasTrabajadas;
    printf("Bienvenido al calculador de sueldos 2000\nPor favor ingrese la cantidad de horas trabajadas la ultima semana: ");
    scanf("%d", &horasTrabajadas);
    if (horasTrabajadas<=40) {
        salario = horasTrabajadas*300;
        printf("Su salario total para esta semana es de &%d", salario);
    } else {
        salario = (horasTrabajadas-40)*400 + 40*300;
        printf("Su salario total para esta semana es de $%d", salario);
    }
}
*/

//4. Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente
/*
#include<stdio.h>
void main()
{
    float nroA;
    float nroB;
    printf("Escriba dos numeros y el programa los ordenara de menor a mayor");
    printf("\nPrimer numero: ");
    scanf("%f", &nroA);
    printf("\nSegundo numero: ");
    scanf("%f", &nroB);
    if (nroA >= nroB) {
        printf("%f, %f", nroB, nroA);
    } else {
        printf("%f, %f", nroA, nroB);
    }
}
*/

//5. Hacer un algoritmo que calcule el total a pagar por la compra de camisas. Si se
//compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra
//y si son menos de tres camisas un descuento del 10%
/*
#include<stdio.h>
void main()
{
    int nroCamisas;
    float valorCompra;
    printf("Ingrese el numero de camisas que desea comprar: ");
    scanf("%d", &nroCamisas);
    printf("Ingrese el valor total de su compra: ");
    scanf("%f", &valorCompra);
    if (nroCamisas >= 3) {
        valorCompra = valorCompra*0.8;
        printf("El valor de su compra con descuento es de: %f", valorCompra);
    } else {
        valorCompra = valorCompra*0.9;
        printf("El valor de su compra con descuento es de: %f", valorCompra);
    }
}
*/

//PROBLEMAS CONDICIONALES SELECTIVOS COMPUESTOS (SI ANIDADOS O EN CASCADA)

//1. Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el
//segundo que los reste y si no que los sume
/*
#include<stdio.h>
void main()
{
    float nroA;
    float nroB;
    printf("Ingrese el primer numero: ");
    scanf("%f", &nroA);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &nroB);
    if (nroA == nroB) {
        nroA = nroA*nroB;
        printf("El resultado de la multiplicacion de los dos numeros es de: %f", nroA);
    } else {
        if (nroA > nroB) {
            nroA = nroA-nroB;
            printf("El resultado de restar el segundo numero al primero es de: %f", nroA);
        } else {
            nroA = nroA+nroB;
            printf("El resultado de sumar el segundo numero al primero es de: %f", nroA);
        }
    }
}
*/

//2. Leer tres números diferentes e imprimir el número mayor de los tres.
/*
#include<stdio.h>
void main()
{
    float nroA; float nroB; float nroC;
    printf("Ingresar el primer numero: ");
    scanf("%f", &nroA);
    printf("Ingresar el segundo numero: ");
    scanf("%f", &nroB);
    printf("Ingresar el tercer numero: ");
    scanf("%f", &nroC);
    if (nroA >= nroB && nroA >= nroC ) {
        printf("El mayor numero de los 3 es: %f", nroA);
    } else {
        if (nroB >= nroA && nroB >= nroC) {
            printf("El mayor numero de los 3 es: %f", nroB);
        } else {
            printf("El mayor numero de los 3 es: %f", nroC);
        }
    }
}
*/

//PROBLEMAS CON REPETICIONES

//1. Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de
//Programación 1
/*
#include<stdio.h>
void main()
{
    float calificacion, totalCalificacion = 0;
    int i;
    printf("Ingrese sus 7 calificaciones de Programacion 1 para calcular el promedio: ");
    for (i = 0 ; i < 7 ; i++) {
        scanf("\n%f", &calificacion);
        totalCalificacion = totalCalificacion + calificacion;
    }
    totalCalificacion = totalCalificacion / 7;
    printf("Su promedio de la materia es de: %f", totalCalificacion);
}
*/

//2. Leer 10 números y obtener su cubo y su cuarta.
/*
#include<stdio.h>
void main()
{
    float numeroActual;
    int i;
    printf("Ingresa 10 numeros para obtener su cubo y su cuarta");
    for ( i = 0 ; i < 10 ; i++) {
        printf("\nNumero: ");
        scanf("%f", &numeroActual);
        numeroActual = numeroActual * numeroActual;
        printf("El cubo de este numero es: %f", numeroActual);
        numeroActual = numeroActual * numeroActual;
        printf("La cuarta de este numero es: %f", numeroActual);
    }
}
*/

//3. Leer 10 números e imprimir solamente los números positivos
/*
#include<stdio.h>
void main()
{
    float numeroActual;
    int i;
    printf("Ingresa 10 numeros, los numeros positivos seran devueltos");
    for ( i = 0 ; i < 10 ; i++) {
        printf("\nNumero: ");
        scanf("%f", &numeroActual);
        if (numeroActual >= 0) {
            printf("%f", numeroActual);
        } else {
        printf("\nEl numero no es positivo.");
    }
}8
*/

//4. Leer 15 números negativos y convertirlos en positivos e imprimir dichos números.
/*
#include<stdio.h>
void main()
{
    float a;
    int i;
    printf("Ingresa 15 nume4ros negativos y seran convertidos en positivos");
    for ( i = 0 ; i < 15 ; i++ ) {
        printf("\nNumero: ");
        scanf("%f", &a);
        if ( a < 0 ) {
            a = -a;
            printf("El positivo de este numero es: %f", a);
        } else {
        printf("El numero no es negativo.");
        }
    }
}
*/

//5. Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.
//Realizar un algoritmo para calcular la calificación promedio y la calificación más baja de
//todo el grupo.
/*
#include<stdio.h>
void main()
{
    int i;
    float nro, nroMinimo=100, nroTotal=0;
    printf("Introduce los valores de las calificaciones de los alumnos.\n");
    for ( i = 0 ; i < 40 ; i++ ) {
        scanf("\n%f", &nro);
        nroTotal = nroTotal + nro;
        if (nroMinimo>=nro) {
            nroMinimo = nro;
        }
    }
    nroTotal = nroTotal / 40;
    printf("\nPromedio: %f ,Minimo: %f\n", nroTotal, nroMinimo);
}
*/

//6. Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el
//multiplicando, el multiplicador y el producto.
/*
#include<stdio.h>
void main()
{
    int i;
    float nro, nroMulti;
    printf("Introduce un numero para recibir la tabla de multiplicar: ");
    scanf("%f", &nro);
    nroMulti = nro;
    for ( i = 0 ; i < 20 ; i++ ) {
        nro = nroMulti * ( i + 1 );
        printf("\nMultiplicando: %f, Multiplicador: %d, Producto: %f", nroMulti, i + 1, nro);
    }
}
*/
