//Desarrolle un algoritmo que resuelva y calcule el área y perímetro de un rectángulo y nos
//muestre el resultado por pantalla.
Algoritmo areaYPerimetroRectangulo
	Definir ladoA, ladoB, area, perimetro Como Real;
	Escribir "ingrese el valor del lado A";
	Leer ladoA;
	Escribir "ingrese el valor del lado B";
	Leer ladoB;
	perimetro = ladoA*2 + ladoB*2;
	area = ladoA*ladoB;
	Escribir "el area del rectangulo es de ", area;
	Escribir "el perimetro del rectangulo es de ", perimetro;
FinAlgoritmo
