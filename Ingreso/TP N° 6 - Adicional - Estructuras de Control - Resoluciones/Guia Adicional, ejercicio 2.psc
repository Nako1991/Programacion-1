//Escriba un programa que muestre todos los divisores del n�mero entero ingresado por el usuario:
//Ingrese un n�mero: 200
//	1 2 4 5 8 10 20 25 40 50 100 200


Algoritmo divisores
	Definir i, num, resto Como Entero;
	i = 1;
	
	Escribir "Ingrese un numero para averiguar sus divisores: ";
	Leer num;

	Mientras i <= num Hacer
		
		Si num Mod i = 0 Entonces
			Escribir i;
		FinSi
		
		i = i + 1;
	FinMientras
	
FinAlgoritmo
