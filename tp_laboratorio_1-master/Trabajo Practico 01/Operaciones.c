#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
#include <math.h>

/** \brief Suma los 2 numeros ingresados por el usuario.
 *
 * \param primerNum es el primer numero ingresado.
 * \param segundoNum es el segundo numero ingresado.
 * \return Devuelve el resultado de sumar los numeros que el usuario haya ingresado.
 *
 */

float SumarNumeros(float primerNum, float segundoNum)
{
    float resultado;

    resultado = primerNum+segundoNum;

    return resultado;
}

/** \brief Resta los 2 numeros ingresados por el usuario.
 *
 * \param primerNum es el primer numero ingresado.
 * \param segundoNum es el segundo numero ingresado.
 * \return Devuelve el resultado de restar los numeros que el usuario haya ingresado.
 *
 */

float RestarNumeros(float primerNum, float segundoNum)
{
    float resultado;

    resultado = primerNum-segundoNum;

    return resultado;
}

/** \brief Divide los 2 numeros ingresados por el usuario.
 *
 * \param primerNum es el primer numero ingresado.
 * \param segundoNum es el segundo numero ingresado.
 * \return Devuelve el resultado de dividir los numeros que el usuario haya ingresado.
 *
 */

float DividirNumeros(float primerNum, float segundoNum)
{   //¿Necesario saber Cadenas?
    float resultado;

    resultado = primerNum/segundoNum;

    return resultado;
}

/** \brief Multiplica los 2 numeros ingresados por el usuario.
 *
 * \param primerNum es el primer numero ingresado.
 * \param segundoNum es el segundo numero ingresado.
 * \return Devuelve el resultado de multiplicar los numeros que el usuario haya ingresado.
 *
 */

float MultiplicarNumeros(float primerNum, float segundoNum)
{
    float resultado;

    resultado = primerNum*segundoNum;

    return resultado;
}

/** \brief Calcula el factorial de los dos numeros que el usuario ingresa, invocando por cada uno a la funcion CalcularFactorial.
 *
 * \param numerosIngresados es la variable en la que se capturan los valores cargados en las distintas posiciones de arrayNumerosIngresados para operarlos de a uno.
 * \param
 * \return La funcion devuelve distintos valores o mensajes dependiendo del valor ingresado. Abajo comento con mas detalle cada condicional.
 *
 */

float CalcularFactorial(float numerosIngresados)
{
    float resultado;

    if(numerosIngresados==0)// Si el valor ingresado por el usuario es igual a 0, la funcion automaticamente devuelve 1 que es el factorial de 0.
    {
        resultado=1;
    }else
    {
        if(fmod(numerosIngresados,2)!=0 && fmod(numerosIngresados,2)!=1)// Aca verifica que los numeros ingresados por el usuario sean enteros, y en caso contrario tira un mensaje de error.
        {                                                               // No encontre forma de hacer funcionar esta funcion con valores decimales. Creo que tiene que ver con el tamaño del tipo de
           resultado=0;                                                 // dato donde quiero guardar el resultado. Estimo que float tiene una capacidad de bits insuficiente, pero lo probe con double y tampoco pude.
        }else
        {
            resultado = numerosIngresados*CalcularFactorial(numerosIngresados-1); //En caso de que no haya ningun problema con los valores ingresados por el usuario, se los opera aca y se devuelve el factorial de cada valor.
        }
    }
    return resultado;
}
