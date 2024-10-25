Algoritmo descuentoCamisas
	Definir cantidadCamisas, descuento, descuentoTresOMas Como Entero;
	Definir saldoCompra, saldoCompraDescuento Como Real;
	descuento = 10; //descuento en %
	descuentoTresOMas = 20;
	Escribir "Ingrese el saldo total de la compra: ";
	Leer saldoCompra;
	Escribir "Ingrese la cantidad de camisas que se compraron (si se compran 3 o más tendra más descuento): ";
	Leer cantidadCamisas;
	
	Si cantidadCamisas < 3 Entonces
		saldoCompraDescuento = saldoCompra - ( saldoCompra * descuento / 100 );
		Escribir "El valor de su compra con descuento es de: ", saldoCompraDescuento;
	SiNo
		saldoCompraDescuento = saldoCompra - ( saldoCompra * descuentoTresOMas / 100 );
		Escribir "El valor de su compra con descuento de tres camisas o más es de: ", saldoCompraDescuento;
	FinSi
	
FinAlgoritmo
