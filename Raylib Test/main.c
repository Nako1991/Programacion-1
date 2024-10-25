#include "raylib.h"
#include <math.h>

int main()
{
    //INICIALIZACION
    //-------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Pac-man");
    SetTargetFPS(60);
    //-------------------------------------------------------------------------------------

    while( !WindowShouldClose() ) // Cierra el juego con el escape o el boton de salir (x)
    {
        //update
        update();
        //draw
        draw();
    }

    //DE-INICIALIZACION
    //-------------------------------------------------------------------------------------
    CloseWindow();
    //-------------------------------------------------------------------------------------

    return 0;
}

void update()
{
    //deteccion de colisiones

}

void draw()
{
    BeginDrawing();
        ClearBackground(RAYWHITE);
    EndDrawing();
}
