//Suponga que un individuo desea invertir su capital en un banco y desea saber cuanto dinero ganar� despu�s de un mes, 
//si el banco paga a raz�n de 2% mensual.
Algoritmo plazoFijoMensual
	Definir meses Como Entero;
	Definir capital, ganancia Como Real;
	Escribir "ingresar el n� de meses que desee invertir";
	Leer meses;
	Escribir "ingresar capital a invertir";
	Leer capital;
	ganancia = capital * 2/100 * meses;
	Escribir " su ganancia total es ", ganancia;
FinAlgoritmo
