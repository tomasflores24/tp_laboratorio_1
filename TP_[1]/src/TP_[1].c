/*
 ============================================================================
 1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir

• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 ============================================================================
 */



#include "calculos.h"
#include "biblio.h"
#define TAM 2

int main()
{
    setbuf(stdout, NULL);
    int numeros[TAM];
    int respuesta;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int factorialUno;
    int factorialDos;
    do
    {
    respuesta = MenuDeOpciones(numeros);
    if(respuesta==5)
       {
          break;
        }

    AsignarValores(numeros, TAM);
    factorialUno=numeros[0];
    factorialDos=numeros[1];
    resultadoSuma = CalcularSuma(numeros, TAM);
    resultadoResta = CalcularResta(numeros, TAM);
    resultadoDivision= CalcularDivision(numeros);
    resultadoMultiplicacion= CalcularMultiplicacion(numeros);

    factorialUno=CalcularFactorial(factorialUno);
    factorialDos=CalcularFactorial(factorialDos);

    mostrarSuma(resultadoSuma);
    mostrarResta(resultadoResta);
    mostrarDivision(resultadoDivision);
    mostrarMultiplicacion(resultadoMultiplicacion);
    mostrarFactoriales(factorialUno, factorialDos);

    }while(respuesta!=5);

    return 0;
}
