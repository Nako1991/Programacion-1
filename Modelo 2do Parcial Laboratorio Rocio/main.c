#include <stdio.h>
#include <stdlib.h>
#include "strings.h"

//Constantes globales
#define DIM 30
#define ROW 3
#define COLUMN 3

//Estructuras
typedef struct {
int idSocio;
char nombreYapellido[DIM];
int categoria; //1,2,3 o 4
int edad;
}Socio;

//Prototipado
void matrizRandom(int matrix[ROW][COLUMN]); //1
void mostrarMatriz(int matrix[ROW][COLUMN]);//1
float promedioMatriz(int matrix[ROW][COLUMN]);//1

void cargarSocios(char archivoSocios[DIM]);//2
Socio cargarSocio();//2

void mostrarSocios(char archivoSocios[DIM]);//Debug
void mostrarSocio(Socio soci);//Debug

float promedioEdadesSocios(int acumulador, int cantidadSocios);//3
float edadPromedioSocios(char archivoSocios[DIM], int categoria);//3

int cantidadRegistros(char archivoSocios[DIM]);//4

void mostrarRegistroParticular(char archivoSocios[DIM], int numRegistro);//5

int pasarRegistrosArray(char archivoSocios[DIM], Socio arraySocios[DIM], int categoria);//6

void mostrarArraySocio(Socio socios[DIM], int i);//7
void mostrarArraySocios(Socio socios[DIM], int validos);//7

int busquedaPorNombre(char archivoSocios[DIM], char nombre[DIM]);//8

/*-----------------------------------------------------------------------------------------------------------*/
int main(){
//Variables
char eleccion = 's';
int ejercicio;
int flag = 0;

char archivoSocios[DIM] = {"socios.bin"};
Socio socios[DIM];
int matrix[ROW][COLUMN];

    do{

        cargarMenu();
        //Validaciones del inciso ingresado.
        do {
        printf("Elige el inciso a dirigirse ---> ");
        fflush(stdin);
        if(scanf("%i", &ejercicio) == 1) {
            flag = 1;

            if(ejercicio >= 1 && ejercicio <= 9) {
                printf("\n");
                flag = 1;
            }else {
                flag = 0;
                printf("\nNo existe el inciso. Vuelva a ingresar un numero valido (1-8): \n\n");
            }
           }else {
            flag = 0;
            printf("\nEl dato ingresado no es un numero entero. Vuelva a intentarlo: \n\n");
           }
        }while(flag == 0);

        //Inicio Switch

        switch(ejercicio) {

        case 1:;

            float promedioM;

            matrizRandom(matrix);

            printf("Cargando matriz aleatoria... \n\n");

            mostrarMatriz(matrix);

            printf("Calculando el promedio de la matriz... \n\n");

            promedioM = promedioMatriz(matrix);

            printf("El promedio de los elementos de la Matriz es de %f.2 \n\n", promedioM);

        break;

        case 2:

            cargarSocios(archivoSocios);

            mostrarSocios(archivoSocios);

        break;

        case 3:;

            int categoria;
            float promedioEdad;

            do {
            printf("Ingrese el Numero de categoria para saber el promedio de Edades (1-4) ---> ");
                if(scanf("%i", &categoria) == 1) {
                printf("\n");
                flag = 1;

                    if(categoria > 0 && categoria< 5) {
                        flag = 1;

                    }else {
                        flag = 0;
                        printf("\nLa categoria ingresada  no es valida. Vuelva a intentarlo \n\n");
                    }

                }else {
                    flag = 0;
                    printf("\nEl dato ingresado no es un numero entero. Vuelva a intentarlo \n\n");
                }
            }while(flag == 0);

            promedioEdad = edadPromedioSocios(archivoSocios, categoria);

            if(promedioEdad != 0) {
                printf("La categoria %i tiene un promedio de Edades del: %.2f porciento \n\n", categoria, promedioEdad);
            }

        break;

        case 4:;

            int registros;

            registros = cantidadRegistros(archivoSocios);

            printf("Se encuentran registrados %i socios en sistema \n\n", registros);

        break;

        case 5:;

            int numRegistro, totalRegistros;

            totalRegistros = cantidadRegistros(archivoSocios);

            do {
            printf("Ingrese el numero de registro que desea acceder: ");
            fflush(stdin);
            if(scanf("%i", &numRegistro) == 1) {
                printf("\n");
                flag = 1;

                if(numRegistro <= totalRegistros) {
                    flag = 1;
                    mostrarRegistroParticular(archivoSocios, numRegistro);
                }else {
                    flag = 0;
                    printf("El numero de registro ingresado no existe. Vuelva a intentarlo \n\n");
                }

            }else {
                flag = 0;
                printf("\nEl dato no es un numero entero. Vuelva a intentarlo \n\n");
            }
            }while(flag == 0);

        break;

        case 6:;

            int validosArray;
            do {
            printf("Ingrese el Numero de categoria para pasar a un Arreglo ---> ");
                if(scanf("%i", &categoria) == 1) {
                printf("\n");
                flag = 1;

                    if(categoria > 0 && categoria< 5) {
                        flag = 1;

                    }else {
                        flag = 0;
                        printf("\nLa categoria ingresada  no es valida. Vuelva a intentarlo \n\n");
                    }

                }else {
                    flag = 0;
                    printf("\nEl dato ingresado no es un numero entero. Vuelva a intentarlo \n\n");
                }
            }while(flag == 0);

            validosArray = pasarRegistrosArray(archivoSocios, socios, categoria);

            printf("Se pasaron exitosamente los datos \n\n");

        break;

        case 7:;

            do {
            printf("Ingrese el Numero de categoria para pasar a un Arreglo ---> ");
                if(scanf("%i", &categoria) == 1) {
                printf("\n");
                flag = 1;

                    if(categoria > 0 && categoria< 5) {
                        flag = 1;

                    }else {
                        flag = 0;
                        printf("\nLa categoria ingresada  no es valida. Vuelva a intentarlo \n\n");
                    }

                }else {
                    flag = 0;
                    printf("\nEl dato ingresado no es un numero entero. Vuelva a intentarlo \n\n");
                }
            }while(flag == 0);

            validosArray = pasarRegistrosArray(archivoSocios, socios, categoria);

            printf("\n\nLOS VALIDOS SON %i\n\n", validosArray);

            mostrarArraySocios(socios, validosArray);

        break;

        case 8:;

            int resultadoBusqueda;
            char busquedaNombre[DIM];

            printf("Ingrese un Nombre y Apellido para saber si existe ese Socio: ");
            fflush(stdin);
            gets(busquedaNombre);
            printf("\n");

            resultadoBusqueda = busquedaPorNombre(archivoSocios, busquedaNombre);

            if(resultadoBusqueda < 0) {
                printf("No se encontraba ese nombre asociado a un socio \n\n");
                printf("Retorno: %i \n\n", resultadoBusqueda);
            }else {
                printf("El idSocio es: %i \n\n", resultadoBusqueda);
            }

        break;


        case 9:

            mostrarSocios(archivoSocios);

        break;


        }

        do {
        printf("Pulse 's' para volver al menu ---> ");
        fflush(stdin);
        if(scanf("%c", &eleccion) == 1) {
            printf("\n");
            flag = 1;
        }else {
            flag = 0;
            printf("\nNo has ingresado un caracter. Vuelva a intentarlo: \n\n");
        }
        }while(flag == 0);

    }while(eleccion == 's');

}
/*-----------------------------------------------------------------------------------------------------------*/
//FUNCIONES
void cargarMenu() {
    printf("1)Hacer una funcion que reciba por parametro una matriz cargada con numeros enteros y retorne el promedio de los mismos.\n\n");
    printf("2)Hacer una funcion que cargue un archivo con registros de tipo Socio. El usuario puede cargar tantos registros como desee. Verificar si existe o no previamente el archivo para no destruirlo. En caso de que existe agregar elementos al final para no sobreescribir lo cargado previamente.\n\n");
    printf("3)Hacer una funcion que calcule utilizando el archivo cargado previamente, la edad promedio de todos los socios de una determinada categoria. La categoria se envia por parametro.\n\n");
    printf("4)Hacer una funcion que retorne la cantidad de archivo de Socios. No debe recorrerlo por completo para contar los registros.\n\n");
    printf("5)Hacer una funcion que recibe por parametro el nombre del archivo y un numero de registro (Pos del archivo). La funcion debe mostrar por pantalla los datos del socio almacenado en esa posicion. Debe verificar que la cantidad de registros almacenados en el archivo sea mayor al numero ingresado (Osea no ir mas alla de los limites del archivo. Se debe invocar a la funcion anterior).\n\n");
    printf("6)Hacer una funcion que pase desde el archivo a un arreglo de socios, todos los socios de una determinada categoria. La funcion recibe por parametro toda la informacion necesaria para trabajar. La funcion debe retornar la cantidad de  registros copiados al arreglo.\n\n");
    printf("7)Hacer una funcion que muestre el arreglo de socios por pantalla. Modularizar.\n\n");
    printf("8)Hacer una funcion que reciba por parametro un nombre (string) y lo busque dentro del archivo de socios. En caso de encontrarlo retornar idSocio, de lo contrario retornar -1.\n\n");
    printf("9)Mostrar Archivo Completo.\n\n");
}

void matrizRandom(int matrix[ROW][COLUMN]) {

    srand(time(NULL));
    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {

            matrix[i][j] = rand()% 100 + 1;
        }
    }
}

void mostrarMatriz(int matrix[ROW][COLUMN]) {

    for(int i = 0; i < ROW; i++) {
            printf("\n");
        for(int j = 0; j < COLUMN; j++) {

            printf("|%i| ", matrix[i][j]);
        }
    }
    printf("\n \n");
}

float promedioMatriz(int matrix[ROW][COLUMN]) {

    int acumulador = 0;
    float promedio;

    for(int i = 0; i < ROW; i++) {

        for(int j = 0; j < COLUMN; j++) {

            acumulador = acumulador + matrix[i][j];

        }
    }

    promedio = acumulador / (ROW * COLUMN);

    return promedio;
}

void cargarSocios(char archivoSocios[DIM]) {

    int flag = 0;
    Socio nuevoSocio;
    char eleccion = 's';

    FILE *archivo;
    archivo = fopen(archivoSocios, "ab");

    if(archivo != NULL) {

    do{
        nuevoSocio =  cargarSocio();
        fwrite(&nuevoSocio, sizeof(Socio), 1, archivo);

        printf("Pulse 's' si desea registrar otro Socio --> ");
        fflush(stdin);
        scanf("%c", &eleccion);
        printf("\n");

        }while(eleccion == 's');

        fclose(archivo);
    }else {
        printf("Error al abrir el archivo \n\n");//debug
    }
}

Socio cargarSocio() {

    int flag = 0;

    Socio nuevoSocio;

    printf("Ingrese su Nombre y Apellido: ");
    fflush(stdin);
    gets(nuevoSocio.nombreYapellido);
    printf("\n");

    printf("Ingrese su Numero de Socio: ");
    fflush(stdin);
    scanf("%i", &nuevoSocio.idSocio);
    printf("\n");

    //INICIO VERIFICACIÓN
    do {
    printf("Ingrese su Categoria (1-4): ");
    fflush(stdin);

    if(scanf("%i", &nuevoSocio.categoria) == 1) {
        printf("\n");
        flag = 1;

        if(nuevoSocio.categoria > 0 && nuevoSocio.categoria < 5) {
            flag = 1;

        }else {
            flag = 0;
            printf("\nLa categoria ingresada  no es valida. Vuelva a intentarlo \n\n");
        }

    }else {
        flag = 0;
        printf("\nEl dato ingresado no es un numero entero. Vuelva a intentarlo \n\n");
    }
    }while(flag == 0);
    //FIN VERIFICACIÓN

    printf("Ingrese su edad: ");
    fflush(stdin);
    scanf("%i", &nuevoSocio.edad);
    printf("\n");

    return nuevoSocio;
}

void mostrarSocios(char archivoSocios[DIM]) {

    Socio soci;
    FILE *archivo;

    archivo = fopen(archivoSocios, "rb");

    if(archivo != NULL){

        while(!feof(archivo)) {

            fread(&soci, sizeof(Socio), 1, archivo);

            if(!feof(archivo)) {

                mostrarSocio(soci);

            }

        }
    fclose(archivo);

    }else {
        printf("Error al abrir el archivo \n\n");//debug
    }
}

void mostrarSocio(Socio soci) {

    printf("\n-----------------------------------------------------------\n");
    printf("Nombre y Apellido --> |%s| \n\n", soci.nombreYapellido);
    printf("Numero de Socio --> |%i| \n\n", soci.idSocio);
    printf("Numero de Categoria --> |%i| \n\n", soci.categoria);
    printf("Edad --> |%i| \n\n", soci.edad);
    printf("-----------------------------------------------------------\n");

}

float edadPromedioSocios(char archivoSocios[DIM], int categoria) {

    float promedioEdadSocios;
    int acumulador = 0;
    int i = 0;

    Socio soci;

    FILE *archivo;
    archivo = fopen(archivoSocios, "rb");

    if(archivo != NULL) {


        while(!feof(archivo)) {

        fread(&soci, sizeof(Socio), 1, archivo);

        if(soci.categoria == categoria) {

        acumulador = acumulador + soci.edad;
        i++;
            }else {
            printf("No hay socios inscriptos en esa categoria \n\n");
            return;
            }
        }

        promedioEdadSocios = promedioEdadesSocios(acumulador, i);


    fclose(archivo);
    }else {
        printf("Error al abrir el archivo \n\n"); //debug
    }

    return promedioEdadSocios;
}

float promedioEdadesSocios(int acumulador, int cantidadSocios) {

    float promedio = acumulador / cantidadSocios;

    return promedio;
}

int cantidadRegistros(char archivoSocios[DIM]) {

    int registros;
    Socio soci;
    FILE *archivo;
    archivo = fopen(archivoSocios, "rb");

    if(archivo != NULL) {

    fseek(archivo, 0, SEEK_END);

    registros = ftell(archivo) / sizeof(Socio);


    fclose(archivo);
    }else {
        printf("Error al abrir el archivo \n\n"); //debug
    }
    return registros;
}

void mostrarRegistroParticular(char archivoSocios[DIM], int numRegistro) {
Socio soci;
FILE *archivo;
archivo = fopen(archivoSocios, "rb");

if(archivo != NULL) {

fseek(archivo, sizeof(Socio) * (numRegistro -1), SEEK_SET);
fread(&soci, sizeof(Socio), 1, archivo);

mostrarSocio(soci);

fclose(archivo);
}
}

int pasarRegistrosArray(char archivoSocios[DIM], Socio arraySocios[DIM], int categoria) {

int i = 0;
Socio soci;

FILE *archivo;
archivo = fopen(archivoSocios, "rb");

    if(archivo != NULL) {

        while(!feof(archivo)) {

        fread(&soci, sizeof(Socio), 1, archivo);

            if(soci.categoria == categoria) {
            copiarSocios(arraySocios, i, soci);
            i++;
                }
            }

    fclose(archivo);
    }else {
        printf("Error al abrir el archivo \n\n");
    }
    return i;
}

void copiarSocios(Socio socios[DIM], int pos, Socio soci) {

    strcpy(socios[pos].nombreYapellido, soci.nombreYapellido);
    socios[pos].idSocio = soci.idSocio;
    socios[pos].categoria = soci.categoria;
    socios[pos].edad = soci.edad;
}

void mostrarArraySocios(Socio socios[DIM], int validos) {

    for(int i = 0; i < validos; i++) {

        mostrarArraySocio(socios, i);

    }
}

void mostrarArraySocio(Socio socios[DIM], int i){
printf("\n -----------------------------------------------------------------------\n");
printf("Nombre y Apellido --> |%s| \n\n", socios[i].nombreYapellido);
printf("Numero de Socio --> |%i| \n\n", socios[i].idSocio);
printf("Numero de Categoria --> |%i| \n\n", socios[i].categoria );
printf("Edad --> |%i|\n\n", socios[i].edad );
printf("-----------------------------------------------------------------------\n");

}

int busquedaPorNombre(char archivoSocios[DIM], char nombre[DIM]) {

Socio soci;
int idSocio = -1; //Variable retornable
FILE *archivo;
archivo = fopen(archivoSocios, "rb");

    if(archivo != NULL) {

        while(!feof(archivo)) {

            fread(&soci, sizeof(Socio), 1, archivo);

            if(!feof(archivo)) {

//                printf("Nombre a Buscar|%s| \n\n", nombre); //Debug
//
//                printf("Nombre de Socio|%s| \n\n", soci.nombreYapellido); //Debug


               if(strcmp(soci.nombreYapellido, nombre) == 0) {

                idSocio = soci.idSocio;
                        }
                    }
                }

    fclose(archivo);
    }else {
        printf("Error al abrir el archivo \n\n");
    }
return idSocio;
}
