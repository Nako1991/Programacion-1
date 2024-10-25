#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 30

//PROTOTIPADO
void menuTPN4dot1();
void mostrarTPN4dot1();
//Ejercicio 1
void ejercicioNro1(int [][DIM], int * , int * );
void cargarMatrizInt(int [][DIM], int * , int * );
int cargarM(int * );
int cargarN(int * );
void cargarMatrizIntMxN(int [][DIM], int , int );
//Ejercicio 2
void ejercicioNro2(int [][DIM], int , int );
void mostrarMatrizInt(int [][DIM], int , int );
int encontrarMaximosDigitos(int [][DIM], int , int );
int buscarCantidadDigitos(int );
//Ejercicio 3
void ejercicioNro3(int [][DIM], int * , int * );
void generarMatrizInt(int [][DIM], int * , int * );
int generarOrden();
void generarMatrizIntMxN(int [][DIM], int , int );
//Ejercicio 4
void ejercicioNro4(int [][DIM], int , int );
int sumarElementosMatrizInt(int [][DIM], int , int );
//Ejercicio 5
void ejercicioNro5(int [][DIM], int , int );
float calcularPromedioMatrizInt(int [][DIM], int , int );
//Ejercicio 6
void ejercicioNro6(int [][DIM], int , int );
int cargarElemento();
int buscarElementoMatrizInt(int [][DIM], int , int , int );
//Ejercicio 7
void ejercicioNro7(char [], char [][DIM], int * , int * );
int cargarStrings(char []);
int contarPalabrasEnString(char []);
void convertirStringAMatriz(char [], char [][DIM], int * , int * );
//Ejercicio 8
void ejercicioNro8(char [][DIM], int * , int * );
void mostrarMatrizChar(char [][DIM], int , int );
void mostrarStringArray(char [][DIM], int );
//Ejercicio 9
void ejercicioNro9(char [][DIM], int );
int buscarStringEnArray(char [][DIM], int , char []);
//Ejercicio 10
void ejercicioNro10(char [][DIM], int * , int * );
int generarArrayStrings(char [][DIM]);
void generarString(char []);
int buscarPalabraMasLarga(char [][DIM], int );
//Ejercicio 11
void ejercicioNro11(char [][DIM], int );
void ordenarMatrizStringsXSeleccion(char [][DIM], int );
void intercambiarStrings(char [], char []);
int buscarPosicionMenorString(char [][DIM], int , int );
void ordenarMatrizStringsXInsercion(char [][DIM], int );

//MAIN
int main()
{
    //MENU
    menuTPN4dot1();

    printf("\n\nSaliendo del programa...\n");
    return 0;
}

//AUX
void menuTPN4dot1()
{
    //DECLARACIONES
    srand(time(NULL));
    int nroEjercicio = 0;
    char continuar = 's';
    //Ejercicio 1
    int matrizInt[DIM][DIM];
    int m = 0, n = 0;
    //Ejercicio 7
    char frase[DIM*10]; //frase de 300 letras (incluyendo espacios)
    char matrizStrings[DIM][DIM];
    int m2 = 0, n2 = 0;

    //MENU
    do
    {
        mostrarTPN4dot1();
        printf("\n\nIngrese el numero de ejercicio que desea ejecutar ('0' para salir): ");
        fflush(stdin);
        scanf("%i", &nroEjercicio);
        switch( nroEjercicio )
        {
        case 1: //Ejercicio 1
            ejercicioNro1(matrizInt, &m, &n);
            break;
        case 2: //Ejercicio 2
            ejercicioNro2(matrizInt, m, n);
            break;
        case 3: //Ejercicio 3
            ejercicioNro3(matrizInt, &m, &n);
            break;
        case 4: //Ejercicio 4
            ejercicioNro4(matrizInt, m, n);
            break;
        case 5: //Ejercicio 5
            ejercicioNro5(matrizInt, m, n);
            break;
        case 6: //Ejercicio 6
            ejercicioNro6(matrizInt, m, n);
            break;
        case 7: //Ejercicio 7
            ejercicioNro7(frase, matrizStrings, &m2, &n2);
            break;
        case 8: //Ejercicio 8
            ejercicioNro8(matrizStrings, &m2, &n2);
            break;
        case 9: //Ejercicio 9
            ejercicioNro9(matrizStrings, m2);
            break;
        case 10: //Ejercicio 10
            ejercicioNro10(matrizStrings, &m2, &n2);
            break;
        case 11: //Ejercicio 11
            ejercicioNro11(matrizStrings, m2);
            break;
        case 12: //Ejercicio 12
            ejercicioNro12();
            break;
        case 13: //Ejercicio 13
            break;
        case 14: //Ejercicio 14
            break;
        case 15: //Ejercicio 15
            break;
        case 16: //Ejercicio 16
            break;
        case 17: //Ejercicio 17
            break;
        case 18: //Ejercicio 18
            break;
        case 19: //Ejercicio 19
            break;
        case 0:
            continuar = -1;
            break;
        default:
            printf("\nEl numero de ejercicio ingresado no es valido.");
            break;
        }
        if( continuar != -1 )
        {
            printf("\n\nDesea ejecutar otro ejercicio? s/n: ");
            fflush(stdin);
            scanf("%c", &continuar);
        }
    } while( continuar == 's' );
}

void mostrarTPN4dot1()
{
    printf("\n\nTrabajo Practico Nro 4.1: Matrices.");
    printf("\n\n1. Hacer una funcion que reciba como parametro una matriz de numeros enteros y permita que el usuario");
    printf("\ningrese valores al mismo por teclado. La funcion debe cargar la matriz por completo.");
    printf("\n\n2. Hacer una funcion que reciba como parametro una matriz de numeros enteros y la muestre");
    printf("\npor pantalla (en formato matricial).");
    printf("\n\n3. Hacer una funcion que reciba como parametro una matriz de numeros enteros y que cargue la misma con");
    printf("\nnumeros aleatorios (sin intervencion del usuario). La funcion debe cargar la matriz por completo.");
    printf("\n\n4. Hacer una funcion tipo int que sume el contenido total de una matriz de numeros enteros.");
    printf("\n\n5. Hacer una funcion tipo float que calcule el promedio de una matriz de numeros enteros.");
    printf("\n\n6. Hacer una funcion que determine si un elemento se encuentra dentro de una matriz de numeros enteros.");
    printf("\nLa funcion recibe la matriz y el dato a buscar.");
    printf("\n\n7. Hacer una funcion que cargue un arreglo de palabras (strings). La funcion debe retornar cuantas palabras");
    printf("\nse cargaron. (puede ser a traves del parametro como puntero)");
    printf("\n\n8. Hacer una funcion que muestre un arreglo de palabras.");
    printf("\n\n9. Hacer una funcion que determine si un string se encuentra dentro de un arreglo de strings. La funcion");
    printf("\nrecibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar.");
    printf("\nDevuelve el indice de la fila en que se encuentra, de lo contrario -1.");
    printf("\n\n10. Hacer una funcion que determine si un string se encuentra dentro de un arreglo de strings ordenado alfabeticamente.");
    printf("\nLa funcion recibe el arreglo, la cantidad de palabras que contiene y el string a buscar.");
    printf("\nDevuelve el indice de la fila en que se encuentra, de lo contrario -1");
    printf("\n\n11. Hacer una funcion (o varias) que ordene un arreglo de palabras por orden alfabetico.");
    printf("\n(Por seleccion o insercion, el que mas te guste).");
    printf("\n\n12. Hacer una funcion que retorne el determinante de una matriz de 2x2.");
    printf("\n\n13. Funcion que verifique si una matriz de 2x2 tiene inversa.");
    printf("\n\n14. Hacer una funcion que multiplique una matriz de 2x2 por una matriz de 2x5.");
    printf("\n\n15. Hacer una funcion que calcule la matriz inversa de una matriz de 2x2.");
    printf("\n\n16. Los resultados de las ultimas elecciones a Intendente en el pueblo “La Matrix” han sido los siguientes:");
    printf("\n\nDistrito    Candidato A Candidato B Candidato C Candidato D");
    printf(  "\n1           194         48          206         45");
    printf(  "\n2           180         20          320         16");
    printf(  "\n3           221         90          140         20");
    printf(  "\n4           432         51          821         14");
    printf(  "\n5           820         61          946         18");
    printf("\n\nEscribir un programa que haga las siguientes tareas:");
    printf("\n\na. Imprimir la tabla anterior con cabeceras incluidas.");
    printf("\n\nb. Calcular e imprimir el numero total de votos recibidos por cada candidato y el porcentaje total de");
    printf("\nvotos emitidos. Asi mismo, visualizar el candidato mas votado.");
    printf("\n\nc. Si algun candidato recibe mas del 50% de los votos, el programa imprimira un mensaje declarandose ganador");
    printf("\n\nd. Si algun candidato recibe menos del 50% de los votos, el programa debe imprimir el nombre de los dos");
    printf("\ncandidatos mas votados que seran los que pasen a la segunda ronda de las elecciones.");
    printf("\n\n17. Hacer una funcion que verifique si una matriz cuadrada es simetrica. (A[i][j] == A[j][i])");
    printf("\n\n18. Hacer una funcion que genere la matriz identidad.");
    printf("\n\n19. Hacer una funcion que calcule la matriz traspuesta.\n");
}

//Ejercicio 1
void ejercicioNro1(int matrizInt[][DIM], int *m, int *n)
{
    printf("\nCargando una Matriz de numeros Enteros de dimension m x n.");
    cargarMatrizInt(matrizInt, m, n);
}

void cargarMatrizInt(int matrizInt[][DIM], int *m, int *n)
{
    *m = cargarM(m);
    *n = cargarN(n);
    printf("\nCargando la matriz %i x %i...\n", *m, *n);
    cargarMatrizIntMxN(matrizInt, *m, *n);
}

int cargarM(int *m)
{
    int mValido = 0;
    while( mValido == 0 )
    {
        printf("\nIngrese la dimension 'm' (filas) de la matriz (maximo 29): ");
        fflush(stdin);
        scanf("%i", m);
        if( 0 < *m && *m < DIM )
        {
            mValido = 1;
        }
        else
        {
            printf("\nLa dimension ingresada no es valida, por favor ingrese una dimension entre 1 y 29");
        }
    }
    return *m;
}

int cargarN(int *n)
{
    int nValido = 0;
    while( nValido == 0 )
    {
        printf("\nIngrese la dimension 'n' (columnas) de la matriz (maximo 29): ");
        fflush(stdin);
        scanf("%i", n);
        if( 0 < *n && *n < DIM )
        {
            nValido = 1;
        }
        else
        {
            printf("\nLa dimension ingresada no es valida, por favor ingrese una dimension entre 1 y 29");
        }
    }
    return *n;
}

void cargarMatrizIntMxN(int matrizInt[][DIM], int m, int n)
{
    int i = 0, j = 0;
    while( i < m && i < DIM )
    {
        while( j < n && j < DIM )
        {
            printf("\nIngresar el valor del elemento m%i%i: ", i+1, j+1);
            fflush(stdin);
            scanf("%i", &matrizInt[i][j]);
            j++;
        }
        j = 0;
        i++;
    }
}

//Ejercicio 2 Adaptado para que acepte cualquier cantidad de digitos e imprima prolijo
void ejercicioNro2(int matrizInt[][DIM], int m, int n)
{
    mostrarMatrizInt(matrizInt, m, n);
}

void mostrarMatrizInt(int matrizInt[][DIM], int m, int n)
{
    int i = 0, j = 0, digitos = 0;
    digitos = encontrarMaximosDigitos(matrizInt, m, n);
    printf("\n");
    while( i < m )
    {
        printf("|");
        while( j < n)
        {
            printf(" %*i", digitos, matrizInt[i][j]); //%*i primer parametro es el espaciado, segundo parametro la variable
            j++;
        }
        printf(" |\n");
        j = 0;
        i++;
    }
}

int encontrarMaximosDigitos(int matrizInt[][DIM], int m, int n)
{
    int i = 0, j = 0, cantidadDigitos = 0, maxDigitos = 0;
    while( i < m )
    {
        while( j < n )
        {
            cantidadDigitos = buscarCantidadDigitos(matrizInt[i][j]);
            if( cantidadDigitos > maxDigitos )
            {
                maxDigitos = cantidadDigitos;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return maxDigitos;
}

// snprintf Encontrada en internet
int buscarCantidadDigitos(int numero)
{
    char digitos[12];  // Suficientemente grande para contener un entero
    int cantidadDigitos = snprintf(digitos, sizeof(digitos), "%i", numero); //snprintf devuelve la cantidad de caracteres
    return cantidadDigitos;
}

//Ejercicio 3
void ejercicioNro3(int matrizInt[][DIM], int *m, int *n)
{
    generarMatrizInt(matrizInt, m, n);
    printf("\nGenerando la matriz %i x %i...\n", *m, *n);
    mostrarMatrizInt(matrizInt, *m, *n);
}

void generarMatrizInt(int matrizInt[][DIM], int *m, int *n)
{
    *m = generarOrden();
    *n = generarOrden();
    generarMatrizIntMxN(matrizInt, *m, *n);
}

int generarOrden()
{
    int orden = rand()%3+4; //Numero random entre (4, 6) arbitrario
    return orden;
}

void generarMatrizIntMxN(int matrizInt[][DIM], int m, int n)
{
    int i = 0, j = 0;
    while( i < m && i < DIM )
    {
        while( j < n && j < DIM )
        {
            matrizInt[i][j] = rand()%21-10; //Numero random entre (-10, 10)
            //printf("\nmatrizInt[%i][%i]: %i", i, j, matrizInt[i][j]); //debug
            j++;
        }
        j = 0;
        i++;
    }
}

//Ejercicio 4
void ejercicioNro4(int matrizInt[][DIM], int m, int n)
{
    int sumaElementosMatrizInt = 0;
    printf("\nSumando todos los elementos de la matriz...\n");
    sumaElementosMatrizInt = sumarElementosMatrizInt(matrizInt, m, n);
    printf("\nLa suma de sus elementos es de: %i...\n", sumaElementosMatrizInt);
}

int sumarElementosMatrizInt(int matrizInt[][DIM], int m, int n)
{
    int i = 0, j = 0, sumaElementos = 0;
    while( i < m && i < DIM )
    {
        while( j < n && j < DIM )
        {
            sumaElementos = sumaElementos + matrizInt[i][j]; //Numero random entre (-10, 10)
            j++;
        }
        j = 0;
        i++;
    }
    return sumaElementos;
}

//Ejercicio 5
void ejercicioNro5(int matrizInt[][DIM], int m, int n)
{
    float promedioMatrizInt = 0;
    printf("\nCalculando el promedio de todos los elementos de la matriz...\n");
    promedioMatrizInt = calcularPromedioMatrizInt(matrizInt, m, n);
    printf("\nEl promedio de sus elementos es de: %.2f...\n", promedioMatrizInt);
}

float calcularPromedioMatrizInt(int matrizInt[][DIM], int m, int n)
{
    int i = 0, j = 0, nroElementos = 0, sumaElementos = 0; //i: filas, j: columnas
    float promedio = 0;
    while( i < m && i < DIM )
    {
        while( j < n && j < DIM )
        {
            sumaElementos = sumaElementos + matrizInt[i][j]; //Numero random entre (-10, 10)
            j++;
            nroElementos++;
        }
        j = 0;
        i++;
    }
    promedio = (float)sumaElementos / nroElementos;
    //printf("\npromedio: %f, sumaElementos: %i, nroElementos: %i", promedio, sumaElementos, nroElementos); //debug
    return promedio;
}

//Ejercicio 6
void ejercicioNro6(int matrizInt[][DIM], int m, int n)
{
    int elementoABuscar = 0;
    int elementoIntEncontrado = 0;
    elementoABuscar = cargarElemento();
    elementoIntEncontrado = buscarElementoMatrizInt(matrizInt, m, n, elementoABuscar);
    mostrarMatrizInt(matrizInt, m, n);
    if( elementoIntEncontrado == 0 )
        printf("\nEl elemento %i no se encuentra dentro de la matriz.", elementoABuscar);
    else
        printf("\nEl elemento %i se encuentra dentro de la matriz.", elementoABuscar);
}

int cargarElemento()
{
    int elemento;
    printf("\nPor favor ingrese un numero entero a buscar dentro de la matriz: ");
    fflush(stdin);
    scanf("%i", &elemento);
    return elemento;
}

int buscarElementoMatrizInt(int matrizInt[][DIM], int m, int n, int elemento)
{
    int i = 0, j = 0, elementoEncontrado = 0;
    while( i < m && i < DIM )
    {
        while( j < n && j < DIM )
        {
            if( elemento == matrizInt[i][j] )
            {
                elementoEncontrado = 1;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return elementoEncontrado;
}

//Ejercicio 7
void ejercicioNro7(char frase[], char matrizStrings[][DIM], int *m2, int *n2)
{
    int nroPalabras = 0;
    nroPalabras = cargarStrings(frase);
    printf("\nEl numero de palabras del string es de: %i", nroPalabras);
    convertirStringAMatriz(frase, matrizStrings, m2, n2);
}

int cargarStrings(char frase[])
{
    int nroPalabras = 0;
    printf("\nIngrese una frase para que sea almacenada: ");
    fflush(stdin);
    gets(frase);
    nroPalabras = contarPalabrasEnString(frase);
    return nroPalabras;
}

int contarPalabrasEnString(char frase[])
{
    int i = 0, nroPalabras = 0;
    while( frase[i] != '\0' )
    {
        if( frase[i] != 32  && frase[i+1] == 32 && frase[i+1] != '\0' ) //32 es un espacio ' '
            nroPalabras++;
        if( frase[i] == 32 && frase[i+1] == '\0' ) // arregla un bug que agregaba una palabra cuando la frase terminaba en ' '
            nroPalabras--;
        i++;
    }
    nroPalabras++;
    return nroPalabras;
}

void convertirStringAMatriz(char frase[], char matrizStrings[][DIM], int *nroPalabras, int *maxLetras)
{
    int i = 0, j = 0; //i: recorre cada char del string, j: recorre cada char de cada palabra
    char bufferPalabra[DIM]; //palabra a guardar
    int contadorPalabras = 0;
    while( frase[i] != '\0' )
    {
        if( frase[i] != 32 )
        {
            bufferPalabra[j] = frase[i];
            if( frase[i+1] == 32 && frase[i+1] != '\0' )
            {
                bufferPalabra[j+1] = '\0';
                strcpy(matrizStrings[contadorPalabras], bufferPalabra);
                contadorPalabras++;
            }
            else if( frase[i+1] == '\0' )
            {
                bufferPalabra[j+1] = '\0';
                strcpy(matrizStrings[contadorPalabras], bufferPalabra);
                contadorPalabras++;
            }
            if( *maxLetras <= j )
            {
                *maxLetras = j + 1; //+1 por el caracter de escape
            }
            j++;
        }
        else if ( frase[i] == 32 )
        {
            j = 0;
        }
        i++;
    }
    *nroPalabras = contarPalabrasEnString(frase);
}

//Ejercicio 8
void ejercicioNro8(char matrizStrings[][DIM], int *m2, int *n2)
{
    printf("\nMatriz de strings: \n");
    mostrarMatrizChar(matrizStrings, *m2, *n2);
    mostrarStringArray(matrizStrings, *m2);
}

void mostrarMatrizChar(char matrizStrings[][DIM], int nroPalabras, int maxLetras)
{
    int i = 0, j = 0;
    printf("\n");
    while( i < nroPalabras && i < DIM )
    {
        printf("|");
        while( j < maxLetras && j < DIM && matrizStrings[i][j] != '\0' )
        {
            printf(" %c", matrizStrings[i][j]);
            j++;
        }
        printf(" |\n");
        j = 0;
        i++;
    }
}

void mostrarStringArray(char matrizStrings[][DIM], int validosString)
{
    int i = 0;
    printf("\nArreglo de Strings: \n");
    while( i < DIM && i < validosString )
    {
        printf("\n%i. %s", i+1, matrizStrings[i]);
        i++;
    }
}

//Ejercicio 9
void ejercicioNro9(char matrizStrings[][DIM], int nroPalabras)
{
    char palabraABuscar[DIM];
    int palabraEncontrada = 0;
    printf("\n\nIngrese la palabra que desea buscar dentro del array: ");
    fflush(stdin);
    gets(palabraABuscar);
    palabraEncontrada = buscarStringEnArray(matrizStrings, nroPalabras, palabraABuscar);
    if( palabraEncontrada == -1 )
        printf("\nLa palabra '%s' no se encuentra dentro de la matriz.", palabraABuscar);
    else
        printf("\nLa palabra '%s' se encuentra dentro de la matriz en la posicion: %i.", palabraABuscar, palabraEncontrada+1);
}

int buscarStringEnArray(char matrizStrings[][DIM], int validosString, char palabra[])
{
    int palabraEncontrada = -1, i = 0;
    while( i < DIM && i < validosString )
    {
        if( strcmp(matrizStrings[i], palabra) == 0 )
        {
            palabraEncontrada = i;
        }
        i++;
    }
    return palabraEncontrada;
}

//Ejercicio 10
void ejercicioNro10(char matrizStrings[][DIM], int *nroPalabras, int *maxLetras)
{
    *nroPalabras = generarArrayStrings(matrizStrings);
    *maxLetras = buscarPalabraMasLarga(matrizStrings, *nroPalabras + 1); //+1 por el caracter de escape
    mostrarStringArray(matrizStrings, *nroPalabras);
}

int generarArrayStrings(char matrizStrings[][DIM])
{
    int i = 0;
    int nroPalabras = rand()%3+6; //genera un numero de palabras de 6 a 8
    char stringGenerado[DIM];
    while( i < DIM && i < nroPalabras )
    {
        generarString(stringGenerado);
        strcpy(matrizStrings[i], stringGenerado);
        i++;
    }
    return nroPalabras;
}

void generarString(char stringGenerado[])
{
    int i = 0;
    int nroLetras = rand()%12+4; //genera entre 3 y 15 letras para una palabra
    while( i < DIM && i < nroLetras-1 ) //-1 para añadir el caracter de finalizacion
    {
        stringGenerado[i] = rand()%25+97;
        i++;
    }
    stringGenerado[i] = '\0';
}

int buscarPalabraMasLarga(char matrizStrings[][DIM], int nroPalabras)
{
    int i = 0, j = 0;
    int maxLetras = 0;
    while( i < DIM && i < nroPalabras )
    {
        while( matrizStrings[i][j] != '\0' )
        {
            j++;
            if( maxLetras <= j) maxLetras = j; //busca la palabra con mayor cantidad de letras
        }
        j = 0;
        i++;
    }
    return maxLetras;
}

//Ejercicio 11
void ejercicioNro11(char matrizStrings[][DIM], int nroPalabras)
{
    printf("\nOrdenando matriz de strings por orden alfabetico...\n");
    //ordenarMatrizStringsXSeleccion(matrizStrings, nroPalabras);
    ordenarMatrizStringsXInsercion(matrizStrings, nroPalabras);
    mostrarStringArray(matrizStrings, nroPalabras);
}

void ordenarMatrizStringsXSeleccion(char matrizStrings[][DIM], int nroPalabras)
{
    int i = 0;
    int posicionMenor = 0;
    while( i < DIM && i < nroPalabras )
    {
        posicionMenor = buscarPosicionMenorString(matrizStrings, nroPalabras, i);
        intercambiarStrings(matrizStrings[i], matrizStrings[posicionMenor]);
        i++;
    }
}

void intercambiarStrings(char string1[], char string2[])
{
    char aux[DIM];
    strcpy(aux, string1);
    strcpy(string1, string2);
    strcpy(string2, aux);
}

int buscarPosicionMenorString(char matrizStrings[][DIM], int nroPalabras, int inicio)
{
    int i = inicio;
    int posicionMenor = 0;
    char menor[DIM];
    strcpy(menor, matrizStrings[i]);
    while( i < DIM && i < nroPalabras )
    {
        if( strcmp(matrizStrings[i], menor) <= 0 )
        {
            strcpy(menor, matrizStrings[i]);
            posicionMenor = i;
        }
        i++;
    }
    return posicionMenor;
}

void ordenarMatrizStringsXInsercion(char matrizStrings[][DIM], int nroPalabras)
{

}

void ejercicioNro12()
{
    printf("\nejercicionro12");
        int mapa1[29][23] = {
//     0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//0
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//1
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//2
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//3
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//4
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//5
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//6
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//7
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//8
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//9
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//10
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//11
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//12
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//13
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//14
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//15
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//16
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//17
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//18
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//19
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//20
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//21
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//22
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//23
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//24
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//25
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//26
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//27
    {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0} //28
    };
    mostrarMatrizInt(mapa1, 23, 29);
}

/**void ordenarMatrizStringsXInsercion(char matrizStrings[][DIM], int nroPalabras)
{
    int i = 1, posicionAComparar = 1;
    char elementoAComparar[DIM];
    while( i < DIM && posicionAComparar < nroPalabras )
    {
        strcpy(elementoAComparar, matrizStrings[i]);
        printf("\nelementoAComparar: %s", elementoAComparar); //debug
        posicionAComparar = i;
        printf("\nposicionAComparar: %i", posicionAComparar); //debug
        while( posicionAComparar > 0 && strcmp(matrizStrings[posicionAComparar-1], elementoAComparar) > 0 )
        {
            printf("\nwhile 'strcmp(matrizStrings[i-1], elementoAComparar): %i'", strcmp(matrizStrings[i-1], elementoAComparar)); //debug
            printf("\nmatrizStrings[%i]: %s, matrizStrings[%i]: %s", i, matrizStrings[i], i-1, matrizStrings[i-1]); //debug
            strcpy(matrizStrings[i-1], matrizStrings[i]);
            printf("\ncopiando matrizStrings[i-1] a matrizStrings[i]..."); //debug
            posicionAComparar--;
        }
        i++;
        printf("\nposicionAComparar: %i, i: %i", posicionAComparar, i); //debug
    }
}*/

//UTN 2023 - Olmos Fernando 36383214
