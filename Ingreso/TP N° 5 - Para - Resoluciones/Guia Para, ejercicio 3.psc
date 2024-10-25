//Leer 10 números y obtener su cubo y su cuarta. Mostrar los resultados por pantalla.

Algoritmo cuboYCuarta
	Definir i, cantNumeros Como Entero;
	Definir num, numCubo, numCuarta Como Real;
	cantNumeros = 10;
	
	Para i = 1 Hasta cantNumeros Con Paso 1 Hacer
		Escribir "Ingrese un Número para calcular su Cuarta y su Cubo: ";
		Leer num;
		numCuarta = num ^ 2;
		numCubo = num ^ 3;
		Escribir "La cuarta potencia del numero ingresado es ", numCuarta, " y su cubo es ", numCubo, ".";
	FinPara
	
FinAlgoritmo
