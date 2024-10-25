#include <stdio.h>
#include <stdlib.h>


const int col = 4;

int main()
{

    int matriz[3][col];

    cargarMatriz(matriz, 3);

    mostrarMatriz(matriz, 3);

    char matrizChar[3][5];

    int palabras = cargarStrings(matrizChar,3);

    muestraMatrizPalabras(matrizChar,palabras);

    return 0;
}

void cargarMatriz(int matrix[][col], int dimF){

    int i, j;

    for(i = 0 ; i < dimF ; i++){ // FILAS

        printf("Cargo datos de la fila: %i\n", i);

        for(j = 0 ; j < col ; j++){ //COLUMNAS

            printf("Ingrese el dato n %i:\n", j);
            fflush(stdin);
            scanf("%i", &matrix[i][j]);  //
        }
    }
}

void mostrarMatriz(int matrix[][4], int dimF){

    int i, j;

    for(i = 0 ; i < dimF ; i++){ // FILAS

        for(j = 0 ; j < 4 ; j++){ //COLUMNAS

            printf(" |%i| ", matrix[i][j]);

        }
        printf("\n");
    }
}

int cargarStrings(char matriz[][5], int dimF){

    char eleccion = 's';
    int i = 0;

    while(i < dimF && eleccion == 's'){

        printf("\nIngrese una palabra:");
        fflush(stdin);
        scanf("%s", &matriz[i]);

        printf("\nSeguis??");
        fflush(stdin);
        scanf("%c", &eleccion);

        i++;
    }
    return i;
}


void muestraMatrizPalabras(char P[][5], int valF)
{
    int f;

    for(f=0; f<valF; f++)
    {
        printf("%s ", P[f]);
    }


}

