#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#define ANCHO 40
#define ALTO 20

void dibujar(int, int, int, int);
void inicializarSnake();
void resetScreenCursor();
void generaComida();
int teclaApretada();
void movimiento();
void actualizar();

int campo[ALTO][ANCHO]; //posicion de las distintas partes a dibujar
int i, j, y, x, x2, cabeza, cola, comida, comidaX, comidaY, tecla, direccion;
int salir = 0;

void dibujar(int y1, int y2, int x1, int x2)
{
    //LINEA DE ARRIBA
    for( i=0 ; i<ANCHO ; i++ )
    {
        if( i==0 )
        {
            printf("%c", 201);
        }
        else if ( i==ANCHO-1 )
        {
            printf("%c", 187);
        }
        else
        {
            printf("%c", 205);
        }
    }

    //LATERALES, FONDO y SERPIENTE
    for( i=0 ; i<ALTO-2 ; i++ )
    {
        printf("\n");
        for( j=0 ; j<ANCHO ; j++ )
        {
            if( j==0 || j==ANCHO-1 ) //LATERALES
            {
                printf("%c", 186);
            }
            else if ( campo[i][j]>0 && campo[i][j]!=cabeza ) //CUERPO
            {
                printf("%c", 177);
            }
            else if ( campo[i][j]==cabeza ) //CABEZA
            {
                printf("%c", 178);
            }
            else if ( campo[i][j]==-1 ) //COMIDA
            {
                printf("%c", 15);
            }
            else if ( campo[i][j]==0 ) //FONDO
            {
                printf(" ");
            }
        }
    }
    printf("\n");

    //LINEA DE ABAJO
    for( i=0 ; i<ANCHO ; i++ )
    {
        if( i==0 )
        {
            printf("%c", 200);
        }
        else if ( i==ANCHO-1 )
        {
            printf("%c", 188);
        }
        else
        {
            printf("%c", 205);
        }
    }

}

void inicializarSnake()
{
    //Inicializando todos los valores en 0
    for( i=0 ; i<ALTO ; i++ )
    {
        for( j=0 ; j<ANCHO ; j++ )
        {
            campo[i][j]=0;
        }
    }
    //Cabeza, cuerpo x cola
    y = ALTO/2;
    x = ANCHO/2;
    x2 = x;
    cabeza = 5; //Asigno el valor 5 para representar la cabeza
    cola = 1;
    //Comida
    srand(time(NULL));
    comida = 0;

    //printf("\ny: %i, x: %i, x2: %i, cabeza: %i, cola: %i.", y, x, x2, cabeza, cola); //debug
    for( i=0 ; i<cabeza ; i++ )
    {
        x2++;
        campo[y][x2-cabeza] = i+1;
        //printf("\ncampo[%i][%i]: %i", y, x2-cabeza, campo[y][x2-cabeza]); //debug
    }
}

void resetScreenCursor() //funciona como gotoyx()
{
    HANDLE hOut; //tipo de vatiable identificador, como si fuera un pointer pero a mas datos no solo memoria
    COORD posicion;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE); //Asigna el standard output handle a hOut
    posicion.X = 0;
    posicion.Y = 0;
    SetConsoleCursorPosition(hOut, posicion);
}

void generaComida()
{
    if ( comida==0 && campo[comidaX][comidaY]==0 ) //compara si hax al menos una comida, x si esa comida se encuentra arriba de la serpiente o no
    {
        comidaY = rand()%(ALTO-2)+1; //-2 para evitar q aparezca comida en la pared
        comidaX = rand()%(ANCHO-2)+1;
        campo[comidaY][comidaX] = -1; //Asigno el valor -1 para representar comida
        comida = 1;
    }
}

//void reducirCola()
//{
//    for( i=0 ; i<ANCHO)
//}

//checkea si se aprieta una tecla, no pausa el programa si no se aprieta
//guarda en buffer todas las teclas apretadas y las pulsa 1 tecla por frame
int teclaApretada()
{
    if( _kbhit() )
    {
        return _getch();
    }
    else
    {
        return -1;
    }
}

void movimiento()
{
    tecla = teclaApretada();

    //cuando se aprieta una tecla cambia de direccion
    if( tecla=='d' || tecla=='D' || tecla=='a' || tecla=='A' || tecla=='w' || tecla=='W' || tecla=='s' || tecla=='S' )
    {
        direccion = tecla;
    }

    if( direccion == 'd' || direccion == 'D' ) //si se aprieta la d, mueve la serpiente hacia la derecha
    {
        x++;
        cabeza++;
        campo[y][x] = cabeza;
    }
    else if( direccion == 'a' || direccion == 'A' )
    {
        x--;
        cabeza++;
        campo[y][x] = cabeza;
    }
    else if( direccion == 'w' || direccion == 'W' ) //si se aprieta la w, mueve la serpiente hacia arriba (eje y invertido por la consola)
    {
        y--;
        cabeza++;
        campo[y][x] = cabeza;
    }
    else if( direccion == 's' || direccion == 'S' )
    {
        y++;
        cabeza++;
        campo[y][x] = cabeza;
    }
}

void actualizar()
{
    generaComida();
    movimiento();
}

int main()
{
    inicializarSnake();

    while ( salir==0 )
    {
        actualizar(); //actualiza los datos de las variables
        resetScreenCursor(); //vuelve al comienzo de la pantalla
        dibujar(1, ANCHO, 1, ALTO); //debuja toda la pantalla
        Sleep(50); //Tiempo entre frames
    }
}
