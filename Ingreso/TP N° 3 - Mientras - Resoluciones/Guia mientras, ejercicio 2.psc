//Desarrolle un algoritmo que permita visualizar los números impares entre el 1 y el 20.
Algoritmo mostrarImpares
	Definir i, resto Como Entero;
	i = 1;
	
	Mientras i < 21 Hacer
		resto = i mod 2;
		
		Si resto = 1 Entonces
			Escribir i;
		FinSi
		
		i = i +  1;
	FinMientras
	
FinAlgoritmo
