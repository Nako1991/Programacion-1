//Leer valores del usuario hasta que introduzca un 0. El usuario puede introducir valores numéricos, 
//tanto positivos como negativos. Contar la cantidad de valores introducidos que sean mayores a 0 y el porcentaje de positivos respecto del total:
//Ingrese un número: 9
//Ingrese un número: 7
//Ingrese un número: -1
//Ingrese un número: 1
//Ingrese un número: 0
//	3 positivos, 75% del total


Algoritmo contarPositivos
	Definir cantValores, cantValoresPositivos Como Entero;
	Definir num, porcentaje Como Real;
	cantValores = 0;
	cantValoresPositivos = 0;
	
	Hacer
		Escribir "Ingrese un valor (para salir ingrese 0): ";
		Leer num;
		
		Si num <> 0 Entonces
			cantValores = cantValores + 1;
			
			Si	num > 0 Entonces
				cantValoresPositivos = cantValoresPositivos + 1;
			FinSi
			
		FinSi
		
	Hasta Que num = 0;
	
	porcentaje = cantValoresPositivos * 100 / cantValores;
	Escribir "La cantidad de numeros positivos es de: ", cantValoresPositivos;
	Escribir "El porcentaje de numeros positivos con respecto a los negativos es de: ", porcentaje, "%";
FinAlgoritmo
