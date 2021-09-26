#ifndef PEDIDOYMUESTRADEINFORMACION_H_
#define PEDIDOYMUESTRADEINFORMACION_H_
#include <stdio.h>

/// @fn void IngresoDeOperandos(float[], int)
/// @brief Esta es la funcion encargada de solicitar y guardar los valores a ser ingresados en caso de ser presionadas
/// 	   las opciones 1 o 2 del menu.
/// @param operandos En este vector (de dos posiciones) se guardan los valores ingresados por el usuario para ser utilizados
/// 	   mas tarde.
/// @param posicion Esta variable se encarga de (mediante un if) definir si el valor ingresado se guargada como Primer
/// 	   operando o como Segundo operando. Decidi trabajar con una funcion escalar (en vez de guardar los valores directamente
/// 	   en cada Case), para poder realizar esta tarea en una funcion y no hacerlo dentro del menu.
void IngresoDeOperandos(float operandos[],int posicion);

/// @fn void InformeDeResultados(float[], float[])
/// @brief Esta es la funcion encargada de mostrarle al usuario los resultados de cada una de las operaciones, segun
/// 	   los valores que ingreso. En caso de que el usuario ingresara un operador con el que la calculadora no pueda
/// 	   operar, en vez del resultado mostrara un mensaje de error.
/// @param operandos Es el vector donde vienen guardados los valores ingresados por el usuario.
/// @param resultadoOperaciones Es el vector donde vienen cargados los resultados a mostrar de cada operacion.
void InformeDeResultados(float operandos[],float resultadoOperaciones[]);

#endif /* PEDIDOYMUESTRADEINFORMACION_H_ */
