//Realizar un algoritmo que permita ingresar un n�mero e informe �N�mero mayor a cero� o
//�N�mero menor o igual a cero� seg�n corresponda.
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