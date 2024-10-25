//Una planta que fabrica perfiles de hierro posee un lote de n piezas. Confeccionar un
//programa que pida ingresar por teclado la cantidad de piezas a procesar y luego ingrese la
//longitud de cada perfil; sabiendo que la pieza cuya longitud esté comprendida en el rango
//de 1,20 y 1,30 son aptas. Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.

Algoritmo lotePerfiles
	Definir n, cantidadPiezas Como Entero;
	Definir medidaPerfil Como Real;
	n = 0;
	Escribir "Ingrese la cantidad de piezas a procesar ";
	Leer cantidadPiezas;
	
	Mientras cantidadPiezas > 0 Hacer
		Escribir "Ingrese la medida del perfil: ";
		Leer medidaPerfil;
		
		Si	medidaPerfil >= 1.2 Y medidaPerfil <= 1.3 Entonces
			Escribir "La pieza tiene las medidas correctas";
			n = n + 1;
		FinSi
		
		cantidadPiezas = cantidadPiezas - 1;
		//Escribir cantidadPiezas; //debug
	FinMientras
	
	Escribir "La cantidad de piezas aptas son ", n;
FinAlgoritmo
