//Leer valores del usuario hasta que introduzca un 0. El usuario puede introducir valores num�ricos, 
//tanto positivos como negativos. Encontrar el m�ximo de los elementos que introdujo:
	
//Ingrese un n�mero: 9
//Ingrese un n�mero: 7
//Ingrese un n�mero: -1
//Ingrese un n�mero: 1
//Ingrese un n�mero: 0
//	El m�ximo es 9
	
//	Analizar c�mo cambia el programa para hallar el m�nimo


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
