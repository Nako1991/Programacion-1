//Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de
//Formalización de Algoritmos.

Algoritmo promedioAlumno
	Definir nroCalificaciones, i Como Entero;
	Definir promedio, calificacion, sumaCalificaciones Como Real;
	sumaCalificaciones = 0;
	nroCalificaciones = 7;
	
	Para i = 1 Hasta nroCalificaciones Con Paso 1 Hacer
		Escribir "Ingresar la calificacion numero ", i, ".";
		Leer calificacion;
		sumaCalificaciones = sumaCalificaciones + calificacion;
	Fin Para
	
	promedio = sumaCalificaciones / nroCalificaciones;
	Escribir "El promedio de calificaciones del Alumno en Formulización de Algoritmos es de: ", promedio, ".";
FinAlgoritmo
