//Escriba un programa que genere y muestre todas las potencias de 2, desde la 0-ésima hasta la ingresada por el usuario:
//Ingrese un número: 10
//	1 2 4 8 16 32 64 128 256 512 1024


Algoritmo potenciasDeDos
	Definir i, cantPotencias, potenciado Como Real;
	Escribir "Ingrese la cantidad de potencias a la que quiere elevar el numero 2.";
	Leer cantPotencias;
	
	Para i = 0 Hasta cantPotencias Con Paso 1 Hacer
		potenciado = 2 ^ i;
		Escribir potenciado;
	FinPara
	
FinAlgoritmo
