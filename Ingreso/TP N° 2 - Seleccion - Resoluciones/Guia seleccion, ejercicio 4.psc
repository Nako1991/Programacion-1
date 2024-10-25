//Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobará si su promedio
//de tres calificaciones (valores enteros de 1 a 10) es mayor o igual a 6; reprueba en caso
//contrario.
Algoritmo aprobadoDesaprobado
	Definir calificacionA, calificacionB, calificacionC, promedio Como Real;
	Escribir "ingresar la calificacion del primer examen:";
	Leer calificacionA;
	Escribir "ingresar la calificacion del segundo examen:";
	Leer calificacionB;
	Escribir "ingresar la calificacion del tercer examen:";
	Leer calificacionC;
	promedio = ( calificacionA + calificacionB + calificacionC ) / 3;
	
	Si promedio >= 6 Entonces
		Escribir "el alumno esta aprobado";
	SiNo
		Escribir "el alumno esta desaprobado";
	FinSi
	
FinAlgoritmo
