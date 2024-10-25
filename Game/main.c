#include "raylib.h"
#include <math.h>
#include <string.h>

#define SCREENWIDTH 1920
#define SCREENHEIGHT 1080
#define FPS 60

typedef struct {
    int state;
    int frames;
} Settings;

typedef struct {
    Rectangle bodyHitbox;
    Vector2 velocity;
    Vector2 acceleration;
    int lives;
} Player;

//HERRAMIENTA DEBUG
typedef struct {
    Color veryDarkTeal;
    Color darkTeal;
    Color teal;
    Color lightTeal;
    Color veryLightTeal;
} ColoresDebug;

typedef struct {
    Rectangle ventana;
    int variableActivada[12];
    float valorVariable[10];
    Rectangle botonVariable[12];
    ColoresDebug color; //Teal
    int mostrarHerramienta;
} Debug;

//GLOBAL VARIABLES
int i, j, k, m, n;

int main() {
    //INITIALIZATIONS
    srand(time(NULL));
    Settings settings;
    Player player1;
    Debug herramientaDebug; //EXTENSION
    initializations(&settings, &player1, &herramientaDebug);
    //MAIN LOOP
    while( !WindowShouldClose() ) {
        update(&settings, &player1, &herramientaDebug);
        draw(settings, player1, herramientaDebug);
    }
    //DE-INITIALIZATIONS
    CloseAudioDevice();
    CloseWindow();
    return 0;
}
//INITIALIZATIONS
void initializations(Settings *settings, Player *player1, Debug *herramientaDebug) {
    InitWindow(SCREENWIDTH, SCREENHEIGHT, "Game");
    SetTargetFPS(FPS);
    InitAudioDevice();
    initSettings(settings);
    initPlayer(player1);
    initDebug(herramientaDebug);
}
void initSettings(Settings *settings) {
    initSettingsState(settings);
}
void initSettingsState(Settings *settings) {
    settings->state = 0;
    settings->frames = 0;
}
void initPlayer(Player *player1) {
    initPlayerBodyHitbox(player1);
    initPlayerVelocity(player1);
    initPlayerAcceleration(player1);
    initPlayerLives(player1);
}
void initPlayerBodyHitbox(Player *player1) {
    player1->bodyHitbox.x = 600;
    player1->bodyHitbox.y = 400;
    player1->bodyHitbox.width = 80;
    player1->bodyHitbox.height = 160;
}
void initPlayerVelocity(Player *player1) {
    player1->velocity.x = 0;
    player1->velocity.y = 0;
}
void initPlayerAcceleration(Player *player1) {
    player1->acceleration.x = 0;
    player1->acceleration.y = 0;
}
void initPlayerLives(Player *player1) {
    player1->lives = 1;
}
//MAIN LOOP
//UPDATE
void update(Settings *settings, Player *player1, Debug *herramientaDebug) {
    updatePlayer(player1);
    //DEBUG-----------------------------------------------------------------
    actualizarDebug(herramientaDebug);
    actualizarTestDebug(settings, player1, herramientaDebug);
    //DEBUG-----------------------------------------------------------------
}
void updatePlayer(Player *player1) {
    updatePlayerInput(player1);
    updatePlayerMovement(player1);
    updatePlayerVelocity(player1);
    updatePlayerAcceleration(player1);
}
void updatePlayerInput(Player *player1) {
    if( IsKeyReleased(KEY_R) )  resetPlayerPosition(player1); //debug
    if( IsKeyDown(KEY_D) )      acceleratePlayerEast(player1);
}
void resetPlayerPosition(Player *player1) {
    player1->bodyHitbox.x = 600;
    player1->bodyHitbox.y = 400;
}
void acceleratePlayerEast(Player *player1) {
    if( player1->acceleration.x < 6 ) player1->acceleration.x = 3;
}
void updatePlayerMovement(Player *player1) {
    player1->bodyHitbox.x += player1->velocity.x;
    player1->bodyHitbox.y += player1->velocity.y;
}
void updatePlayerVelocity(Player *player1) {

}
void updatePlayerAcceleration(Player *player1) { //reduce acceleration gradually

}
//DRAW
void draw(Settings settings, Player player1, Debug herramientaDebug) {
    BeginDrawing();
    drawBackground();
    drawPlayer(player1);
    //DEBUG-----------------------------------------------------------------
    dibujarDebug(herramientaDebug);
    dibujarTestDebug(settings, player1, herramientaDebug);
    //DEBUG-----------------------------------------------------------------
    EndDrawing();
}
void drawBackground() {
    ClearBackground(BLACK);
}
void drawPlayer(Player player1) {
    DrawRectangle(player1.bodyHitbox.x, player1.bodyHitbox.y, player1.bodyHitbox.width, player1.bodyHitbox.height, RED);
}
//DEBUG NUMPAD -------------------------------------------------------------------------------------
void initDebug(Debug *herramientaDebug) {
    herramientaDebug->mostrarHerramienta = 1;
    inicializarVentanaDebug(herramientaDebug);
    inicializarBotonesDebug(herramientaDebug);
    inicializarValoresVariablesDebug(herramientaDebug);
    inicializarColoresDebug(herramientaDebug);
}
void inicializarVentanaDebug(Debug *herramientaDebug) {
    herramientaDebug->ventana.x = 0;
    herramientaDebug->ventana.y = 0;
    herramientaDebug->ventana.width = 96;
    herramientaDebug->ventana.height = 124;
}
void inicializarBotonesDebug(Debug *herramientaDebug) {
    inicializarBotonesNumericosDebug(herramientaDebug);
    inicializarBotonMenosDebug(herramientaDebug);
    inicializarBotonMasDebug(herramientaDebug);
}
void inicializarBotonesNumericosDebug(Debug *herramientaDebug){
    inicializarCeroDebug(herramientaDebug);
    int numBoton = 1;
    for( i = 0 ; i < 3 ; i++ ) //inicializa 1 al 9
        for( j = 0 ; j < 3 ; j++ ) {
            herramientaDebug->botonVariable[numBoton].x = 8 + ( 28 * j ) ;
            herramientaDebug->botonVariable[numBoton].y = 64 - ( 28 * i );
            herramientaDebug->botonVariable[numBoton].width = 24;
            herramientaDebug->botonVariable[numBoton].height = 24;
            herramientaDebug->variableActivada[numBoton] = 0;
            numBoton++;
        }
}
void inicializarCeroDebug(Debug *herramientaDebug) {
    herramientaDebug->botonVariable[0].x = 8;
    herramientaDebug->botonVariable[0].y = 92;
    herramientaDebug->botonVariable[0].width = 24;
    herramientaDebug->botonVariable[0].height = 24;
}
void inicializarBotonMenosDebug(Debug *herramientaDebug) {
    herramientaDebug->botonVariable[10].x = 36 + ( 10 - 10 );
    herramientaDebug->botonVariable[10].y = 92;
    herramientaDebug->botonVariable[10].width = 24;
    herramientaDebug->botonVariable[10].height = 24;
}
void inicializarBotonMasDebug(Debug *herramientaDebug) {
    herramientaDebug->botonVariable[11].x = 64;
    herramientaDebug->botonVariable[11].y = 92;
    herramientaDebug->botonVariable[11].width = 24;
    herramientaDebug->botonVariable[11].height = 24;
}
void inicializarValoresVariablesDebug(Debug *herramientaDebug) {
    for( i = 0 ; i < 10 ; i++) herramientaDebug->valorVariable[i] = 1;
}
void inicializarColoresDebug(Debug *herramientaDebug) {
    char coloresRGBA[5][4] = {
        { 212, 242, 239, 210 },   //0: VERYLIGHTTEAL
        { 180, 233, 231, 210 },   //1: LIGHTTEAL
        { 127, 214, 213, 210 },   //1: TEAL
        {  32, 186, 181, 210 },   //2: DARKTEAL
        {   1, 140, 133, 210 } }; //3: VERYDARKTEAL
    inicializarColorVLTeal(herramientaDebug, coloresRGBA);
    inicializarColorLTeal(herramientaDebug, coloresRGBA);
    inicializarColorTeal(herramientaDebug, coloresRGBA);
    inicializarColorDTeal(herramientaDebug, coloresRGBA);
    inicializarColorVDTeal(herramientaDebug, coloresRGBA);
}
void inicializarColorVLTeal(Debug *herramientaDebug, char coloresRGBA[][4]) {
    herramientaDebug->color.veryLightTeal.r = coloresRGBA[0][0];
    herramientaDebug->color.veryLightTeal.g = coloresRGBA[0][1];
    herramientaDebug->color.veryLightTeal.b = coloresRGBA[0][2];
    herramientaDebug->color.veryLightTeal.a = coloresRGBA[0][3];
}
void inicializarColorLTeal(Debug *herramientaDebug, char coloresRGBA[][4]) {
    herramientaDebug->color.lightTeal.r = coloresRGBA[1][0];
    herramientaDebug->color.lightTeal.g = coloresRGBA[1][1];
    herramientaDebug->color.lightTeal.b = coloresRGBA[1][2];
    herramientaDebug->color.lightTeal.a = coloresRGBA[1][3];
}
void inicializarColorTeal(Debug *herramientaDebug, char coloresRGBA[][4]) {
    herramientaDebug->color.teal.r = coloresRGBA[2][0];
    herramientaDebug->color.teal.g = coloresRGBA[2][1];
    herramientaDebug->color.teal.b = coloresRGBA[2][2];
    herramientaDebug->color.teal.a = coloresRGBA[2][3];
}
void inicializarColorDTeal(Debug *herramientaDebug, char coloresRGBA[][4]) {
    herramientaDebug->color.darkTeal.r = coloresRGBA[3][0];
    herramientaDebug->color.darkTeal.g = coloresRGBA[3][1];
    herramientaDebug->color.darkTeal.b = coloresRGBA[3][2];
    herramientaDebug->color.darkTeal.a = coloresRGBA[3][3];
}
void inicializarColorVDTeal(Debug *herramientaDebug, char coloresRGBA[][4]) {
    herramientaDebug->color.veryDarkTeal.r = coloresRGBA[4][0];
    herramientaDebug->color.veryDarkTeal.g = coloresRGBA[4][1];
    herramientaDebug->color.veryDarkTeal.b = coloresRGBA[4][2];
    herramientaDebug->color.veryDarkTeal.a = coloresRGBA[4][3];
}
void actualizarDebug(Debug *herramientaDebug) {
    actualizarInputDebug(herramientaDebug);
}
void actualizarInputDebug(Debug *herramientaDebug) {
    if( IsKeyReleased(KEY_H) )
        herramientaDebug->mostrarHerramienta = herramientaDebug->mostrarHerramienta == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_DECIMAL) ) mostrarValoresVariables(herramientaDebug);
    actualizarValoresVariables(herramientaDebug);
    actualizarInterruptoresVariables(herramientaDebug);
}
void mostrarValoresVariables(Debug *herramientaDebug) {
    for( i = 0 ; i < 10 ; i++ ) printf("\nVariable %i: %.3f", i, herramientaDebug->valorVariable[i]);
}
void actualizarInterruptoresVariables(Debug *herramientaDebug) {
    if( IsKeyReleased(KEY_KP_0) )
        herramientaDebug->variableActivada[0] = herramientaDebug->variableActivada[0] == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_1) )
        herramientaDebug->variableActivada[1] = herramientaDebug->variableActivada[1] == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_2) )
        herramientaDebug->variableActivada[2] = herramientaDebug->variableActivada[2] == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_3) )
        herramientaDebug->variableActivada[3] = herramientaDebug->variableActivada[3] == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_4) )
        herramientaDebug->variableActivada[4] = herramientaDebug->variableActivada[4] == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_5) )
        herramientaDebug->variableActivada[5] = herramientaDebug->variableActivada[5] == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_6) )
        herramientaDebug->variableActivada[6] = herramientaDebug->variableActivada[6] == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_7) )
        herramientaDebug->variableActivada[7] = herramientaDebug->variableActivada[7] == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_8) )
        herramientaDebug->variableActivada[8] = herramientaDebug->variableActivada[8] == 1 ? 0 : 1 ;
    if( IsKeyReleased(KEY_KP_9) )
        herramientaDebug->variableActivada[9] = herramientaDebug->variableActivada[9] == 1 ? 0 : 1 ;
}
void actualizarValoresVariables(Debug *herramientaDebug) {
    herramientaDebug->variableActivada[10] = 0;
    herramientaDebug->variableActivada[11] = 0;
    if( IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_KP_ADD) )
        incrementarMuchoValorVariable(herramientaDebug);
    if( IsKeyDown(KEY_KP_ADD) && !IsKeyDown(KEY_LEFT_SHIFT) && !IsKeyDown(KEY_LEFT_ALT) )
        incrementarValorVariable(herramientaDebug);
    if( IsKeyDown(KEY_LEFT_ALT) && IsKeyDown(KEY_KP_ADD) )
        incrementarPocoValorVariable(herramientaDebug);
    if( IsKeyDown(KEY_LEFT_ALT) && IsKeyDown(KEY_KP_SUBTRACT) )
        decrementarPocoValorVariable(herramientaDebug);
    if( IsKeyDown(KEY_KP_SUBTRACT) && !IsKeyDown(KEY_LEFT_SHIFT) && !IsKeyDown(KEY_LEFT_ALT) )
        decrementarValorVariable(herramientaDebug);
    if( IsKeyDown(KEY_LEFT_SHIFT) && IsKeyDown(KEY_KP_SUBTRACT) )
        decrementarMuchoValorVariable(herramientaDebug);
}
void incrementarMuchoValorVariable(Debug *herramientaDebug) {
    for( i = 0 ; i < 10 ; i++ )
        if( herramientaDebug->variableActivada[i] == 1 ) {
            herramientaDebug->valorVariable[i] = herramientaDebug->valorVariable[i] + 0.1;
            herramientaDebug->variableActivada[11] = 1;
        }
}
void incrementarPocoValorVariable(Debug *herramientaDebug) {
    for( i = 0 ; i < 10 ; i++ )
        if( herramientaDebug->variableActivada[i] == 1 ) {
            herramientaDebug->valorVariable[i] = herramientaDebug->valorVariable[i] + 0.001;
            herramientaDebug->variableActivada[11] = 1;
        }
}
void incrementarValorVariable(Debug *herramientaDebug) {
    for( i = 0 ; i < 10 ; i++ )
        if( herramientaDebug->variableActivada[i] == 1 ) {
            herramientaDebug->valorVariable[i] = herramientaDebug->valorVariable[i] + 0.01;
            herramientaDebug->variableActivada[11] = 1;
        }
}
void decrementarMuchoValorVariable(Debug *herramientaDebug) {
    for( i = 0 ; i < 10 ; i++ )
        if( herramientaDebug->variableActivada[i] == 1 ) {
            herramientaDebug->valorVariable[i] = herramientaDebug->valorVariable[i] - 0.1;
            herramientaDebug->variableActivada[10] = 1;
        }
}
void decrementarPocoValorVariable(Debug *herramientaDebug) {
    for( i = 0 ; i < 10 ; i++ )
        if( herramientaDebug->variableActivada[i] == 1 ) {
            herramientaDebug->valorVariable[i] = herramientaDebug->valorVariable[i] - 0.001;
            herramientaDebug->variableActivada[10] = 1;
        }
}
void decrementarValorVariable(Debug *herramientaDebug) {
    for( i = 0 ; i < 10 ; i++ )
        if( herramientaDebug->variableActivada[i] == 1 ) {
            herramientaDebug->valorVariable[i] = herramientaDebug->valorVariable[i] - 0.01;
            herramientaDebug->variableActivada[10] = 1;
        }
}
void dibujarDebug(Debug herramientaDebug) {
    dibujarFondoVentanaDebug(herramientaDebug);
    dibujarBotonesNumericosDebug(herramientaDebug);
    dibujarBotonesSumaYResta(herramientaDebug);
}
void dibujarFondoVentanaDebug(Debug herramientaDebug) {
    DrawRectangle(herramientaDebug.ventana.x,herramientaDebug.ventana.y,herramientaDebug.ventana.width,herramientaDebug.ventana.height,herramientaDebug.color.veryDarkTeal);
}
void dibujarBotonesNumericosDebug(Debug herramientaDebug) {
    for( i = 0 ; i < 10 ; i++ ) {
        if(herramientaDebug.variableActivada[i] == 1 )
            DrawRectangle(herramientaDebug.botonVariable[i].x,herramientaDebug.botonVariable[i].y,herramientaDebug.botonVariable[i].width,herramientaDebug.botonVariable[i].height,herramientaDebug.color.veryLightTeal);
        if(herramientaDebug.variableActivada[i] == 0 )
            DrawRectangle(herramientaDebug.botonVariable[i].x,herramientaDebug.botonVariable[i].y,herramientaDebug.botonVariable[i].width,herramientaDebug.botonVariable[i].height,herramientaDebug.color.teal);
        DrawText(TextFormat("%i", i),herramientaDebug.botonVariable[i].x + 4,herramientaDebug.botonVariable[i].y, 28,herramientaDebug.color.veryDarkTeal);
    }
}
void dibujarBotonesSumaYResta(Debug herramientaDebug) {
    if(herramientaDebug.variableActivada[10] == 1 )
        DrawRectangle(herramientaDebug.botonVariable[10].x,herramientaDebug.botonVariable[10].y,herramientaDebug.botonVariable[10].width,herramientaDebug.botonVariable[10].height,herramientaDebug.color.veryLightTeal);
    if(herramientaDebug.variableActivada[10] == 0 )
        DrawRectangle(herramientaDebug.botonVariable[10].x,herramientaDebug.botonVariable[10].y,herramientaDebug.botonVariable[10].width,herramientaDebug.botonVariable[10].height,herramientaDebug.color.teal);
    if(herramientaDebug.variableActivada[11] == 1 )
        DrawRectangle(herramientaDebug.botonVariable[11].x,herramientaDebug.botonVariable[11].y,herramientaDebug.botonVariable[11].width,herramientaDebug.botonVariable[11].height,herramientaDebug.color.veryLightTeal);
    if(herramientaDebug.variableActivada[11] == 0 )
        DrawRectangle(herramientaDebug.botonVariable[11].x,herramientaDebug.botonVariable[11].y,herramientaDebug.botonVariable[11].width,herramientaDebug.botonVariable[11].height,herramientaDebug.color.teal);
    DrawText(TextFormat("-"),herramientaDebug.botonVariable[10].x + 6,herramientaDebug.botonVariable[10].y, 28,herramientaDebug.color.veryDarkTeal);
    DrawText(TextFormat("+"),herramientaDebug.botonVariable[11].x + 5,herramientaDebug.botonVariable[11].y, 28,herramientaDebug.color.veryDarkTeal);
}
void dibujarHitboxDebug(Player player1) {
    dibujarHitboxPlayer(player1);
}

void dibujarHitboxPlayer(Player player1) {
    DrawRectangleLines(player1.bodyHitbox.x, player1.bodyHitbox.y, player1.bodyHitbox.width, player1.bodyHitbox.height, RED);
}
void actualizarTestDebug(Settings *settings, Player *player1, Debug *herramientaDebug) {
    //TEST -----------------------------------------------------------
//    player1->bodyHitbox.x += herramientaDebug->valorVariable[1];
//    player1->bodyHitbox.y += herramientaDebug->valorVariable[2];
    //----------------------------------------------------------------
}
void dibujarTestDebug(Settings settings, Player player1, Debug herramientaDebug) {
    //TEST -----------------------------------------------------------

    //----------------------------------------------------------------
}

//Programacion I, UTN Mar Del Plata 2023, Olmos Fernando
