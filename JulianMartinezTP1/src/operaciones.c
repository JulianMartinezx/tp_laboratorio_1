#include "operaciones.h"

void SumaDeOperandos(float operandos[],float resultadoOperaciones[])
{
	float resultadoSuma;

	resultadoSuma= operandos[0]+operandos[1];
	resultadoOperaciones[0]= resultadoSuma;
}
void RestaDeOperandos(float operandos[],float resultadoOperaciones[])
{
	float resultadoResta;

	resultadoResta= operandos[0]-operandos[1];
	resultadoOperaciones[1]= resultadoResta;
}
void DivisionDeOperandos(float operandos[],float resultadoOperaciones[])
{
	float resultadoDivision;

	resultadoDivision= operandos[0]/operandos[1];
	resultadoOperaciones[2]= resultadoDivision;
}
void MultiplicacionDeOperandos(float operandos[],float resultadoOperaciones[])
{
	float resultadoMultiplicacion;

	resultadoMultiplicacion= operandos[0]*operandos[1];
	resultadoOperaciones[3]= resultadoMultiplicacion;
}
int FactorialDeOperandos(int operando)
{
	int resultadoFactorial;
	if(operando==0)
	{
		resultadoFactorial = 1;
	}
	else
	{
		resultadoFactorial = operando * FactorialDeOperandos(operando-1);
	}
	return resultadoFactorial;
}
