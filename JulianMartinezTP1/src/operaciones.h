#ifndef OPERACIONES_H_
#define OPERACIONES_H_
#include <stdio.h>

/// @fn void SumaDeOperandos(float[], float[])
/// @brief Funcion encargada de la suma de los valores ingresados
/// @param operandos Este es el vector (de dos posiciones) donde vienen cargados los valores ingresados por el usuario
/// @param resultadoOperaciones Este es el vector (de 6 posiciones) donde se guardan los resultados de cada operacion
void SumaDeOperandos(float operandos[],float resultadoOperaciones[]);

/// @fn void RestaDeOperandos(float[], float[])
/// @brief Funcion encargada de la resta de los valores ingresados
/// @param operandos Es el mismo vector (con los valores ingresados por el usuario) que recibe la Funcion Suma
/// @param resultadoOperaciones Es el mismo vector donde se cargan los resultados de todas las operaciones
///
void RestaDeOperandos(float operandos[],float resultadoOperaciones[]);
/// @fn void DivisionDeOperandos(float[], float[])
/// @brief Funcion encargada de la division de los valores ingresados, a diferencia
/// 	   de las demas (y al igual que la funcion Factorial) esta trabaja con una validacion
/// @param operandos Es el mismo vector (con los valores ingresados por el usuario) que recibe la Funcion Suma
/// @param resultadoOperaciones Es el mismo vector donde se cargan los resultados de todas las operaciones
///
void DivisionDeOperandos(float operandos[],float resultadoOperaciones[]);

/// @fn void MultiplicacionDeOperandos(float[], float[])
/// @brief Funcion encargada de la multiplicacion de los valores ingresado
/// @param operandos Es el mismo vector (con los valores ingresados por el usuario) que recibe la Funcion Suma
/// @param resultadoOperaciones Es el mismo vector donde se cargan los resultados de todas las operaciones
void MultiplicacionDeOperandos(float operandos[],float resultadoOperaciones[]);

/// @fn int FactorialDeOperandos(int)
/// @brief La funcion Factorial, factorea los valores ingresados
/// 	   uno por uno, validandolos en primera instancia para despues realizar la operacion
/// @param operando En el caso de la funcion Factorial, no recibe al mismo tiempo los dos valores
/// 	   ingresados por el usuario, sino que los recibe y los opera de a uno mediante la variable Operando, de tipo entero
/// @return La funcion devuelve a su llamada el valor del numero ingresado tras ser factoreado
/// 	    y lo hace a traves de la variable ResultadoFactorial
int FactorialDeOperandos(int operando);

#endif /* OPERACIONES_H_ */
