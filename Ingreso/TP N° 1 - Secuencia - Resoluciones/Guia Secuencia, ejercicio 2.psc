//Se necesita saber el promedio de las notas de un estudiante del curso formalización de algoritmos, el mismo rindió 3 parciales.
Algoritmo promedioTresParciales
	Definir parcial1, parcial2, parcial3 , promedio Como Real;
	Definir cantidadParciales Como Entero;
	cantidadParciales = 3;
	Escribir "Ingrese la nota del primer parcial:";
	Leer parcial1;
	Escribir "Ingrese la nota del segundo parcial:";
	Leer parcial2;	
	Escribir "Ingrese la nota del tercer parcial:";
	Leer parcial3;
	promedio = ( parcial1 + parcial2 + parcial3 ) / cantidadParciales;
	Escribir "El promedio es:", promedio;
FinAlgoritmo
