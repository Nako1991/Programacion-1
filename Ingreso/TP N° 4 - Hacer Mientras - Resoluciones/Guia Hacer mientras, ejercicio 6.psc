//En el curso Formalización de Algoritmos existen N alumnos de los cuales se tiene la nota del
//primer parcial. Se pide realizar un algoritmo que permita hallar el promedio general de
//estos alumnos.

Algoritmo promedioGeneral
	Definir i, totalAlumnos Como Entero;
	Definir nota, sumaNota, promedio Como Real;
	i = 0;
	sumaNota = 0;
	Escribir "Ingrese la cantidad total de alumnos en el curso: ";
	Leer totalAlumnos;
	
	Hacer
		i = i + 1;
		Escribir "Ingrese la nota del primer parcial para el alumno nro ", i;
		Leer nota;
		
		Si nota > 10 O nota < 0 Entonces
			Escribir "La nota ingresada no es valida.";
			i = i - 1;  //retrocede el Loop 1 ciclo ya que el dato ingresado no es valido
		SiNo
			sumaNota = sumaNota + nota;
		FinSi
		
	Hasta Que i = totalAlumnos;
	
	promedio = sumaNota / totalAlumnos;
	Escribir "El promedio general del curso de ", totalAlumnos, " estudiantes es de ", promedio, ".";	
FinAlgoritmo
