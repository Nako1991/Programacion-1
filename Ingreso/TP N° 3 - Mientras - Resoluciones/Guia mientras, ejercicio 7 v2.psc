//Una ONG tiene puntos de reparto de vacunas que se pretende que funcione de la siguiente
//manera: Cada día, empezar con 1000 vacunas disponibles y a través de un programa que
//controla las entregas , avisar si el inventario baja de 200 unidades.

Algoritmo controlVacunas
	Definir entregas, cantVacunas, cantAviso Como Entero;
	cantVacunas = 1000;
	cantAviso = 200;
	
	Mientras cantVacunas > 0 Hacer
		Escribir "Ingrese la cantidad de vacunas entregadas";
		Leer entregas;
		cantVacunas = cantVacunas - entregas;
		
		Si cantVacunas <= cantAviso Entonces
			Escribir "El stock de vacunas es menor que 200 unidades.";
		FinSi
		
	FinMientras
	
	Escribir "No hay mas vacunas en stock";
FinAlgoritmo
