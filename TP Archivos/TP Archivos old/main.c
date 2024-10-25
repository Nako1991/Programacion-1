#include <stdio.h>
#include <stdlib.h>

#define DIM 30

typedef struct
{
    int legajo;
    int edad;
    char nombres[DIM];
} persona;

int main()
{
    FILE *nuevoArchivo = fopen("nuevoArchivo.bin", "wb");
    if( nuevoArchivo != NULL )
    {

    }
    fclose(nuevoArchivo);
}
