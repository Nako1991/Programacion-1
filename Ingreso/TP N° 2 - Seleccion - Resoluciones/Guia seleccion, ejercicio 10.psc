Algoritmo algoritmoDosEnteros
	Definir num1, num2, resultado Como Entero;
	Escribir "Ingrese el primer numero entero: ";
	Leer num1;
	Escribir "Ingrese el segundo numero entero: ";
	Leer num2;
	
	Si num1 = num2 Entonces
		resultado = num1 * num2;
		Escribir "Los numeros son iguales, el resultado de su multiplicacion es de: ", resultado;
	FinSi
	
	Si num1 > num2 Entonces
		resultado = num1 - num2;
		Escribir "El primer numero es mayor que el segundo, el resultado de su resta es de: ", resultado;
	FinSi
	
	Si num1 < num2 Entonces
		resultado = num2 - num1;
		Escribir "El segundo numero es mayor que el primero, el resultado de su resta es de: ", resultado;
	FinSi
	
FinAlgoritmo
