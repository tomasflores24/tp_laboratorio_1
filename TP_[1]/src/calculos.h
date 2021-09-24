/*
 * biblioteca.h
 *
 *  Created on: 21 sep. 2021
 *      Author: Tomass
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_
#include <stdio.h>
#include <stdlib.h>

/// \fn int CalcularSuma(int[], int)
/// \brief  suma los numeros y retorna el resultado
/// \param numeros
/// \param tamanio
/// \return resultado
int CalcularSuma(int numeros[], int tamanio);

/// \fn int CalcularResta(int[], int)
/// \brief    resta los numeros y retorna el resultado
/// \param numeros
/// \param tamanio
/// \return resultado
int CalcularResta(int numeros[], int tamanio);

/// \fn float CalcularDivision(int[])
/// \brief   divide los numeros y retorna el resultado
/// \param numeros
/// \return resultado
float CalcularDivision(int numeros[]);

/// \fn int CalcularMultiplicacion(int[])
/// \brief  multiplica los numeros y retorna el resultado
/// \param numeros
/// \return resultado
int CalcularMultiplicacion(int numeros[]); ////////////

/// \fn int CalcularFactorial(int)
/// \brief  calcula el factorial de un numero y retorna el numero factorizado
/// \param numero
/// \return numero factorizado
int CalcularFactorial(int numero);   ////////
#endif /* CALCULOS_H_ */
