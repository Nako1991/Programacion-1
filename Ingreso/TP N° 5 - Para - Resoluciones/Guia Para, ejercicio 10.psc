//Escribir un programa que lea 10 n�meros enteros y luego muestre cu�ntos valores
//ingresados fueron m�ltiplos de 3 y cu�ntos de 5. Debemos tener en cuenta que hay
//n�meros que son m�ltiplos de 3 y de 5 a la vez.

Algoritmo multiploTresOCinco
	Definir i, num, contNum, multiTres, multiCinco Como Entero;
	contNum = 10;
	multiTres = 0;
	multiCinco = 0;
	
	Para i = 1 Hasta contNum Con Paso 1 Hacer
		Escribir "Ingrese un numero: ";
		Leer num;
		
		Si num Mod 3 = 0 Entonces
			Escribir "El numero es divisible por 3.";
			multiTres = multiTres + 1;
		FinSi
		
		Si num Mod 5 = 0 Entonces
			Escribir "El numero es divisible por 5.";
			multiCinco = multiCinco + 1;
		FinSi
		
	FinPara
	
	Escribir "De todos los numeros ingresados ", multiTres, " fueron divisibles por tres y ", multiCinco, " fueron divisibles por cinco.";
FinAlgoritmo
