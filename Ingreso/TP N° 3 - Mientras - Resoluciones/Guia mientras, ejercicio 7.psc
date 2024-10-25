//Una ONG tiene puntos de reparto de vacunas que se pretende que funcione de la siguiente
//manera: Cada día, empezar con 1000 vacunas disponibles y a través de un programa que
//controla las entregas , avisar si el inventario baja de 200 unidades.

Algoritmo controlVacunas
	Definir aviso, cantVacunas, cantAviso Como Entero;
	cantVacunas = 1000;
	cantAviso = 200;
	aviso = 0;
	
	Mientras cantVacunas > 0 Hacer
		
		Si cantVacunas <= cantAviso Y aviso = 0 Entonces
			Escribir "El stock de vacunas bajo de 200 unidades.";
			aviso = 1;
		FinSi
		
		cantVacunas = cantVacunas - 1;
	FinMientras
	
FinAlgoritmo
