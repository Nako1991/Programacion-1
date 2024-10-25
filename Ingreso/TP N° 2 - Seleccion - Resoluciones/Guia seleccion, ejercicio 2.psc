//Desarrolle un algoritmo que permita leer dos números desde el teclado (deben ser diferentes)
//y nos muestre por pantalla cuál de los dos es más grande.
Algoritmo numeroMayor
	Definir numA, numB Como Real
	Escribir "ingrese un numero a comparar";
	Leer numA;
	Escribir "ingrese un segundo numero a comparar";
	Leer numB;
	
	Si numA < numB Entonces
		Escribir "el primer numero ingresado es menor que el segundo"
	SiNo
		Escribir "el numero ingresado es mayor al segundo numero"
	FinSi
	
FinAlgoritmo
