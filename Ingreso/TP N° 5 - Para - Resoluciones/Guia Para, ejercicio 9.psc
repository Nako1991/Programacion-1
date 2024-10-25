//Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el
//multiplicando, el multiplicador y el producto.

Algoritmo tablaMultiplicar
	Definir i, cantMultiplicador Como Entero; //i funciona como multiplicador
	Definir multiplicando, producto Como Real;
	cantMultiplicador = 12;
	
	Escribir "Ingrese un numero para usar como Multiplicando: ";
	Leer multiplicando;
	
	Para i = 1 Hasta cantMultiplicador Con Paso 1 Hacer
		producto = multiplicando * i;
		Escribir "Multiplicando: ", multiplicando, ". Multiplicador: ", i, ". Producto: ", producto, ".";
	FinPara
	
FinAlgoritmo