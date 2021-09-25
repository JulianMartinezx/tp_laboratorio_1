/*
 ============================================================================
 Julian Martinez N.

1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "PedidoYMuestraDeInformacion.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int posicion;
	float operandos[2];
	int factorialDelPrimero;
	int factorialDelSegundo;
	float resultadoOperaciones[6];

	do
	{
		printf("1. Ingresar 1er operando (A=%.2f)\n",operandos[0]);
		printf("2. Ingresar 2do operando (B=%.2f)\n",operandos[1]);
		printf("3. Calcular todas las operaciones a) Calcular la suma (A+B) b) Calcular la resta (A-B) c) Calcular la division (A/B) d) Calcular la multiplicacion (A*B) e) Calcular el factorial (A!)\n");
		printf("4. Informar resultados a) “El resultado de A+B es: r” b) “El resultado de A-B es: r” c) “El resultado de A/B es: r” o “No es posible dividir por cero” d) “El resultado de A*B es: r” e) “El factorial de A es: r1 y El factorial de B es: r2”\n");
		printf("5. Salir\n");
		printf("Elija una opcion: \n");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
				posicion= 1;
				IngresoDeOperandos(operandos, posicion);
			break;
			case 2:
				posicion= 2;
				IngresoDeOperandos(operandos, posicion);
			break;
			case 3:
				SumaDeOperandos(operandos, resultadoOperaciones);
				RestaDeOperandos(operandos, resultadoOperaciones);
				DivisionDeOperandos(operandos, resultadoOperaciones);
				MultiplicacionDeOperandos(operandos, resultadoOperaciones);
				if((int)operandos[0]-operandos[0]==0 && operandos[0]>=0 && operandos[0]<13)
				{
					factorialDelPrimero=operandos[0];
					factorialDelPrimero= FactorialDeOperandos(factorialDelPrimero);//Llamado a Factorial
					resultadoOperaciones[4]=factorialDelPrimero;
				}else
				{
					resultadoOperaciones[4]=-1;
				}
				if((int)operandos[1]-operandos[1]==0 && operandos[1]>=0 && operandos[1]<13)
				{
					factorialDelSegundo=operandos[1];
					factorialDelSegundo= FactorialDeOperandos(factorialDelSegundo);//Llamado a Factorial
					resultadoOperaciones[5]=factorialDelSegundo;
				}else
				{
					resultadoOperaciones[5]=-1;
				}
			break;
			case 4:
				InformeDeResultados(operandos,resultadoOperaciones);
			break;
		}
	}while(opcion!=5);

	return EXIT_SUCCESS;
}
