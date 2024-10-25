/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int i, found = -1;
  char stringCharacter;
  char string[] = "abcdefghmnopqtuwx";	//string de referencia
  int stringSize = (int) sizeof (string);	//tamaC1o del string
  char stringCopy[stringSize];	//string copia
  printf ("string: %s", string);
  printf ("\nstringCopy: %s", stringCopy);
  for (i = 0; i < stringSize; i++)	//copia cada valor a su posicion hasta el final del string
    {
      stringCopy[i] = string[i];
    }
  printf ("\nstring: %s", string);
  printf ("\nstringCopy: %s", stringCopy);
  printf ("\nIngrese un caracter: ");
  scanf ("%c", &stringCharacter);
  printf ("\nstringCharacter: %c", stringCharacter);
  printf ("\nComparando el caracter ingresado con el STRING");
  for (i = 0; i < stringSize; i++)	//compara los valores int de los caracteres ascii para saber si esta antes o despues en el alfabeto
    {
      printf ("\nstringCharacter: %d, string[%d]: %d",  stringCharacter, i, string[i]);
      if ( stringCharacter <=  string[i])
    	{
    	  stringCharacter = string[i]; //inserta el caracter dentro del STRING
    	  stringSize++; //aumenta el tamaño del STRING en 1 para que entre el resto del string
    	  printf ("\nEl caracter ingresado es igual o menor que el caracter en la posicion %d del STRING, insertando caracter...", i);
    	  for (i = i+1; i < stringSize; i++)	//copia el resto de los caracteres del string a su posicion+1 desde stringCopy
    	    {
    	      string[i] = stringCopy[i-1];
    	      printf("\nstring: %s", string);
    	      found = 1;
    	    }
    	}
    }
    printf("\nstringSize: %d", stringSize);
    if (found == -1 && (97 <= stringCharacter && stringCharacter <= 122)) 
      {
          stringSize++; //aumenta el tamaño del STRING en 1 para que entre el resto del string
          printf("\nstringSize: %d", stringSize);
          string[stringSize-2] = stringCharacter; //inserta el caracter dentro del STRING en la anteúltima posicion (contando del 0, sin sobreescribir el STOP)
          printf ("\nEl caracter es mas grande que cualquiera de los valores, insertando al final");
          printf("\nstring: %s", string);
      }
    else if (found == -1)
      {
        printf ("\nEl caracter ingresado no se encuentra dentro de los parametros (de 'a' a 'z')");
      }
  return 0;
}
