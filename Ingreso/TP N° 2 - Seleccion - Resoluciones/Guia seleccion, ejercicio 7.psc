Algoritmo salarioObrero
	Definir salario, salarioHora, salarioHoraExtra Como Real;
	Definir horas Como Entero;
	salarioHora = 300;
	salarioHoraExtra = 400;
	Escribir "Ingrese la cantidad de horas que el obrero trabajo esta semana: ";
	Leer horas;
	
	Si horas <= 40 Entonces
		salario = 300 * horas;
		Escribir "El salario del empleado es de: ", salario;
	Sino
		salario = salarioHora * 40 + salarioHoraExtra * ( horas - 40 );
		Escribir "El salario del empleado es de: ", salario;
	FinSi
	
FinAlgoritmo
