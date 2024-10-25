Algoritmo calculaMayor
	Definir num1, num2, num3 Como Real;
	Escribir "Ingrese el primer numero: ";
	Leer num1;
	Escribir "Ingrese el segundo numero: ";
	Leer num2;
	Escribir "Ingrese el tercer numero: ";
	Leer num3;
	
	// los 3 iguales
	Si num1 = num2 Y num1 = num3 Entonces
		Escribir "Los tres numeros son iguales";
	FinSi
	
	//los 2 primeros iguales
	Si num1 = num2 Y num1 <> num3 Entonces
		Escribir "El primer y el segundo numero son iguales";
		
		Si num1 > num3 Entonces
			Escribir "Los primeros dos numeros son los mayores";
		FinSi
		
	FinSi
	
	//los 2 ultimos iguales
	Si num2 = num3 Y num2 <> num1 Entonces
		Escribir "El segundo y el tercer numero son iguales";
		
		Si num2 > num1 Entonces
			Escribir "El segundo y el tercer numeros son los mayores";
		FinSi
		
	FinSi
	
	// todos distintos
	Si num1 <> num2 Y num1 <> num3 Entonces
		
		Si num1 > num2 Y num1 > num3 Entonces
			Escribir "El primer numero es el mayor";
		FinSi
		
		Si num2 > num1 Y num2 > num3 Entonces
			Escribir "El segundo numero es el mayor";
		FinSi
		
		Si num3 > num1 Y num3 > num2 Entonces
			Escribir "El tercer numero es el mayor";
		FinSi
		
	FinSi
	
FinAlgoritmo
