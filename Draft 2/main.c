#include <stdio.h>
#include <stdlib.h>
const int dimension = 30;

int cargarParalel(int dni[], int celular[]);
void mostrarParalel(int dni[], int celular[], int validos);

int main()
{

    int dni[dimension];
    int celular[dimension];
    int validos;

    validos = cargarParalel(dni, celular);

    mostrarParalel(dni, celular, validos);

}

int cargarParalel(int dni[], int celular[])
{
    int i = 0;
    char eleccion = 's';

    do
    {

        printf("Ingrese su numero de DNI: ");
        fflush(stdin);
        scanf("%i", &dni[i]);
        printf("\n");

        printf("Ingrese su numero de celular: ");
        fflush(stdin);
        scanf("%i", &celular[i]);
        printf("\n");

        i++;

        printf("Pulse 's' para ingresar mas datos (s/n) ---> ");
        fflush(stdin);
        scanf("%c", &eleccion);
        printf("\n");

    }
    while(i < dimension && eleccion == 's');

    return i;
}

void mostrarParalel(int dni[], int celular[], int validos)
{
    int i;

    printf("Mostrando datos ingresados al Sistema: \n");
    printf("\n");

    for(i = 0; i < validos; i++)
    {
        printf(" Numeros de DNI:|%i|\n Numeros de celular:|%i|\n", dni[i], celular[i]);
        printf("\n");
    }
}
