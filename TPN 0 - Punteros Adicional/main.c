#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define DIM 12

int main() {
    mostrarMenu();
    menu();

    printf("\n\nSaliendo del programa...\n");
    return 0;
}
void mostrarMenu() {
    printf("\n\nPunteros Simples:");
    printf("\n1. Intercambiar Valores: Escribe un programa que intercambie los valores de dos variables utilizando punteros.");
    printf("\n2. Suma de Elementos: Calcula la suma de los elementos de un arreglo usando punteros.");
    printf("\n3. Cadena en Mayusculas: Convierte una cadena de caracteres a mayusculas utilizando punteros.");
    printf("\n4. Eliminar Numeros Pares: Elimina los numeros pares de un arreglo utilizando punteros.");
    printf("\n5. Invertir Arreglo: Invierte un arreglo utilizando punteros.");
    printf("\n6. Contar Vocales: Cuenta el numero de vocales en una cadena utilizando punteros.");
    printf("\n7. Copiar Cadena: Copia una cadena en otra utilizando punteros.");
    printf("\n8. Encontrar Minimo y Maximo: Encuentra el valor minimo y maximo en un arreglo utilizando punteros.");
    printf("\n9. Concatenar Cadenas: Concatena dos cadenas utilizando punteros.");
    printf("\n10. Buscar Caracter: Busca un caracter en una cadena utilizando punteros.");
    printf("\n\nFunciones que Devuelven un Puntero:");
    printf("\n11. Crear Arreglo Dinamico: Crea un arreglo dinamico de enteros y devuelve un puntero a el.");
    printf("\n12. Duplicar Cadena: Duplica una cadena y devuelve un puntero a la nueva cadena.");
    printf("\n13. Clonar Arreglo Dinamico: Clona un arreglo dinamico de enteros y devuelve un puntero al nuevo arreglo.");
    printf("\n14. Crear Cadena Dinamica: Crea una cadena dinamica y devuelve un puntero a ella.");
    printf("\n\nPunteros Dobles:");
    printf("\n15: Funcion para intercambiar dos valores usando punteros dobles");
    printf("\n16: Uso de punteros dobles para acceder a un arreglo");
    printf("\n17: Pasar un arreglo a una funcion usando punteros dobles");
}
void menu() {
    srand(time(NULL));
    char nroEjercicio;
    char continuar = 'c';

    while( continuar == 'c' ) {

        printf("\n\nIngrese un numero de ejercicio a ejecutar (0 para salir): ");
        fflush(stdin);
        scanf("%i", &nroEjercicio);

        switch(nroEjercicio) {
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
            //ejercicioNro10();
            break;
        case 11:
            //ejercicioNro11();
            break;
        case 12:
            //ejercicioNro12();
            break;
        case 13:
            //ejercicioNro13();
            break;
        case 14:
            //ejercicioNro14();
            break;
        case 15:
            //ejercicioNro15();
            break;
        case 16:
            //ejercicioNro16();
            break;
        case 17:
            //ejercicioNro17();
            break;
        case 0:
            continuar = 's';
            break;
        default:
            printf("\nEl numero de ejercicio ingresado no es valido.\n\n");
            break;
        }
        if ( continuar != 's' ) {
            printf("\n\nEjercicio finalizado, desea continuar ejecutando la guia? ('c' para continuar, cualquier otro caracter para salir): ");
            fflush(stdin);
            scanf("%c", &continuar);
            continuar = tolower(continuar);
        }
    }
}

void ejercicioNro1() {
    int variableInt1 = rand()%10;
    int variableInt2 = rand()%10;
    int *punterovariableInt1 = &variableInt1;
    int *punterovariableInt2 = &variableInt2;
    printf("\nEjercicio 1: \nvariableInt1: %i \nvariableInt2: %i", variableInt1, variableInt2);
    printf("\nIntercambiando variables...");
    intercambiarInt(punterovariableInt1, punterovariableInt2);
    printf("\nvariableInt1: %i \nvariableInt2: %i", variableInt1, variableInt2);
}
void intercambiarInt(int *punteroInt1, int *punteroInt2) {
    int auxiliarInt = 0;
    auxiliarInt = *punteroInt1;
    *punteroInt1 = *punteroInt2;
    *punteroInt2 = auxiliarInt;
}

void ejercicioNro2() {
    int arregloInt[DIM];
    int sumaArregloInt = 0;
    printf("\nEjercicio 2:");
    printf("\nGenerando arreglo de enteros...");
    generarArregloInt(arregloInt, DIM);
    mostrarArregloInt(arregloInt, DIM);
    printf("\nSumando los elementos del arreglo...");
    sumaArregloInt = sumatoriaArregloInt(arregloInt, DIM);
    printf("\n\nsumaArregloInt: %i", sumaArregloInt);
}
void generarArregloInt(int *punteroArregloInt, int validosArregloInt) {
    for( int i = 0 ; i < validosArregloInt ; i++ ) punteroArregloInt[i] = rand()%10;
}
void mostrarArregloInt(int *punteroArregloInt, int validosArregloInt) {
    printf("\n------------------------------------------------------------\n");
    for( int i = 0 ; i < validosArregloInt ; i++ ) printf("|%i| ", punteroArregloInt[i]);
    printf("\n------------------------------------------------------------\n");
}
int sumatoriaArregloInt(int *punteroArregloInt, int validosArregloInt) {
    int suma = 0;
    for( int i = 0 ; i < validosArregloInt ; i++ ) suma += punteroArregloInt[i];
    return suma;
}

void ejercicioNro3() {
    char arregloChar[] = {"caDenA dE CaRacTeREs"};
    printf("\nEjercicio 3:");
    printf("\narregloChar: %s", arregloChar);
    printf("\nConvirtiendo caracteres del arreglo a mayusculas...");
    pasarAMayusculas(arregloChar);
    printf("\narregloChar: %s", arregloChar);
}
void pasarAMayusculas(char *punteroArregloChar) {
    while( *punteroArregloChar ) {
        *punteroArregloChar = toupper(*punteroArregloChar);
        *punteroArregloChar++;
    }
}

void ejercicioNro4() {
    int arregloInt[DIM];
    int validosArregloInt = 0;
    printf("\nEjercicio 4:");
    printf("\nGenerando arreglo de enteros...");
    generarArregloInt(arregloInt, DIM);
    mostrarArregloInt(arregloInt, DIM);
    printf("\nEliminando numeros pares del arreglo...");
    validosArregloInt = eliminarParesArregloInt(arregloInt, DIM);
    mostrarArregloInt(arregloInt, validosArregloInt);
}
int eliminarParesArregloInt(int *punteroArregloInt, int validosArregloInt) {
    int nuevoValidos = 0;
    int *punteroArregloImparesInt = punteroArregloInt;
    for( int i = 0 ; i < validosArregloInt ; i++ ) {
        if( *punteroArregloInt % 2 == 1 ) {
            *punteroArregloImparesInt = *punteroArregloInt;
            punteroArregloImparesInt++;
            nuevoValidos++;
        }
        punteroArregloInt++;
    }
    return nuevoValidos;
}

void ejercicioNro5() {
    int arregloInt[DIM];
    printf("\nEjercicio 5:");
    printf("\nGenerando arreglo de enteros...");
    generarArregloInt(arregloInt, DIM);
    mostrarArregloInt(arregloInt, DIM);
    printf("\nInvirtiendo valores del arreglo...");
    invertirArregloInt(arregloInt, DIM);
    mostrarArregloInt(arregloInt, DIM);
}
void invertirArregloInt(int *punteroArregloInt, int validosArregloInt) {
    int *punteroInvertidoArregloInt = punteroArregloInt + validosArregloInt - 1;
    while( punteroArregloInt < punteroInvertidoArregloInt ) {
        intercambiarInt(punteroArregloInt, punteroInvertidoArregloInt);
        punteroArregloInt++;
        punteroInvertidoArregloInt--;
    }
}

void ejercicioNro6() {
    char arregloChar[] = {"Cadena de caracteres."};
    int cantidadVocales;
    printf("\nEjercicio 6:");
    printf("\narregloChar: %s", arregloChar);
    printf("\nContando el numero de vocales dentro de la cadena...");
    cantidadVocales = contarVocalesArregloChar(arregloChar);
    printf("\nCantidad de vocales: %i", cantidadVocales);
}
int contarVocalesArregloChar(char *punteroArregloChar) {
    int vocales = 0;
    char auxChar;
    while( *punteroArregloChar ) {
        auxChar = tolower(*punteroArregloChar);
        if( auxChar == 'a' || auxChar == 'e' || auxChar == 'i' || auxChar == 'o' || auxChar == 'u' ) vocales++;
        punteroArregloChar++;
    }
    return vocales;
}

void ejercicioNro7() {
    char arregloChar1[] = {"Cadena de caracteres de ejemplo."};
    char arregloChar2[DIM*5];
    printf("\nEjercicio 7:");
    printf("\narregloChar1: %s", arregloChar1);
    printf("\nCopiando cadena de caracteres...");
    copiarArregloChar(arregloChar2, arregloChar1);
    printf("\narregloChar2: %s", arregloChar2);
}
void copiarArregloChar(char *punteroArregloCharDestino, char *punteroArregloCharOrigen) {
    while( *punteroArregloCharOrigen ) {
        *punteroArregloCharDestino = *punteroArregloCharOrigen;
        punteroArregloCharOrigen++;
        punteroArregloCharDestino++;
    }
    *punteroArregloCharDestino = '\0';
}

void ejercicioNro8() {
    int arregloInt[DIM];
    printf("\nEjercicio 8:");
    printf("\nGenerando arreglo de enteros...");
    generarArregloInt(arregloInt, DIM);
    mostrarArregloInt(arregloInt, DIM);
    printf("\nEncontrando valor minimo y maximo...");
    int minimo = minimoArregloInt(arregloInt, DIM);
    int maximo = maximoArregloInt(arregloInt, DIM);
    printf("\nminimo: %i", minimo);
    printf("\nmaximo: %i", maximo);
}
int minimoArregloInt(int *punteroArregloInt, int validosArregloInt) {
    int minimo = *punteroArregloInt;
    for( int i = 0 ; i < validosArregloInt ; i++ ) {
        if( minimo > *punteroArregloInt ) minimo = *punteroArregloInt;
        punteroArregloInt++;
    }
    return minimo;
}
int maximoArregloInt(int *punteroArregloInt, int validosArregloInt) {
    int maximo = *punteroArregloInt;
    for( int i = 0 ; i < validosArregloInt ; i++ ) {
        if( maximo < *punteroArregloInt ) maximo = *punteroArregloInt;
        punteroArregloInt++;
    }
    return maximo;
}

void ejercicioNro9() { ///CONSULTAR
    char arregloChar1[] = {"Cadena de caract"};
    char arregloChar2[] = {"eres a concatenar"};
    char arregloCharConcatenado[DIM*5];
    printf("\nEjercicio 8:");
    printf("\narregloChar1: '%s'", arregloChar1);
    printf("\narregloChar2: '%s'", arregloChar2);
    printf("\nConcatenando las cadenas de caracteres...");
    concatenarCadenasCaracteres(arregloCharConcatenado, arregloChar1);
    concatenarCadenasCaracteres(arregloCharConcatenado, arregloChar2);
    printf("\narregloCharConcatenado: '%s'", arregloCharConcatenado);
}
void concatenarCadenasCaracteres(int *punteroCadenaDestino, int *punteroCadenaOrigen) {
    while( *punteroCadenaDestino ) punteroCadenaDestino++; //no funciona en la 2da llamada?
    while( *punteroCadenaOrigen ) {
        *punteroCadenaDestino = *punteroCadenaOrigen;
        punteroCadenaDestino++;
        punteroCadenaOrigen++;
    }
    *punteroCadenaDestino = '\0';
}

void ejercicioNro10() {
    char arregloChar[] = {"Cadena de caracteres."};

}
