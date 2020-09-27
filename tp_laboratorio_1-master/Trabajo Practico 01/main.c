//Antes que nada, y mas alla de la aceptacion del trabajo o no,
//quiero pedir disculpas de corazon por la demora en la entrega.
//Por problemas personales no consegui darle desde un comienzo a la
//carrera el tiempo que necesita o requiere. Pero estoy con tratamiento
//psiquiatrico y gracias a ello pude darme cuenta de esta falta de dedicacion
//antes de llegar a la instancia de recursar la materia. Y ahora, aunque ya
//sea un poco tarde, estoy haciendo todo lo posible por ponerme al dia, con
//el fin principal de aprender esta disciplina que tanto me gusta que es la
//programacion. Les agradezco el esfuerzo diario y la dedicacion que le ponen
//a las clases, tienen que saber que los alumnos lo notamos y se agradece mucho.

#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
#define TAMANIO1 2 //Tamaño del array que guarda los numeros ingresados por el usuario.
#define TAMANIO2 6 //Tamaño del array que guarda los resultados de las operaciones.

int main()
{
    int opcion;
    float arrayNumerosIngresados[TAMANIO1]={0}; //En este array se guardan los valores ingresados por el usuario.
    float resultadosOperaciones[TAMANIO2]={0};  //En este los resultados devueltos por cada Funcion.

    do
    {
        printf("\n Seleccione una opcion del menu: \n  1. Ingresar 1er operando (A = %.2f)\n"//Printf que muestra el Menu.
               "  2. Ingresar 2do operando (B = %.2f)\n  3. Calcular todas las operaciones\n"
               "     a) Calcular la suma (%.2f + %.2f)\n     b) Calcular la resta (%.2f - %.2f)\n"
               "     c) Calcular la division (%.2f / %.2f)\n     d) Calcular la multiplicacion (%.2f * %.2f)\n"
               "     e) Calcular el factorial (%.2f!)\n  4. Informar resultados\n  5. Salir\n\nOpcion seleccionada:",
               arrayNumerosIngresados[0],arrayNumerosIngresados[1],arrayNumerosIngresados[0],arrayNumerosIngresados[1],
               arrayNumerosIngresados[0],arrayNumerosIngresados[1],arrayNumerosIngresados[0],arrayNumerosIngresados[1],
               arrayNumerosIngresados[0],arrayNumerosIngresados[1],arrayNumerosIngresados[0]);
        scanf("%d", &opcion);//Scanf que guarda la opcion seleccionada por el usuario.

        switch(opcion)
        {
        case 1:
            printf("\nIngrese el primer numero: ");
            scanf("%f", &arrayNumerosIngresados[0]);//Se guarda el valor del primer numero ingresado.
            printf("\nPrimer numero almacenado correctamente.\n");
            break;
        case 2:
            printf("\nIngrese el segundo numero: ");
            scanf("%f", &arrayNumerosIngresados[1]);//Se guarda el valor del segundo numero ingresado.
            printf("\nSegundo numero almacenado correctamente.\n");
            break;
        case 3:
            printf("\nAguarde, realizando calculos...\n");
            resultadosOperaciones[0] = SumarNumeros(arrayNumerosIngresados[0], arrayNumerosIngresados[1]); //INVOCA A LA SUMA

            resultadosOperaciones[1] = RestarNumeros(arrayNumerosIngresados[0], arrayNumerosIngresados[1]); //INVOCA A LA RESTA

            resultadosOperaciones[2] = DividirNumeros(arrayNumerosIngresados[0], arrayNumerosIngresados[1]); //INVOCA A LA DIVISION

            resultadosOperaciones[3] = MultiplicarNumeros(arrayNumerosIngresados[0], arrayNumerosIngresados[1]); //INVOCA A LA MULTIPLICACION

            resultadosOperaciones[4] = CalcularFactorial(arrayNumerosIngresados[0]);//INVOCA AL FACTORIAL DEL PRIMER NUMERO

            resultadosOperaciones[5] = CalcularFactorial(arrayNumerosIngresados[1]);//INVOCA AL FACTORIAL DEL SEGUNDO NUMERO
            break;
        case 4:
            printf("\nLos resultados son:\n");
            //MUESTRA LA SUMA
            printf("\na)El resultado de %.2f + %.2f es: %.2f\n",arrayNumerosIngresados[0], arrayNumerosIngresados[1],resultadosOperaciones[0]);
            //MUESTRA LA RESTA
            printf("\nb)El resultado de %.2f - %.2f es: %.2f\n",arrayNumerosIngresados[0], arrayNumerosIngresados[1],resultadosOperaciones[1]);

            if(arrayNumerosIngresados[1]==0)
            {   //MUESTRA LA DIVISION ERROR
                printf("\nc)ERROR No es posible dividir por cero.\n");
            }else
            {   //MUESTRA LA DIVISION EXITOSA
                printf("\nc)El resultado de %.2f / %.2f es: %.2f\n",arrayNumerosIngresados[0], arrayNumerosIngresados[1],resultadosOperaciones[2]);
            }
                //MUESTRA LA MULTIPLICACION
            printf("\nd)El resultado de %.2f * %.2f es: %.2f\n",arrayNumerosIngresados[0], arrayNumerosIngresados[1],resultadosOperaciones[3]);

            if(resultadosOperaciones[4]==0)
            {   //MUESTRA EL FACTORIAL ERROR
                printf("\ne)ERROR No es posible calcular el Factorial con numeros decimales o negativos.");
            }else
            {   //MUESTRA EL Primer Factorial
                printf("\ne)El factorial de %.2f es: %.2f",arrayNumerosIngresados[0],resultadosOperaciones[4]);
            }

            if(resultadosOperaciones[5]==0)
            {   //MUESTRA EL FACTORIAL ERROR
                printf("\nERROR No es posible calcular el Factorial con numeros decimales o negativos.\n");
            }else
            {   //MUESTRA EL Segundo Factorial
                printf(" y El factorial de %.2f es: %.2f\n",arrayNumerosIngresados[1],resultadosOperaciones[5]);
            }

            arrayNumerosIngresados[0]=0;//Pongo a cero las variables para que si el usuario desea ingresar nuevos valores,
            arrayNumerosIngresados[1]=0;//los anteriores no queden cargados.
            break;
        case 5:
            printf("\nGracias por usar esta calculadora.\n");
            break;
        }
    }while(opcion!=5);

    return 0;
}
