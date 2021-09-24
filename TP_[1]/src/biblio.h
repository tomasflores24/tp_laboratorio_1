/*
 * biblio.h
 *
 *  Created on: 23 sep. 2021
 *      Author: Tomass
 */

#ifndef BIBLIO_H_
#define BIBLIO_H_
#include <stdio.h>
#include <stdlib.h>

/// \fn int MenuDeOpciones(int[])
/// \brief muestra el menu de opciones y pide un numero para saber que quiere hacer el usuario
/// \param numeros
/// \return
int MenuDeOpciones(int numeros[]);

/// \fn void AsignarValores(int[], int)
/// \brief  pide y asigna valores al arrays
/// \param numeros
/// \param tamanio
void AsignarValores(int numeros[], int tamanio);

/// \fn void mostrarSuma(int)
/// \brief  muestra el resultado de la suma
/// \param suma
void mostrarSuma(int suma);

/// \fn void mostrarResta(int)
/// \brief  muestra el resultado de la resta
/// \param resta
void mostrarResta(int resta);

/// \fn void mostrarDivision(float)
/// \brief  muestra el resultado de la division
/// \param division
void mostrarDivision(float division);

/// \fn void mostrarMultiplicacion(int)
/// \brief muestra el resultado de la multiplicacion
/// \param multiplicacion
void mostrarMultiplicacion(int multiplicacion);

/// \fn void mostrarFactoriales(int, int)
/// \brief  muestra los factoriales de los numeros ingresados
/// \param factorialUno
/// \param factorialDos
void mostrarFactoriales(int factorialUno, int factorialDos);


#endif /* BIBLIO_H_ */
