//Un profesor desea saber qué porcentaje de hombres y qué porcentaje de mujeres hay en un grupo de estudiantes.
Algoritmo porcentajeGeneroEstudiantes 
	Definir estudiantes, masculinos, femeninos Como Entero;
	Definir porcentajeMasculino, porcentajeFemenino Como Real;
	Escribir "ingrese el total de estudiantes en el aula";
	Leer estudiantes;
	Escribir "ingrese la cantidad de estudiantes masculinos";
	Leer masculinos;
	Escribir "ingrese la cantidad de estudiantes femeninos";
	Leer femeninos;
	porcentajeMasculino = ( 100 * masculinos ) / estudiantes;
	Escribir "El porcentaje de alumnos de sexo masculino es de ", porcentajeMasculino;
	porcentajeFemenino = ( 100 * femeninos ) / estudiantes;
	Escribir "El porcentaje de alumnos de sexo femenino es de ", porcentajeFemenino;
FinAlgoritmo
