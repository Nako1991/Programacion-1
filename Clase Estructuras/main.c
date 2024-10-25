#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nombre[20];
    int edad;
}persona;

int main()
{
    persona listadoDePersonas[30];
    int cantPersonas = cargarArregloDePersonas(listadoDePersonas, 30);
    mostrarArregloDePersonas(listadoDePersonas, cantPersonas);

    return 0;
}

persona cargarUnaPersona(){

    persona personaNueva;

    printf("Ingrese el nombre para su persona: ");
    fflush(stdin);
    gets(personaNueva.nombre);

    printf("Ingrese la edad de su persona: ");
    fflush(stdin);
    scanf("%i", &personaNueva.edad);

    return personaNueva;
}

int cargarArregloDePersonas(persona arr[], int dimension){

    int i = 0;
    char eleccion = 's';

    while(i<dimension && eleccion == 's'){
        arr[i] = cargarUnaPersona();
        i++;

        printf("Desea agregar otra persona?\n");
        fflush(stdin);
        scanf("%c", &eleccion);
    }

    return i;

}

void mostrarArregloDePersonas(persona arr[], int validos){

    int i=0 ;

    while(i < validos){

        printf("\n ----------------------- \n");
        printf("Nombre: %s \n", arr[i].nombre);
        printf("Edad: %i \n", arr[i].edad);
        printf("\n ----------------------- \n");

        i++;

    }

}
