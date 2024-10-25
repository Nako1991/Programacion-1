//Desarrolle un algoritmo que nos permita saber si una persona es mayor de edad (18 años)
Algoritmo esAdulto
	Definir dia, mes, anio, diaActual, mesActual, anioActual Como Entero
	//fecha actual 17 / 02 / 2023
	diaActual = 17;
	mesActual = 2;
	anioActual = 2023;
	Escribir "ingrese el año en el que nacio";
	Leer anio;
	Escribir "ingrese el mes en el que nacio";
	Leer mes;
	Escribir "ingrese el dia en el que nacio";
	Leer dia;
	
	Si ( anioActual-anio ) < 18 Entonces
		Escribir "La persona es menor de edad";
	FinSi
	
	Si ( anioActual-anio ) = 18 Entonces
		Si( mesActual >= mes ) Entonces
			Si ( diaActual < dia ) Entonces
				Escribir "La persona es menor de edad";
			SiNo
				Escribir "La persona es mayor de edad";
			FinSi
		SiNo
			Escribir "La persona es menor de edad";
		FinSi
	FinSi

	Si ( anioActual-anio ) > 18 Entonces
		Escribir "La persona es mayor de edad";
	FinSi
	
FinAlgoritmo
