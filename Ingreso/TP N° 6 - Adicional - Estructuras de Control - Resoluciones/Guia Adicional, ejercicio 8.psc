//Definir un algoritmo que permita adivinar un número entre 1 y 100. 
//El algoritmo deberá determinar al azar el número a adivinar (utilizar función azar() de PSeInt, 
//investigar su equivalente en lenguaje C). El usuario deberá ingresar primero un número, si acertó, 
//el sistema le informará por pantalla el acierto y luego terminará. 
//Si el número ingresado por el usuario es mayor o menor que el que tiene que adivinar, 
//el sistema lo informará por pantalla y continuará hasta que adivine.

Algoritmo avidinador
	Definir numCorrecto, numIntento Como Entero;
	numCorrecto = azar(100);
	
	Mientras numCorrecto <> numIntento Hacer
		Escribir "Intente adivinar el numero correcto, ingrese un numero entre 1 y 100: ";
		Leer numIntento;
		
		Si numIntento > numCorrecto Entonces
			Escribir "El numero ingresado es mayor que el numero a adivinar.";
		FinSi
		
		Si numIntento < numCorrecto Entonces
			Escribir "El numero ingresado es menor que el numero a adivinar.";
		FinSi
		
	FinMientras
	
	Escribir "El numero ingresado es el correcto!";
FinAlgoritmo