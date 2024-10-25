//Escribir un programa que solicite la carga de números por teclado y que permita obtener el  
//promedio de todos los números ingresados. Finalizar la carga de valores cuando se cargue el valor 0.

Algoritmo calcularPromedio
	Definir num, suma, promedio Como Real;
	Definir contador Como Entero;
	contador = -1;
	suma = 0;
	
	Hacer
		Escribir "Ingrese un numero para calcular el promedio: ";
		Leer num;
		suma = suma + num;
		contador = contador + 1;
	Hasta Que num = 0;
	
	promedio = suma / contador;
	Escribir "El promedio es de: ", promedio;
	
FinAlgoritmo