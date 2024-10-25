#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seccionTP0, nroEjercicio, salirTP0;

    //SECCION 1
    //1. Suponga que un individuo desea invertir su capital en un banco y desea saber
    //cuánto dinero ganará después de un mes si el banco paga a razón de 2% mensual.
    int ejercicioA1()
    {
        int meses;
        float inversion, ganancia;

        printf("\nIngrese la cantidad de dinero a invertir: ");
        scanf("%f", &inversion);
        //printf("%f", inversion); //debug

        if (inversion >= 0)
        {
            printf("\nIngrese la cantidad de meses que desea mantener su inversion: ");
            scanf("%i", &meses);
            //printf("%i", meses); //debug
            ganancia = inversion * 2/100 * meses;
            printf("\nLa ganancia es de: %f", ganancia);
        }
        else
        {
            printf("\nEl valor ingresado no es valido.");
        }

    }

    //2. Una tienda ofrece un descuento del 15% sobre el total de la compra y un
    //cliente desea saber cuánto deberá pagar finalmente por su compra.
    int ejercicioA2()
    {
        int descuento;
        float compra, compraDescuento;
        descuento = 15;

        printf("\nIngrese el valor de la compra: ");
        scanf("%f", &compra);
        //printf("%f", compra); //debug

        if (compra >= 0)
        {
            compraDescuento = compra - ( compra * descuento/100 );
            //printf("%f", compraDescuento); //debug
            printf("\nSe le aplicara un descuento del 15%% sobre el valor de su compra.");
            printf("\nEl valor de la compra con el descuento es de: %f", compraDescuento);
        }
        else
        {
            printf("\nEl valor ingresado no es valido.");
        }

    }

    //3. Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes.
    int ejercicioA3()
    {
        int nroAlumnos, nroMujeres, nroHombres;
        float porcentajeHombres, porcentajeMujeres, porcentajeNoBinario;

        printf("\nIngrese la cantidad total de alumnos en la clase: ");
        scanf("%i", &nroAlumnos);
        printf("\nIngrese la cantidad de hombres en el curso: ");
        scanf("%i", &nroHombres);
        printf("\nIngrese la cantidad de mujeres en el curso: ");
        scanf("%i", &nroMujeres);

        if ( ((nroHombres + nroMujeres) > nroAlumnos) || (nroAlumnos < 0) || (nroHombres < 0) || (nroMujeres < 0) )
        {
            printf("\nLa cantidad de Alumnos ingresada no es valida...");
        }
        else
        {
            porcentajeHombres = nroHombres * 100 / nroAlumnos;
            printf("\nEl porcentaje de Hombres en el curso es de: %f", porcentajeHombres);

            porcentajeMujeres = nroMujeres * 100 / nroAlumnos;
            printf("\nEl porcentaje de Mujeres en el curso es de: %f", porcentajeMujeres);

            porcentajeNoBinario = (nroAlumnos - nroHombres - nroMujeres) * 100 / nroAlumnos;
            printf("\nEl porcentaje de Alumnos No Binarios en el curso es de: %f", porcentajeNoBinario);
        }

    }

    //SECCION 2
    //1. Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobará si su
    //promedio de tres calificaciones es mayor o igual a 7; reprueba en caso contrario.
    int ejercicioB1()
    {
        int cantCalificaciones;
        float calificacion1, calificacion2, calificacion3, promedio;
        cantCalificaciones = 3;

        printf("\nIngrese la calificacion del primer examen: ");
        scanf("%f", &calificacion1);

        printf("\nIngrese la calificacion del segundo examen: ");
        scanf("%f", &calificacion2);

        printf("\nIngrese la calificacion del tercer examen: ");
        scanf("%f", &calificacion3);

        if ( (calificacion1 < 1) || (calificacion2 < 1) || (calificacion3 < 1) || (calificacion1 > 10) || (calificacion2 > 10) || (calificacion3 > 10) )
        {
            printf("\nAl menos una de las calificaciones no es valida...");
        }
        else
        {
            promedio = ( calificacion1 + calificacion2 + calificacion3 ) / cantCalificaciones;
            printf("\nEl promedio de calificaciones del alumno es de: %f", promedio);
        }

    }

    //2. En un almacén se hace un 20% de descuento a los clientes cuya compra supere los
    //$5000 ¿Cuál será la cantidad que pagará una persona por su compra?
    int ejercicioB2()
    {
        float descuento, compra, compraDescuento;
        descuento = 20;

        printf("\nIngrese el saldo total de su compra: ");
        scanf("%f", &compra);

        if ( compra > 5000 )
        {
            printf("\nSu compra obtiene un descuento del 20%%.");
            compraDescuento = compra - ( compra * descuento / 100 );
            printf("\nEl saldo de su compra con descuento es de: %f", compraDescuento);
        }
        else if ( compra < 0)
        {
            printf("\nEl valor de su compra no es valido.");
        }
        else
        {
            printf("\nSu compra es menor a 5000 y no tiene descuento.");
        }

    }

    //3. Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera: Si
    //trabaja 40 horas o menos se le paga $300 por hora Si trabaja más de 40 horas se le
    //paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.
    int ejercicioB3()
    {
        float horasTrabajadas, minHorasExtra, salario, pagoHora, pagoHoraExtra;
        minHorasExtra = 40;
        pagoHora = 300;
        pagoHoraExtra = 400;

        printf("\nIngrese la cantidad de horas trabajadas en la semana: ");
        scanf("%f", &horasTrabajadas);

        if ( (horasTrabajadas < 0) || (horasTrabajadas >= 168) )
        {
            printf("\nLa cantidad de horas trabajadas no es valida...");
        }
        else if ( (horasTrabajadas >= 0) && (horasTrabajadas <= minHorasExtra) )
        {
            salario = horasTrabajadas * pagoHora;
            printf("\nEl salario del empleado sin horas extra es de: %f", salario);
        }
        else if ( (horasTrabajadas > minHorasExtra) && (horasTrabajadas < 168) )
        {
            salario = minHorasExtra * pagoHora + ( horasTrabajadas - minHorasExtra ) * pagoHoraExtra;
            printf("\nEl salario del empleado con horas extra es de: %f", salario);
        }

    }

    //4. Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente
    int ejercicioB4()
    {
        float num1, num2;

        printf("\nIngrese un numero a comparar: ");
        scanf("%f", &num1);

        printf("\nIngrese otro numero a comparar: ");
        scanf("%f", &num2);

        if ( num1 <= num2 )
        {
            printf("\n%f, %f", num1, num2);
        }
        else if ( num1 > num2 )
        {
            printf("\n%f, %f", num2, num1);
        }

    }

    //5. Hacer un algoritmo que calcule el total a pagar por la compra de camisas. Si se
    //compran tres camisas o mas se aplica un descuento del 20% sobre el total de la compra
    //y si son menos de tres camisas un descuento del 10%
    int ejercicioB5()
    {
        int nroCamisas;
        float compra, compraDescuento, descuentoMenor, descuento3OMas;
        descuentoMenor = 10;
        descuento3OMas = 20;

        printf("\nIngrese la cantidad de camisas que desea comprar: ");
        scanf("%i", &nroCamisas);

        printf("\nIngrese el saldo total de su compra: ");
        scanf("%f", &compra);

        if ( compra > 0 )
        {

            if ( nroCamisas <= 0 )
            {
                printf("\nLa cantidad de camisas ingresada no es valida...");
            }
            else if ( (nroCamisas > 0) && (nroCamisas < 3) )
            {
                printf("\nSe le aplicara un descuento del %f%% a su compra.", descuentoMenor);
                compraDescuento = compra - ( compra * descuentoMenor / 100 );
                printf("\nEl valor de su compra con el descuento es de: %f", compraDescuento);
            }
            else
            {
                printf("\nSe le aplicara un descuento del %f%% a su compra.", descuento3OMas);
                compraDescuento = compra - ( compra * descuento3OMas / 100 );
                printf("\nEl valor de su compra con el descuento es de: %f", compraDescuento);
            }

        }
        else
        {
            printf("\nEl saldo de su compra no es valido...");
        }

    }

    //SECCION 3
    //1. Leer 2 números; si son iguales que los multiplique, si el primero es mayor que el
    //segundo que los reste y si no que los sume.
    int ejercicioC1()
    {
        float num1, num2, resultado;

        printf("\nIngrese el primer numero: ");
        scanf("%f", &num1);

        printf("\nIngrese el segundo numero: ");
        scanf("%f", &num2);

        if ( num1 == num2 )
        {
            printf("\nLos numeros son iguales");
            resultado = num1 * num2;
            printf("\nEl resultado de su multiplicacion es de: %f", resultado);
        }
        else if ( num1 > num2 )
        {
            printf("\nEl primer numero es mayor que el segundo");
            resultado = num1 - num2;
            printf("\nEl resultado de restar el segundo al primero es: %f", resultado);
        }
        else
        {
            printf("\nEl segundo numero es mayor que el primero");
            resultado = num1 + num2;
            printf("\nEl resultado de sumar el primer numero con el segundo es: %f", resultado);
        }

    }

    //2. Leer tres números diferentes e imprimir el número mayor de los tres.
    int ejercicioC2()
    {
        float num1, num2, num3;

        printf("\nIngrese el primer numero: ");
        scanf("%f", &num1);

        printf("\nIngrese el segundo numero: ");
        scanf("%f", &num2);

        printf("\nIngrese el tercer numero: ");
        scanf("%f", &num3);

        //posibilidades: num1, num2, num3
        //
        //num1 = num2 = num3      todos iguales
        //num1 != num2 = num3     num1 > num2=num3
        //                        num1 < num2=num3
        //num2 != num1 = num3     num2 > num1=num3
        //                        num2 < num1=num3
        //num3 != num1 = num2     num3 > num1=num2
        //                        num3 < num1=num2
        //num1 != num2 != num3
        //num1 > num2y3
        //num2 > num1y3
        //num3 > num1y2

        if ( (num1 == num2) && (num1 == num3) )
        {
            printf("\nLos tres numeros son iguales.");
        }
        else if ( (num1 != num2) && (num2 == num3) )
        {
            if ( num1 > num2 )
            {
                printf("\nEl primer numero es mayor que el segundo y el tercero que son iguales.");
                printf("\nEl mayor es: %f", num1);
            }
            else
            {
                printf("\nEl segundo numero es igual al tercero y ambos son mayores que el primero.");
                printf("\nEl mayor es: %f", num2);
            }
        }
        else if ( (num2 != num1) && (num1 == num3) )
        {
            if ( num2 > num1 )
            {
                printf("\nEl segundo numero es mayor que el primero y el tercero que son iguales.");
                printf("\nEl mayor es: %f", num2);
            }
            else
            {
                printf("\nEl primer numero es igual al tercero y ambos son mayores que el primero.");
                printf("\nEl mayor es: %f", num1);
            }
        }
        else if ( (num3 != num1) && (num1 == num2) )
        {
            if ( num3 > num1 )
            {
                printf("\nEl tercer numero es mayor que el primero y el segundo que son iguales.");
                printf("\nEl mayor es: %f", num3);
            }
            else
            {
                printf("\nEl primer numero es igual al segundo y ambos son mayores que el tercero.");
                printf("\nEl mayor es: %f", num1);
            }
        }
        else if ( (num1 != num2) && (num1 != num3) )
        {
            if ( (num1 > num2) && (num1 > num3) )
            {
                printf("\nEl primer numero es el mayor.");
                printf("\nEl mayor es: %f", num1);
            }
            else if ( (num2 > num1) && (num2 > num3) )
            {
                printf("\nEl segundo numero es el mayor.");
                printf("\nEl mayor es: %f", num2);
            }
            else if ( (num3 > num1) && (num3 > num2) )
            {
                printf("\nEl tercer numero es el mayor.");
                printf("\nEl mayor es: %f", num3);
            }
        }

    }

    //SECCION 4
    //1. Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de
    //Programación 1
    int ejercicioD1()
    {
        int nroCalificaciones, i;
        float calificacion, suma, promedio;
        nroCalificaciones = 7;
        suma = 0;

        for ( i = 0 ; i < 7 ; i++ )
        {
            printf("\nIngrese una calificacion: ");
            scanf("%f", &calificacion);

            if ( (calificacion < 1) || (calificacion > 10) )
            {
                printf("\nLa calificacion ingresada no es valida.");
                i--; //Vuelve a repetir el ultimo bucle
            }
            else
            {
                suma = suma + calificacion;
            }

        }

        promedio = suma / nroCalificaciones;
        printf("\nEl promedio de notas del alumno es de: %f", promedio);
    }

    //2. Leer 10 números y obtener su cubo y su cuarta.
    int ejercicioD2()
    {
        int num, cuarta, cubo, i;

        printf("\nIngrese 10 numeros para calcular su cuarta y su cubo.");

        for ( i = 0 ; i < 10 ; i++ )
        {
            printf("\nIngrese un numero: ");
            scanf("%i", &num);

            cuarta = num * num;
            printf("\nLa cuarta del numero es: %i", cuarta);

            cubo = num * num * num;
            printf("\nEl cubo del numero es: %i", cubo);
        }

    }

    //3. Leer 10 números e imprimir solamente los números positivos
    int ejercicioD3()
    {
        int i;
        float num;

        printf("\nIngrese 10 numeros para imprimir solo los positivos.");

        for ( i = 0 ; i < 10 ; i++ )
        {
            printf("\nIngrese un numero: ");
            scanf("%f", &num);

            if ( num > 0 )
            {
                printf("\nEl numero %f es positivo.", num);
            }
            else
            {
                printf("\nEl numero no es positivo.");
            }
        }

    }

    //4. Leer 15 números negativos y convertirlos en positivos e imprimir dichos números.
    int ejercicioD4()
    {
        int i;
        float num, numPositivo;

        printf("\nIngrese 15 numeros negativos para convertirlos en positivos.");

        for ( i = 0 ; i < 15 ; i++ )
        {
            printf("\nIngrese un numero: ");
            scanf("%f", &num);

            if ( num < 0 )
            {
                numPositivo = -num;
                printf("\nEl numero convertido a positivo es: %f", numPositivo);
            }
            else
            {
                printf("\nEl numero no es negativo.");
                i--;
            }
        }

    }

    //5. Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.
    //Realizar un algoritmo para calcular la calificación promedio y la calificación más baja de
    //todo el grupo.
    int ejercicioD5()
    {
        int nroAlumnos, i;
        float calificacion, suma, promedio, calificacionBaja;
        nroAlumnos = 40; // i < 5 como ejemplo, modificar a 40 para el ejercicio
        suma = 0;

        printf("\nIngrese las calificaciones de los 40 alumnos.");

        for ( i = 0 ; i < nroAlumnos ; i++ )
        {
            printf("\nIngrese una calificacion: ");
            scanf("%f", &calificacion);

            if ( (calificacion >= 1) && (calificacion <= 10) )
            {
                //asigna el primer valor a calificacionBaja para luego compararlo
                if ( i == 0 )
                {
                    calificacionBaja = calificacion;
                }

                //compara calificacionBaja y si es mayor a calificacion la iguala
                if ( calificacionBaja > calificacion)
                {
                    calificacionBaja = calificacion;
                }

                suma = suma + calificacion;
            }
            else
            {
                printf("\nLa calificacion ingresada no es valida.");
                i--;
            }
        }

        promedio = suma / nroAlumnos;
        printf("\nEl promedio de la clase es de: %f", promedio);
        printf("\nLa calificacion mas baja es de: %f", calificacionBaja);
    }

    //6. Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el
    //multiplicando, el multiplicador y el producto.
    int ejercicioD6()
    {
        int i;
        float num, producto;

        printf("\nIngrese un numero para calcular su tabla de multiplicar: ");
        scanf("%f", &num);

        for ( i = 1 ; i <= 15 ; i++ )
        {
            producto = num * i;
            printf("\nMultiplicando: %f  ; Multiplicador: %i  ; Producto: %f", num, i, producto);
        }

    }

    //MENU SECCION 1 - Problemas Secuenciales
    int seccion1()
    {
        printf("\n\n1. Suponga que un individuo desea invertir su capital en un banco y desea saber");
        printf("\ncuanto dinero ganara despues de un mes si el banco paga a razon de 2%% mensual.");

        printf("\n\n2. Una tienda ofrece un descuento del 15%% sobre el total de la compra y un");
        printf("\ncliente desea saber cuanto debera pagar finalmente por su compra.");

        printf("\n\n3. Un maestro desea saber que porcentaje de hombres y que porcentaje de mujeres");
        printf("\nhay en un grupo de estudiantes.");

        printf("\n\nIngrese el numero del Ejercicio que desee ejecutar (0 para salir): ");
        scanf("%i", &nroEjercicio);
        //printf("nroEjercicio: %i", nroEjercicio); //debug

        switch (nroEjercicio)
        {
        case 0:
            salirTP0 = 0;
            break;
        case 1:
            ejercicioA1();
            break;
        case 2:
            ejercicioA2();
            break;
        case 3:
            ejercicioA3();
            break;
        default:
            printf("\nEl ejercicio ingresado no es valido...");
            break;
        }

    }

    //MENU SECCION 2 - Problemas Condicionales Selectivos Simples
    int seccion2()
    {
        printf("\n\n1. Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su");
        printf("\npromedio de tres calificaciones es mayor o igual a 7 y reprueba en caso contrario.");

        printf("\n\n2. En un almacen se hace un 20%% de descuento a los clientes cuya compra supere los");
        printf("\n$5000 .Cual sera la cantidad que pagara una persona por su compra?");

        printf("\n\n3. Un obrero necesita calcular su salario semanal, el cual se obtiene de la sig. manera: ");
        printf("\nsi trabaja 40 horas o menos se le paga $300 por hora Si trabaja mas de 40 horas se le");
        printf("\npaga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.");

        printf("\n\n4. Desarrolle un algoritmo que lea dos numeros y los imprima en forma ascendente");

        printf("\n\n5. Hacer un algoritmo que calcule el total a pagar por la compra de camisas. Si se");
        printf("\ncompran tres camisas o mas se aplica un descuento del 20%% sobre el total de la compra");
        printf("\ny si son menos de tres camisas un descuento del 10%%");

        printf("\n\nIngrese el numero del Ejercicio que desee ejecutar (0 para salir): ");
        scanf("%i", &nroEjercicio);

        switch (nroEjercicio)
        {
        case 0:
            salirTP0 = 0;
            break;
        case 1:
            ejercicioB1();
            break;
        case 2:
            ejercicioB2();
            break;
        case 3:
            ejercicioB3();
            break;
        case 4:
            ejercicioB4();
            break;
        case 5:
            ejercicioB5();
            break;
        default:
            printf("\nEl ejercicio ingresado no es valido...");
            break;
        }
    }

    //MENU SECCION 3 - Problemas Condicionales Selectivos Compuestos (si anidados o en cascada)
    int seccion3()
    {
        printf("\n\n1. Leer 2 numeros; si son iguales que los multiplique, si el primero es mayor");
        printf("\nque el segundo que los reste y si no que los sume. ");

        printf("\n\n2. Leer tres numeros diferentes e imprimir el numero mayor de los tres.");

        printf("\n\nIngrese el numero del Ejercicio que desee ejecutar (0 para salir): ");
        scanf("%i", &nroEjercicio);

        switch (nroEjercicio)
        {
        case 0:
            salirTP0 = 0;
            break;
        case 1:
            ejercicioC1();
            break;
        case 2:
            ejercicioC2();
            break;
        default:
            printf("\nEl ejercicio ingresado no es valido...");
            break;
        }
    }

    //MENU SECCION 4 - Problemas con repeticiones
    int seccion4()
    {
        printf("\n\n1. Calcular el promedio de un alumno que tiene 7 calificaciones en");
        printf("\nla materia de Programacion 1");

        printf("\n\n2. Leer 10 numeros y obtener su cubo y su cuarta.");

        printf("\n\n3. Leer 10 numeros e imprimir solamente los numeros positivos");

        printf("\n\n4. Leer 15 numeros negativos y convertirlos en positivos e imprimir dichos numeros.");

        printf("\n\n5. Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.");
        printf("\nRealizar un algoritmo para calcular la calificación promedio y la calificacion mas baja de");
        printf("\ntodo el grupo.");

        printf("\n\n6. Calcular e imprimir la tabla de multiplicar de un numero cualquiera. Imprimir el");
        printf("\nmultiplicando, el multiplicador y el producto.");

        printf("\n\nIngrese el numero del Ejercicio que desee ejecutar (0 para salir): ");
        scanf("%i", &nroEjercicio);

        switch (nroEjercicio)
        {
        case 0:
            salirTP0 = 0;
            break;
        case 1:
            ejercicioD1();
            break;
        case 2:
            ejercicioD2();
            break;
        case 3:
            ejercicioD3();
            break;
        case 4:
            ejercicioD4();
            break;
        case 5:
            ejercicioD5();
            break;
        case 6:
            ejercicioD6();
            break;
        default:
            printf("\nEl ejercicio ingresado no es valido...");
            break;
        }
    }

    //MENU PRINCIPAL
    do
    {
        printf("\nTecnico Universitario en Programacion");
        printf("\n\nProgramacion I y Laboratorio I");
        printf("\n\nTrabajo Practico 0 - Inicial");

        printf("\n\n1. Problemas Secuenciales");
        printf("\n2. Problemas Condicionales Selectivos Simples");
        printf("\n3. Problemas Condicionales Selectivos Compuestos (si anidados o en cascada)");
        printf("\n4. Problemas con repeticiones");

        printf("\n\nIngrese la seccion del TP que desea ejecutar (0 para salir): ");
        scanf("%i", &seccionTP0);

        switch (seccionTP0)
        {
        case 0:
            salirTP0 = 0;
            break;
        case 1:
            seccion1();
            break;
        case 2:
            seccion2();
            break;
        case 3:
            seccion3();
            break;
        case 4:
            seccion4();
            break;
        default:
            printf("\nLa seccion del TP ingresada no es valida...");
            break;
        }

        if (salirTP0 != 0)
        {
            printf("\n\nDesea salir del TP0? (0 para salir, otro numero para continuar): ");
            scanf("%i", &salirTP0);
            //printf("%i", salirTP0); //debug
        }

    }
    while (salirTP0 != 0);

    printf("\nSaliendo del programa...\n");
}
