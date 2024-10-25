//Escribir un algoritmo que calcule y realice un porcentaje de descuento al precio de un
//artículo. El usuario debe ingresar ambos datos por teclado. Mostrar por pantalla el nuevo
//precio con el descuento.
Algoritmo calculaDescuento
	Definir precio, descuento, precioConDescuento Como Real;
	Escribir "ingrese el precio del articulo:";
	leer precio;
	Escribir "ingrese el porcentaje de descuento que se aplica al producto";
	Leer descuento;
	descuento = 1 - descuento / 100;
	precioConDescuento = precio * descuento;
	Escribir "el precio del articulo con descuento es de:", precioConDescuento;
FinAlgoritmo
