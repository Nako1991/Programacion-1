//Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o
//iguales a 1000.

Algoritmo mayorAMil
	Definir i, cantNum, num, cantMayor Como Entero;
	cantMayor = 0;
	Escribir "Ingrese la cantidad de numeros que se vayan a utilizar: ";
	Leer cantNum;
	
	Para i = 1 Hasta cantNum Con Paso 1 Hacer
		Escribir "Ingrese un valor: ";
		Leer num;
		
		Si num >= 1000 Entonces
			cantMayor = cantMayor + 1;
		FinSi
		
	FinPara
	
	Escribir "La cantidad de valores mayores o iguales a 1000 es de: ", cantMayor;
FinAlgoritmo
