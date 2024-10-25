//Realizar un algoritmo que permita ingresar un número e informe “Número mayor a cero” o
//“Número menor o igual a cero” según corresponda.
Algoritmo mayorOMenorACero
	Definir num Como Real;
	Escribir "ingrese un numero:";
	Leer num;
	
	Si num <= 0 Entonces
		Escribir "el numero ingresado es menor o igual a cero"
	SiNo
		Escribir "el numero ingresado es mayor a cero"
	FinSi
	
FinAlgoritmo