//UTN – FR Mar del Plata - Técnico Universitario en Programación
//Programación I y Laboratorio I
//1. Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.
//2. Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.
//3. Diseñe una función que reciba un número entero N y realice la suma de los números
//enteros positivos menores que N y lo retorne. N es un dato ingresado por el usuario en
//el main.
//4. Desarrollar una función que muestre la tabla de multiplicar de un número entero recibido por
//parámetro.
//5. Realice una pequeña calculadora, utilizando funciones (una función de suma, una de
//multiplicación, una de resta, una de división…)
//6. Realizar una función que reciba un número positivo entero por parámetro por referencia, y
//cambie su signo a negativo.
//7. Realizar una función que reciba dos números enteros por parámetro por referencia y cargue
//sus valores el usuario dentro de la función.

#include <stdio.h>
#include <stdlib.h>

//Declaracion de Funciones
int randCien();
int minMaxNum(int, int, int);
int sumatoria(int);
int tablaMultiplicar(int);
int calculadora();
int sumaNum();
int restaNum();
int multiplicacionNum();
double divisionNum(double, double);
int invertirSigno(int);
int modificarValorNumero(int, int);

int main()
{
    int off = -1;
    int seleccionMenu;
    int numero1, numero2;
    printf("\n\nTrabajo Practico Numero 3 - Funciones bis");
    do //loop del menu
    {
        printf("\nMenu de opciones");
        printf("\n1. Genera un numero alreatorio entre 0 y 100");
        printf("\n2. Ingresa 3 valores, encuentra el valor minimo y el maximo entre ellos");
        printf("\n3. Suma todos los valores entre 0 y el anterior a un numero entero");
        printf("\n4. Tabla de multiplicar de un numero entero");
        printf("\n5. Calculadora");
        printf("\n6. Recibe un numero positivo entero y lo invierte");
        printf("\n7. Modifica dos valores ingresador por parametro");
        printf("\nIngrese la opcion de menu que desea utilizar (numeros del 1 al ~): ");
        scanf("%d", &seleccionMenu);
        switch(seleccionMenu) //check de opcion elegida
        {
        case 1:
            printf("\nNumero random entre 0 y 100: %d", randCien());
            printf("\nVolviendo al menu...");
            break;
        case 2:
            minMaxNum (7, -5, 0);
            printf("\nVolviendo al menu...");
            break;
        case 3:
            printf("\nIngrese un valor entero positivo: ");
            scanf("%d", &numero1);
            printf("\nSumatoria: %d", sumatoria(numero1));
            printf("\nVolviendo al menu...");
            break;
        case 4:
            printf("\nIngrese un valor entero: ");
            scanf("%d", &numero1);
            tablaMultiplicar(numero1);
            printf("\nVolviendo al menu...");
            break;
        case 5:
            calculadora();
            printf("\nVolviendo al menu...");
            break;
        case 6:
            printf("\nIngrese un valor entero positivo: ");
            scanf("%d", &numero1);
            printf("\nEl nro con el signo invertido es: %d", invertirSigno(numero1));
            printf("\nVolviendo al menu...");
            break;
        case 7:
            printf("\nIngrese un valor entero positivo para el primer numero: ");
            scanf("%d", &numero1);
            printf("\nIngrese un valor entero positivo para el segundo numero: ");
            scanf("%d", &numero2);
            modificarValorNumero(numero1, numero2);
            printf("\nVolviendo al menu...");
            break;
        default: //si la seleccion no esta en el menu sale del programa
            off=1;
            printf("\nGracias por usar el programa");
            break;
        }
    }
    while (off == -1);
}

// Ejercicio 1
int randCien()
{
    int randNum;
    randNum = rand() % 101;
    return randNum;
}

//Ejercicio 2
int minMaxNum(int num1,int num2,int num3)
{
    int min, max;
    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    if (num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    if (num3 <= num2 && num3 <= num1)
    {
        min = num3;
    }
    if (num1 >= num2 && num1 >= num3)
    {
        max = num1;
    }
    if (num2 >= num1 && num2 >= num3)
    {
        max = num2;
    }
    if (num3 >= num2 && num3 >= num1)
    {
        max = num3;
    }
    printf("\nMin = %d, Max = %d", min, max);
}

//Ejercicio 3
int sumatoria(int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

//Ejercicio 4
int tablaMultiplicar(int n)
{
    int i, multiplicado;
    printf("\nTabla de Multiplicar de %d", n);
    for (i = 1; i < 21; i++)
    {
        multiplicado = n * i;
        printf("\n%d * %d = %d", n, i, multiplicado);
    }
}

//Ejercicio 5
//CALCULADORA
int calculadora()
{
    int flag = 1, num1, num2, funcionCalc;
    double num1d, num2d; //para dividir cuando el resultado no es entero
    do
    {
        printf("\n\nCALCULADORA");
        printf("\nEsta calculadora realiza una de cuatro funciones: suma, resta, multiplicacion y division");
        printf("\nSolo se pueden ingresar numeros enteros");
        printf("\nIngrese un valor entero para el primer numero: ");
        scanf("%d", &num1);
        printf("\nIngrese un valor enteropara el segundo numero: ");
        scanf("%d", &num2);
        printf("\nIngrese la funcion que desea realizar (1 para suma, 2 para resta, 3 para multiplicacion, 4 para division): ");
        scanf("%d", &funcionCalc);
        switch(funcionCalc)
        {
        case 1:
            printf("\nNumero 1: %d, Numero 2: %d, Suma", num1, num2);
            printf("\nResultado: %d", sumaNum(num1, num2));
            break;
        case 2:
            printf("\nNumero 1: %d, Numero 2: %d, Resta", num1, num2);
            printf("\nResultado: %d", restaNum(num1, num2));
            break;
        case 3:
            printf("\nNumero 1: %d, Numero 2: %d, Multiplicacion", num1, num2);
            printf("\nResultado: %d", multiplicacionNum(num1, num2));
            break;
        case 4:
            printf("\nNumero 1: %d, Numero 2: %d, Division", num1, num2);
            double num1d = (double)num1;
            double num2d = (double)num2;
            printf("\nResultado: %f", divisionNum(num1d, num2d));
            break;
        default:
            printf("\nLa funcion es incorrecta, volviendo al menu...");
            break;
        }
        printf("\nDesea utilizar la calculadora nuevamente? (ingrese 0 para salir)");
        scanf("%d", &funcionCalc);
        if (funcionCalc == 0)
        {
            flag = -1;
        }
    }
    while (flag == 1);
}

int sumaNum(int num1,int num2)
{
    int suma;
    suma = num1 + num2;
    return suma;
}

int restaNum(int num1,int num2)
{
    int resta;
    resta = num1 - num2;
    return resta;
}

int multiplicacionNum(int num1,int num2)
{
    int multiplicacion;
    multiplicacion = num1 * num2;
    return multiplicacion;
}

double divisionNum(double num1d, double num2d)
{
    double division;
    division = num1d / num2d;
    return division;
}

//Ejercicio 6
int invertirSigno(int n)
{
    if (0 <= n)
    {
        n = -n;
    }
    return n;
}

//Ejercicio 7
int modificarValorNumero(int num1,int num2)
{
    printf("\nIngrese un valor entero positivo para modificar el primer numero: ");
    scanf("%d", &num1);
    printf("\nIngrese un valor entero positivo para modificar el segundo numero: ");
    scanf("%d", &num2);
    printf("\nEl primer numero es %d, el segundo numero es %d", num1, num2);
}
