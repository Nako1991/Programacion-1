//Suponga que se tiene un conjunto de calificaciones de un grupo de 30 alumnos. Realizar un
//algoritmo para calcular la calificación media (promedio) y la calificación más baja de todo el grupo.

Algoritmo mediaYMasBaja
	Definir i, cantCalificaciones Como Entero;
	Definir calificacion, promedio, suma, calificacionBaja Como Real
	cantCalificaciones = 30;
	suma = 0;
	
	Para i = 1 Hasta cantCalificaciones Con Paso 1 Hacer
		Escribir "Ingrese una calificacion: ";
		Leer calificacion;
		
		Si calificacion < 0 O calificacion > 10 Entonces
			Escribir "La calificacion solo puede ser de 0 a 10 inclusive.";
			i = i - 1; //Repite el loop ya que la calificacion no entra en los parametros.
		SiNo
			
			Si i = 1 Entonces
				suma = suma + calificacion;
				calificacionBaja = calificacion;
			SiNo
				suma = suma + calificacion;
				
				Si calificacionBaja > calificacion Entonces
					calificacionBaja = calificacion;
				FinSi
				
			FinSi
			
		FinSi
		
	FinPara
	
	promedio = suma / cantCalificaciones;
	Escribir "La calificacion promedio de toda la clase es de ", promedio, " y la calificacion más baja es de ", calificacionBaja, ".";
FinAlgoritmo
