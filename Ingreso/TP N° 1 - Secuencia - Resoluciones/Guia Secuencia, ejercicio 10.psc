//Desarrolle un algoritmo que resuelva y calcule el área y perímetro de un rectángulo y nos
//muestre el resultado por pantalla.
Algoritmo calculoEdad
	Definir diasnacimiento, mesesnacimiento, anonacimiento, fechaActual, edad Como Entero;
	// fecha 17 / 02 / 2023
	fechaActual = 17 + 2*30 + 2023 * 365
	Escribir "ingrese el numero de dia del mes en el que nacio ";
	Leer diasnacimiento;
	Escribir "ingrese el numero de mes en el que nacio ";
	Leer mesesnacimiento;
	Escribir "ingrese el año en el que nacio ";
	Leer anonacimiento;
	edad = REDON( ( fechaActual - ( diasnacimiento + mesesnacimiento*30 + anonacimiento*365 ) ) / 365 ) - 1;
	Escribir "su edad es de ", edad;
FinAlgoritmo
