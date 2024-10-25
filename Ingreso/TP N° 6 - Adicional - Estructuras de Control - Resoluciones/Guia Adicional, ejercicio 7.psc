//Ejercicio 7

Algoritmo maximo 
	Definir i, cantDatos Como Entero;
	Definir num, max, min, diferencia Como Real;
	
	Escribir "Cuantos datos desea ingresar en el programa? ";
	Leer cantDatos;
	
	Para i = 1 Hasta cantDatos Con Paso 1 Hacer
		
		Escribir "Ingrese un dato numerico.";
		Leer num;
		
		Si i = 1 Entonces
			max = num;
			min = num;
		FinSi
		
		Si max < num Entonces
			max = num;
		FinSi
		
		Si min > num Entonces
			min = num;
		FinSi
		
	FinPara
	
	diferencia = max - min;
	Escribir "El rango es: ", diferencia;
FinAlgoritmo
