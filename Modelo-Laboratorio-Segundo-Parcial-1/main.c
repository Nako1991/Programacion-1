#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//DEFINICIONES
#define DIM 30
#define DIMMATRIZ 5

//ESTRUCTURAS
typedef struct
{
    int idSocio;
    char nombreYapellido[DIM];
    int categoria; // 1 - 4
    int edad;
} Socio;

//PROTOTIPADO
void generarMatrizInt(int [][DIMMATRIZ]);
void mostrarMatrizInt(int [][DIMMATRIZ]);
void mostrarSocio(Socio );
float promedioMatrizInt(int [][DIMMATRIZ]);
Socio cargarSocio();
int comprobarCategoria(int );
float promedioEdadSocios(char []);
int validosArchivoSocios(char []);
void posicionSocio(char []);
void mostrarSocioPosicion(char [], int );
void copiarSociosAArray(char nombreArchivoSocios[], Socio arraySocioss[]);
void copiarSocioAArray(Socio arraySocios[], int posicion, Socio socioACopiar);
void mostrarArraySocios(Socio arraySocios[], int validosSocios);
int IDSocioXNombre(char []);
int buscarIDSocioXNombre(char [], char []);

//MAIN
int main()
{
    //DECLARACIONES
    srand(time(NULL));
    //Ejercicio 1
    int matrizInt[DIMMATRIZ][DIMMATRIZ];
    float promedio = 0;
    //Ejercicio 2
    char nombreArchivoSocios[] = { "socios.bin" };
    //Ejercicio 3
    float edadPromedioSocios = 0;
    //Ejercicio 4
    int validosSocios = 0;
    //Ejercicio 5
    Socio arraySocios[DIM];
    //Ejercicio 8
    int idSocio;
    //FUNCIONES
    //Ejercicio 1
    generarMatrizInt(matrizInt);
    mostrarMatrizInt(matrizInt);
    promedio = promedioMatrizInt(matrizInt);
    printf("\npromedio: %.2f", promedio);
    //Ejercicio 2
    cargarSocios(nombreArchivoSocios);
    mostrarArchivoSocios(nombreArchivoSocios);
    //Ejercicio 3
    edadPromedioSocios = promedioEdadSocios(nombreArchivoSocios);
    printf("\nEdad promedio entre los socios: %.2f", edadPromedioSocios);
    //Ejercicio 4
    validosSocios = validosArchivoSocios(nombreArchivoSocios);
    printf("\Cantidad de socios: %i", validosSocios);
    //Ejercicio 5
    posicionSocio(nombreArchivoSocios);
    //Ejercicio 6
    copiarSociosAArray(nombreArchivoSocios, arraySocios);
    //Ejercicio 7
    mostrarArraySocios(arraySocios, validosSocios);
    //Ejercicio 8
    idSocio = IDSocioXNombre(nombreArchivoSocios);
    if( idSocio == -1 )
    {
        printf("\nEl nombre a buscar no se encuentra dentro del archivo de socios.");
    }
    else
    {
        printf("\nEl id del socio es: %i", idSocio);
    }

    return 0;
}

//FUNCIONES
//AUX
void generarMatrizInt(int matrizInt[][DIMMATRIZ])
{
    int i = 0, j = 0;
    for( i = 0 ; i < DIMMATRIZ ; i++ )
    {
        for( j = 0 ; j < DIMMATRIZ ; j++ )
        {
            matrizInt[i][j] = rand()%10;
        }
    }
}

void mostrarMatrizInt(int matrizInt[][DIMMATRIZ])
{
    int i = 0, j = 0;
    printf("\n---------------------------------------------------");
    for( i = 0 ; i < DIMMATRIZ  &&  i < 5 ; i++ )
    {
        printf("\n|");
        for( j = 0 ; j < DIMMATRIZ  &&  j < 5 ; j++ )
        {
            printf(" %i", matrizInt[i][j]);
        }
        printf(" |");
    }
    printf("\n---------------------------------------------------");
}

void mostrarSocio(Socio socioAMostrar)
{
    printf("\n---------------------------------------------------");
    printf("\nSocio");
    printf("\nIdSocio: %i", socioAMostrar.idSocio);
    printf("\nNombre y apellido: %s", socioAMostrar.nombreYapellido);
    printf("\nCategoria: %i", socioAMostrar.categoria);
    printf("\nEdad: %i", socioAMostrar.edad);
    printf("\n---------------------------------------------------");
}

void mostrarArchivoSocios(char nombreArchivoSocios[])
{
    Socio bufferSocio;
    FILE *bufferFile = fopen(nombreArchivoSocios, "rb");
    if( bufferFile == NULL )
    {
        printf("\nError, el archivo no existe.");
    }
    else
    {
        while( !feof(bufferFile) )
        {
            fread(&bufferSocio, sizeof(Socio), 1, bufferFile);
            if( !feof(bufferFile) )
            {
                mostrarSocio(bufferSocio);
            }
        }
        fclose(bufferFile);
    }
}

//EJERCICIO 1
float promedioMatrizInt(int matrizInt[][DIMMATRIZ])
{
    int i = 0, j = 0, nroElementos = 0, sumaElementos = 0;
    float promedio = 0;
    for( i = 0 ; i < DIMMATRIZ  &&  i < 5 ; i++ )
    {
        for( j = 0 ; j < DIMMATRIZ  &&  j < 5 ; j++ )
        {
            sumaElementos = sumaElementos + matrizInt[i][j];
            nroElementos++;
        }
    }
    promedio = (float)sumaElementos / nroElementos;
    return promedio;
}

//Ejercicio 2
void cargarSocios(char nombreArchivoSocios[])
{
    int i = 0;
    char continuar = 's';
    Socio bufferSocio;
    FILE *bufferFile = fopen(nombreArchivoSocios, "ab");

    if( bufferFile == NULL )
    {
        printf("\nEl archivo no existe.");
    }
    else
    {
        while( continuar == 's' )
        {
            bufferSocio = cargarSocio();
            mostrarSocio(bufferSocio);
            fwrite(&bufferSocio, sizeof(Socio), 1, bufferFile);

            printf("\n\nDesea cargar otro socio? s/n: ");
            fflush(stdin);
            scanf("%c", &continuar);
            i++;
        }
        fclose(bufferFile);
    }

}

Socio cargarSocio()
{
    Socio socioACargar;
    int categoria;
    printf("\n----------------------------------------");
    printf("\nCargando un nuevo socio:");
    printf("\nidSocio: ");
    fflush(stdin);
    scanf("%i", &socioACargar.idSocio);
    printf("\nNombre y Apellido: ");
    fflush(stdin);
    gets(socioACargar.nombreYapellido);
    printf("\nCategoria: ");
    fflush(stdin);
    scanf("%i", &socioACargar.categoria);
    while( comprobarCategoria(socioACargar.categoria) == 0 )
    {
        printf("\nCategoria ingresada no valida, por favor ingrese valores desde el 1 al 4.");
        printf("\nCategoria: ");
        fflush(stdin);
        scanf("%i", &socioACargar.categoria);
    }
    printf("\nEdad: ");
    fflush(stdin);
    scanf("%i", &socioACargar.edad);
    return socioACargar;
}

int comprobarCategoria(int categoria)
{
    int comprobado = 0;
    if( categoria > 0 && categoria < 5 ) comprobado = 1;
    return comprobado;
}

//Ejercicio 3
float promedioEdadSocios(char nombreArchivoSocios[])
{
    int sumaEdadSocios = 0, nroSocios = 0;
    float promedioEdad = 0;
    Socio bufferSocio;
    FILE *bufferFile = fopen(nombreArchivoSocios, "rb");
    if( bufferFile == NULL )
    {
        printf("\nError, el archivo no existe.");
    }
    else
    {
        while( !feof(bufferFile) )
        {
            fread(&bufferSocio, sizeof(Socio), 1, bufferFile);
            if( !feof(bufferFile) )
            {
                sumaEdadSocios = sumaEdadSocios + bufferSocio.edad;
                nroSocios++;
            }
        }
        fclose(bufferFile);
    }
    promedioEdad = (float)sumaEdadSocios / nroSocios;
    return promedioEdad;
}

//Ejercicio 4
int validosArchivoSocios(char nombreArchivoSocios[])
{
    int validos = 0;
    FILE *bufferFile = fopen(nombreArchivoSocios, "rb");
    if( bufferFile == NULL )
    {
        printf("\nError, el archivo no existe.");
    }
    else
    {
        fseek(bufferFile, 0, SEEK_END);
        validos = ftell(bufferFile) / sizeof(Socio);
        fclose(bufferFile);
    }
    return validos;
}

//Ejercicio 5
void posicionSocio(char nombreArchivoSocios[])
{
    int posicion = 0;
    printf("\nIngrese la posicion del socio que desea mostrar: ");
    fflush(stdin);
    scanf("%i", &posicion);
    if( posicion > validosArchivoSocios(nombreArchivoSocios) )
    {
        printf("\nError. La posicion ingresada es mayor a la cantidad de socios.");
    }
    else
    {
        mostrarSocioPosicion(nombreArchivoSocios, posicion);
    }
}

void mostrarSocioPosicion(char nombreArchivoSocios[], int posicion)
{
    Socio bufferSocio;
    FILE *bufferFile = fopen(nombreArchivoSocios, "rb");
    if( bufferFile == NULL )
    {
        printf("\nError, el archivo no existe.");
    }
    else
    {
        fseek(bufferFile, (posicion - 1) * sizeof(Socio), SEEK_SET);
        fread(&bufferSocio, sizeof(Socio), 1, bufferFile);
        mostrarSocio(bufferSocio);
        fclose(bufferFile);
    }
}

//Ejercicio 6
void copiarSociosAArray(char nombreArchivoSocios[], Socio arraySocioss[])
{
    int i = 0;
    Socio bufferSocio;
    FILE *bufferFile = fopen(nombreArchivoSocios, "rb");
    if( bufferFile == NULL )
    {
        printf("\nError, el archivo no existe.");
    }
    else
    {
        while( !feof(bufferFile) )
        {
            fread(&bufferSocio, sizeof(Socio), 1, bufferFile);
            if( !feof(bufferFile) )
            {
                copiarSocioAArray(arraySocioss, i, bufferSocio);
                i++;
            }
        }
        fclose(bufferFile);
    }
}

void copiarSocioAArray(Socio arraySocios[], int posicion, Socio socioACopiar)
{
    arraySocios[posicion].categoria = socioACopiar.categoria;
    arraySocios[posicion].edad = socioACopiar.edad;
    arraySocios[posicion].idSocio = socioACopiar.idSocio;
    strcpy(arraySocios[posicion].nombreYapellido, socioACopiar.nombreYapellido);
}

//Ejercicio 7
void mostrarArraySocios(Socio arraySocios[], int validosSocios)
{
    int i = 0;
    while( i < validosSocios )
    {
        mostrarSocio(arraySocios[i]);
        i++;
    }
}

//Ejercicio 8
int IDSocioXNombre(char nombreArchivoSocios[])
{
    int idSocio = -1;
    char nombreABuscar[DIM];
    printf("\nIngrese el nombre del socio a buscar: ");
    fflush(stdin);
    gets(nombreABuscar);
    idSocio = buscarIDSocioXNombre(nombreArchivoSocios, nombreABuscar);
    return idSocio;
}

int buscarIDSocioXNombre(char nombreArchivoSocios[], char nombreABuscar[])
{
    int idSocio = -1;
    Socio bufferSocio;
    FILE *bufferFile = fopen(nombreArchivoSocios, "rb");
    if( bufferFile == NULL )
    {
        printf("\nError, el archivo no existe.");
    }
    else
    {
        while( !feof(bufferFile) )
        {
            fread(&bufferSocio, sizeof(Socio), 1, bufferFile);
            if( !feof(bufferFile) && strcmp(bufferSocio.nombreYapellido, nombreABuscar) == 0 )
            {
                idSocio = bufferSocio.idSocio;
            }
        }
        fclose(bufferFile);
    }
    return idSocio;
}
