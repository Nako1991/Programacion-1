//Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre
//posteriormente la suma de los valores ingresados y su promedio.

Algoritmo sumaYPromedio
	Definir i, cantValores Como Entero;
	Definir num, suma, promedio Como Real;
	cantValores = 10;
	suma = 0;
	
	Para i = 1 Hasta cantValores Con Paso 1 Hacer
		Escribir "Ingrese un numero: ";
		Leer num;
		suma = suma + num;
	FinPara
	
	promedio = suma / cantValores;
	Escribir "La suma de los numeros es ", suma, " y el promedio es ", promedio, ".";
FinAlgoritmo
