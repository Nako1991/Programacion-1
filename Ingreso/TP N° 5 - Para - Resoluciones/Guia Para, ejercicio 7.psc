//Leer 15 números negativos y convertirlos a positivos e imprimir dichos números.

Algoritmo negativoAPositivo
	Definir i, cantNumeros Como Entero;
	Definir num Como Real;
	cantNumeros = 15;
	
	Para i = 1 Hasta cantNumeros Con Paso 1 Hacer
		Escribir "Ingrese un numero negativo para convertirlo a positivo: ";
		Leer num;
		
		Si num >= 0 Entonces
			Escribir "El numero ingresado ya es positivo";
			i = i - 1; //Repite el ultimo Ciclo porque el numero no es negativo.
		SiNo
			num = abs(num);
			Escribir "El valor positivo del numero es: ", num;
		FinSi
		
	FinPara
	
FinAlgoritmo