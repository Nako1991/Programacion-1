//Un supermercado ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuánto deberá pagar 
//finalmente por su compra.
Algoritmo descuentoSuperMercado
	Definir valorCompra, valorCompraDescuento Como Real;
	Escribir "ingrese el valor de su compra";
	Leer valorCompra;
	valorCompraDescuento = valorCompra - ( valorCompra * 15/100 );
	Escribir "El valor de su compra con descuento es ", valorCompraDescuento;
FinAlgoritmo
