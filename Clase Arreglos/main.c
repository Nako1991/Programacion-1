#include <stdio.h>
#include <stdlib.h>

int cargarDatos (int [], int );
void recorrerArreglo(int [], int );
buscarEnArreglo(int [], int, int);

int main()
{
    int array[5];
    int validos, encontrado, datoABuscar;

    validos = cargarDatos(array, 5);
    recorrerArreglo(array, validos);

    printf("\nIngrese el dato a buscar: ");
    fflush(stdin);
    scanf("%i", &datoABuscar);
    encontrado = buscarEnArreglo(array, validos, datoABuscar);
    printf("\nencontrado: %i", encontrado);
    if( encontrado == 0)
    {
        printf("\nEl dato no ha sido encontrado.");
    }
    else
    {
        printf("\nEl dato se encuentra dentro del array.");
    }
}

int cargarDatos (int arr[], int dimension)
{
    char continuar = 's';
    int i=0;

    while( continuar=='s' && i<dimension )
    {
        printf("\ningrese un numero para añadir al arreglo");
        fflush(stdin);
        scanf("%i", &arr[i]);

        printf("\nIngrese 's' para continuar.");
        fflush(stdin);
        scanf("%c", &continuar);

        i++;
    }
    return i;
}

void recorrerArreglo(int arr[], int validos)
{
    int i = 0;
    while( i<validos )
    {
        printf("\n|%i| ", arr[i]);
        i++;
    }
}

int buscarEnArreglo(int arr[], int validos, int datoABuscar)
{
    int i = 0;
    int flag = 0;

    while( i<validos )
    {
        if( arr[i] == datoABuscar && flag == 0 )
        {
            flag = 1;
        }
        i++;
    }
    return flag;
}
