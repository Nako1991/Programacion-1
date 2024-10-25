//Leer valores del usuario hasta que introduzca un 0. El usuario puede introducir valores numéricos, 
//tanto positivos como negativos. Encontrar el máximo de los elementos que introdujo:
	
//Ingrese un número: 9
//Ingrese un número: 7
//Ingrese un número: -1
//Ingrese un número: 1
//Ingrese un número: 0
//	El máximo es 9
	
//	Analizar cómo cambia el programa para hallar el mínimo


Algoritmo maximo 
	Definir flag Como Entero;
	Definir num, max, min Como Real;
	flag = 1;
	
	Hacer
		Escribir "Ingrese un valor numerico.";
		Leer num;
		
		Si i = 1 Entonces
			max = num;
			min = num;
			flag = 0;
		FinSi
		
		Si num <> 0 Entonces
			
			Si max < num Entonces
				max = num;
			FinSi
			
			Si min > num Entonces
				min = num;
			FinSi
			
		FinSi
		
	Hasta Que num = 0;
	
	Escribir "El maximo de todos los numeros es: ", max, " y el minimo de todos los numeros es: ", min, ".";
FinAlgoritmo
