//Realizar un algoritmo que calcule y visualice la sumatoria de los números del 1 al 20.

Algoritmo sumatoriaUnoAVeinte
	Definir i, sumatoria Como Entero;
	i = 1;
	sumatoria = 0;
	
	Mientras i < 21 Hacer
		sumatoria = sumatoria + i;
		i = i + 1;
		//Escribir sumatoria; //debug
	FinMientras
	
	Escribir sumatoria;
FinAlgoritmo
