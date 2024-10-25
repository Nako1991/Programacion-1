//Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas
//mayores o iguales a 7 y cuántos menores.

Algoritmo notasRespectoASiete
	Definir i, cantNotas, notasMenores, notasMayores Como Entero;
	Definir nota Como Real;
	cantNotas = 10;
	notasMenores = 0;
	notasMayores = 0;
	
	Para i = 1 Hasta cantNotas Con Paso 1 Hacer
		Escribir "Ingrese la nota de uno de los alumnos: ";
		Leer nota;
		
		Si nota >= 7 Entonces
			notasMayores = notasMayores + 1;
		SiNo
			notasMenores = notasMenores + 1;
		FinSi
		
	FinPara
	
	Escribir "La cantidad de Alumnos con notas mayores o Iguales a 7 es de: ", notasMayores;
	Escribir "Y la de Alumnos con notas menores a 7 es de: ", notasMenores;
FinAlgoritmo
