//Escribir un programa que solicite la carga de números entre 0 y 999 y nos muestre un
//mensaje de cuántos dígitos tiene cada número.
//Finalizar el programa cuando se cargue el valor 0.

Algoritmo cuantosDigitos
	Definir num Como Real;
	
	Hacer
		Escribir "Ingrese un numero: ";
		Leer num;
		
		Si num > 0 Y num < 10 Entonces
			Escribir "El numero tiene 1 digito.";
		FinSi
		
		Si num >= 10 Y num < 100 Entonces
			Escribir "El numero tiene 2 digito.";
		FinSi
		
		Si num >= 100 Y num < 1000 Entonces
			Escribir "El numero tiene 3 digito.";
		FinSi
		
		Si num < 0 O num >= 1000 Entonces
			Escribir "El numero no se encuentra dentro del rango especificado.";
		FinSi
		
	Hasta Que num = 0;
	
FinAlgoritmo
