/*
 * biblio.c
 *
 *  Created on: 23 sep. 2021
 *      Author: Tomass
 */

#include "calculos.h"
int MenuDeOpciones(int numeros[])
{
    int tipo;
    printf("\n1- Ingresar 1er operando (A=%d)\n2- Ingresar 2do operando (B=%d)\n3- Calcular todas las operaciones \n4- Informar resultados \n5- Salir\n", numeros[0], numeros[1]);
    scanf("%d", &tipo);
    while(tipo < 1 || tipo > 5)
    {
        printf("\nerror, reingrese.\n1- Ingresar 1er operando (A=%d)\n2- Ingresar 2do operando (B=%d)\n3- Calcular todas las operaciones \n4- Informar resultados \n5- Salir\n", numeros[0], numeros[1]);
        scanf("%d", &tipo);
    }
    return tipo;
}

void AsignarValores(int numeros[], int tamanio)
{
    int i;
    for( i = 0 ; i < tamanio ; i++ )
    {
        printf("Ingrese %d operando : ", i+1);
        scanf("%d", &numeros[i]);
        while(numeros[i]==0 && i==1)
                {
                	printf("error. no puede ser 0. Reingrese operando : ");
                	scanf("%d", &numeros[i]);
                }
    }
}

void mostrarSuma(int suma)
{
	printf("El resultado de la suma es : %d \n", suma);
}
void mostrarResta(int resta)
{
	printf("El resultado de la resta es : %d\n", resta);
}
void mostrarDivision(float division)
{
	printf("El resultado de la division es : %f\n", division);
}
void mostrarMultiplicacion(int multiplicacion)
{
	printf("El resultado de la multiplicacion es : %d\n", multiplicacion);
}
void mostrarFactoriales(int factorialUno, int factorialDos)
{
	printf("El resultado del primer factorial es  : %d\n", factorialUno);
	printf("El resultado del segundo factorial es  : %d\n", factorialDos);
}

