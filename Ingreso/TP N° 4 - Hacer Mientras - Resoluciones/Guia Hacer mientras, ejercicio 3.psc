//Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina cuando ingresamos el valor 0. Se debe informar:
//		a) Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.? ¿Cuántas con más de 10.2 Kg.? ¿Cuántas con menos de 9.8 Kg.?
//		b) La cantidad total de piezas procesadas.

Algoritmo clasificadorDePiezas
	Definir kilos Como Real;
	Definir contadorTotal, contadorEntre, contadorMenor, contadorMayor Como Entero;
	contadorTotal = 0;
	contadorEntre = 0;
	contadorMenor = 0;
	contadorMayor = 0;
	
	Hacer
		Escribir "Ingrese el peso de la pieza: ";
		Leer kilos;
		
		Si kilos < 0 Entonces
			Escribir "El valor ingresado no es valido.";
		SiNo
			
			Si kilos < 9.8 Y kilos > 0 Entonces
				contadorMenor = contadorMenor + 1;
			FinSi
			
			Si	kilos >= 9.8 Y kilos <= 10.2 Entonces
				contadorEntre = contadorEntre + 1;
			FinSi
			
			Si kilos > 10.2 Entonces
				contadorMayor = contadorMayor + 1;
			FinSi
			
			Si kilos <> 0 Entonces
				contadorTotal = contadorTotal + 1;				
			FinSi
			
		FinSi
		
	Hasta Que kilos = 0;
	
	Escribir "Hay ", contadorMenor, " piezas de menos de 9.8 kilos.";
	Escribir "Hay ", contadorEntre, " piezas de entre 9.8 y 10.2 kilos.";
	Escribir "Hay ", contadorMayor, " piezas de más de 10.2 kilos.";
	Escribir "Hay ", contadorTotal, " piezas en total.";
FinAlgoritmo
