/*
 * biblioteca.c
 *
 *  Created on: 21 sep. 2021
 *      Author: Tomass
 */
#include "calculos.h"


int CalcularSuma(int numeros[], int tamanio)
{
    int i;
    int resultado;
    resultado = 0;
    for( i = 0 ; i < tamanio ; i++)
    {
        resultado = resultado + numeros[i];
    }
    return resultado;
}

int CalcularResta(int numeros[], int tamanio)
{
    int i;
    int resultado;
    resultado = 0;
    for( i = 0 ; i < tamanio ; i++ )
    {
        resultado = numeros[0]-numeros[1];
    }
    return resultado;
}

float CalcularDivision(int numeros[])
{
	float resultado;

	resultado = (float)numeros[0] / numeros[1];


	return resultado;
}

int CalcularMultiplicacion(int numeros[])
{
	int resultado;
	resultado=numeros[0] * numeros[1];
	return resultado;
}

int CalcularFactorial(int numero)
{
	int resultado;
	if(numero==0)
	{
		resultado =1;
	}
	else
	{
		resultado = numero*CalcularFactorial(numero-1);
	}
	return resultado;
}
