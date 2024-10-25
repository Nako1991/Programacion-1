Algoritmo cuentasBanco
	Definir nroCuenta, sumaAcreedores Como Entero;
	Definir saldo Como Real;
	sumaAcreedores = 0;
	Escribir "Comienze a ingresar los datos de las cuentas: (para finalizar ingrese un numero negativo como número de cuenta).";

	Hacer
		Escribir "Ingrese un Numero de Cuenta: ";
		Leer nroCuenta;
		
		Si nroCuenta >= 0 Entonces
			Escribir "Ingrese un saldo para esta cuenta: ";
			Leer saldo;
			
			Si saldo = 0 Entonces
				Escribir "El estado de la cuenta nro ", nroCuenta," es: Nulo.";
			FinSi
			
			Si saldo < 0 Entonces
				Escribir "El estado de la cuenta nro ", nroCuenta," es: Deudor.";
			FinSi
			
			Si saldo > 0 Entonces
				Escribir "El estado de la cuenta nro ", nroCuenta," es: Acreedor,";
				sumaAcreedores = sumaAcreedores + saldo;
			FinSi
			
		SiNo
			Escribir "Finalizando el ingreso de datos...";
		FinSi
		
	Hasta Que  nroCuenta < 0;
	
	Escribir "El total de la suma de los acreedores es de: ", sumaAcreedores;
FinAlgoritmo
