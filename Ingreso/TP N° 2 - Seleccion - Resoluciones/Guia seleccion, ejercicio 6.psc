Algoritmo descuentoCompraMayor
	Definir valorCompra, compraConDescuento, descuento Como Real;
	descuento = 20;
	Escribir "Ingrese el valor de su compra (compras superiores a 5000 tienen un 20% de descuento):";
	Leer valorCompra;
	
	Si valorCompra >= 5000 Entonces
		compraConDescuento = valorCompra - ( valorCompra * descuento / 100 );
		Escribir "Su compra ha sido seleccionada para el descuento, el total a pagar es de:", compraConDescuento;
	SiNo
		Escribir "El valor de su compra no es suficiente para recibir el descuento";
	FinSi
	
FinAlgoritmo