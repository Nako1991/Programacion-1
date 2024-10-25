//4) Cantidad de elementos
//Leer valores del usuario hasta que introduzca un 0. Contar la cantidad de valores introducidos y al finalizar informarlo por pantalla:
//Ingrese un número: 9
//Ingrese un número: 7
//Ingrese un número: -1
//Ingrese un número: 1
//Ingrese un número: 0
//Cantidad de elementos ingresados: 4


Algoritmo contidadValores
	Definir cantValores Como Entero;
	Definir num Como Real;
	cantValores = 0;
	
	Hacer
		Escribir "Ingresar un numero (para salir ingrese 0): ";
		Leer num;
		
		Si num <> 0 Entonces
			cantValores = cantValores + 1;
		FinSi
		
	Hasta Que num = 0;
	
	
	Escribir "La cantidad de numeros ingresados fue de: ", cantValores;
FinAlgoritmo
