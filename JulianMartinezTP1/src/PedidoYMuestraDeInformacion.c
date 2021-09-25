#include "PedidoYMuestraDeInformacion.h"

void IngresoDeOperandos(float operandos[],int posicion)
{
	if(posicion==1)
	{
		printf("Ingrese un Operando: ");
		scanf("%f",&operandos[0]);
	}else
	{
		printf("Ingrese un Operando: ");
		scanf("%f",&operandos[1]);
	}
}
void InformeDeResultados(float operandos[],float resultadoOperaciones[])
{
	printf("a) El resultado de %.2f+%.2f es: %.2f\n",operandos[0],operandos[1],resultadoOperaciones[0]);//Informe de la suma
	printf("b) El resultado de %.2f-%.2f es: %.2f\n",operandos[0],operandos[1],resultadoOperaciones[1]);//Informe de la resta
	if(operandos[1]==0)
	{
		printf("No es posible dividir por 0.\n");
	}
	else
	{
		printf("c) El resultado de %.2f/%.2f es: %.2f\n",operandos[0],operandos[1],resultadoOperaciones[2]);//Informe de la division
	}
	printf("d) El resultado de %.2f*%.2f es: %.2f\n",operandos[0],operandos[1],resultadoOperaciones[3]);//Informe de la multiplicacion
	if(resultadoOperaciones[4]==-1)
	{
		printf("Respecto al %.2f No es posible calcular el factorial de un numero con coma, negativo o mayor a 13.\n",operandos[0]);
	}else
	{
		printf("e) El factorial de %.2f es: %.2f",operandos[0],resultadoOperaciones[4]);//Informe del primer factorial
	}
	if(resultadoOperaciones[5]==-1)
	{
		printf("Respecto al %.2f No es posible calcular el factorial de un numero con coma, negativo o mayor a 13.\n",operandos[1]);
	}else
	{
		printf(" y El factorial de %.2f es: %.2f\n",operandos[1],resultadoOperaciones[5]);//Informe del segundo factorial
	}
}
