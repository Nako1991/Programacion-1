//Leer 10 n�meros e imprimir solamente los n�meros positivos

Algoritmo numerosPositivos
	Definir i, cantNumeros Como Entero;
	Definir num Como Real;
	cantNumeros = 10;
	
	Para i = 1 Hasta cantNumeros Con Paso 1 Hacer
		Escribir "Ingresar un numero: ";
		Leer num;
		
		Si num > 0 Entonces
			Escribir "El numero ", num, " es positivo.";
		FinSi
		
	FinPara
	
FinAlgoritmo
