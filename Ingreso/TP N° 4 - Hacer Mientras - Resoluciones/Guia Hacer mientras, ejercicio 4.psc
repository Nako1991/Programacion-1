//Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el
//9999 (no sumar dicho valor, indica que ha finalizado la carga). Imprimir el valor acumulado
//e informar si dicho valor es cero, mayor a cero o menor a cero.

Algoritmo sumaValores
	Definir num, suma Como Real;
	suma = 0;
	
	Hacer
		Escribir "Ingrese un numero a sumar: ";
		Leer num;
		
		Si num <> 9999 Entonces
			suma = suma + num;
		FinSi
		
	Hasta Que num = 9999;
	
	Escribir "La suma de los valores es: ", suma;
	
	Si suma = 0 Entonces
		Escribir "La suma es 0.";
	FinSi
	
	Si suma > 0 Entonces
		Escribir "La suma es mayor a 0.";
	FinSi
	
	Si suma < 0 Entonces
		Escribir "La suma es menor a 0.";
	FinSi
	
FinAlgoritmo
