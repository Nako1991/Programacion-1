/*
#include <stdio.h>
#include <stdlib.h>

//DECLARACION DE FUNCIONES
int insertCharacter();
int stringCopy(char[], char[], int, int);
int compareString(char[], int, char);
int characterInsertion(char[], char[], int, char, int);

int main()
{
    printf("Starting the program");
    insertCharacter();
}

int insertCharacter()
{
    int flag = 1, characterPos;
    char stringCharacter;
    char string[50] = "abcdefghmnopqtuwx"; //maximo 50 caracteres
    int stringSize = 18; //contador de tamaño inicial del string
    char stringCopy[50];
    printf("\nString: %s, stringSize: %d", string, stringSize);
    do
    {
        printf("\nIngresa un caracter para agregarlo al STRING respetando el orden alfabetico (ingrese 0 para salir): ");
        fflush(stdin);
        scanf("%c", &stringCharacter);
        //printf("String: '%s', stringSize: %d, stringCharacter: %c", string, stringSize, stringCharacter); //debug
        if (stringCharacter == 48)
        {
            flag = -1;
        }
        else if ((stringCharacter != 48 && stringCharacter < 97) || 122 < stringCharacter)
        {
            printf("El valor ingresado no es correcto");
        }
        else
        {
            copyString(stringCopy, string, 0, stringSize);
            //printf("\nstringCopy: %s, stringCharacter: %d", stringCopy, stringCharacter); //debug
            printf("Comparando el caracter ingresado con el STRING");
            characterPos = compareString(string, stringSize, stringCharacter);
            characterInsertion(string, stringCopy, stringSize, stringCharacter, characterPos);
            stringSize++; //aumenta el contador de tamaño en 1
            printf("\nSe ingreso el codigo correctamente, el nuego STRING es: %s", string);
        }
    }
    while (flag == 1);
    printf("Saliendo al menu...");
    return 0;
}

int copyString(char stringCopy[], char string[], int startPos, int stringSize)
{
    int i;
    for ( i = startPos ; i < stringSize ; i++ ) //copia el string respetando valor y posicion
    {
        stringCopy[i] = string[i];
    }
    return 0;
}

int compareString(char string[], int stringSize, char stringCharacter)
{
    int i, characterPos = -1;

    for ( i = 0 ; i < stringSize ; i++ ) //loopea cada uno de los valores del arreglo para compararlos con stringCharacter
    {
        //printf("\nstring[%d]: %d", i, string[i]); //debug
        if (stringCharacter <=  string[i]) //compara los valores int de los caracteres ascii para saber si esta antes o despues en el alfabeto
        {
            characterPos = i;
            //printf("\ncharacterPos: %d", i); //debug
            break;
        }
    }
    if (string[stringSize-2] < stringCharacter && string[stringSize-2] != 0)
    {
        characterPos = stringSize-1;
        //printf("\ncharacterPos: %d", characterPos); //debug
    }
    return characterPos;
}

int characterInsertion(char string[], char stringCopy[], int stringSize, char stringCharacter, int characterPos)
{
    int i;
    //printf("\nstringSize: %d", stringSize); //debug
    copyString(string, stringCopy, 0, characterPos);
    //printf("\nstring: %s", string); //debug
    string[characterPos] = stringCharacter;
    //printf("\nstring: %s", string); //debug
    for ( i = characterPos ; i <= stringSize; i++)
    {
        string[i + 1] = stringCopy[i];
    }
    //printf("\nstring: %s", string); //debug
    return 0;
}
*/
