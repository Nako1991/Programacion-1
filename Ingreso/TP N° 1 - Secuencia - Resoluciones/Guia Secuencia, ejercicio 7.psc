//Desarrolle un algoritmo que calcule la hipotenusa de un tri�ngulo rect�ngulo conociendo
//sus dos catetos y muestre el resultado por pantalla.
Algoritmo calculoHipotenusa
	Definir catetoA, catetoB, hipotenusa Como Real;
	Escribir "ingrese el valor del cateto A";
	Leer catetoA;
	Escribir "ingrese el valor del cateto B";
	Leer catetoB;
	hipotenusa = raiz( ( catetoA ^ 2 ) + ( catetoB ^ 2 ) );
	Escribir "la hipotenusa es ", hipotenusa;
FinAlgoritmo
