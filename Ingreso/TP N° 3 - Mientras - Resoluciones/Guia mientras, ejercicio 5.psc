//Realizar un algoritmo que permita cargar 10 valores por teclado y nos muestre
//posteriormente la suma de los valores ingresados y su promedio.
Algoritmo sumaYPromedio
	Definir i, num, cantidadNumeros, suma, promedio Como Real;
	i = 1;
	suma = 0;
	cantidadNumeros = 10;
	
	Mientras i < 11 Hacer
		Escribir "ingrese un numero";
		Leer num;
		
		suma = suma + num;
		//Escribir suma; //debug
		
		i = i + 1;
	FinMientras
	
	promedio = suma / cantidadNumeros;
	
	Escribir "La suma es de ", suma, " y el promedio es de ", promedio;
FinAlgoritmo

