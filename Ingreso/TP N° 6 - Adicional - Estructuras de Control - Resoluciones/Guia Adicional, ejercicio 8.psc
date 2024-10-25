//Definir un algoritmo que permita adivinar un n�mero entre 1 y 100. 
//El algoritmo deber� determinar al azar el n�mero a adivinar (utilizar funci�n azar() de PSeInt, 
//investigar su equivalente en lenguaje C). El usuario deber� ingresar primero un n�mero, si acert�, 
//el sistema le informar� por pantalla el acierto y luego terminar�. 
//Si el n�mero ingresado por el usuario es mayor o menor que el que tiene que adivinar, 
//el sistema lo informar� por pantalla y continuar� hasta que adivine.

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