#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int mostrarMenu()
{
    int opcion;
    system("cls");

    printf(" \n ##### CALCULADORA #### \n");
    printf(" \n 1. Ingresar 1er operando (A=x) \n 2. Ingresar 2do operando (B=y) \n 3. Calcular todas las operaciones: \n 4. Informar resultados: \n 5. Salir: \n Elija una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
float opSumar(float datoUno, float datoDos)
{

    float suma;
    suma = datoUno + datoDos;
    return suma;
}
float opRestar(float datoUno, float datoDos)
{
    float resta;
    resta = datoUno - datoDos;
    return resta;
}
float opMultiplicar(float datoUno, float datoDos)
{
    float multi;
    multi = datoUno * datoDos;
    return multi;
}

float opDividir(float datoUno, float datoDos)
{
    float division;

    if(datoDos !=0)
    {
        division = datoUno/datoDos;

    }
    else
    {
        division = 0;
        //printf("No se puede dividir por 0 \n");

    }

    return division;
}

float opFactorear (float datoUno, float datoDos)
{
    float factorialDatoUno;
    float factorialDatoDos;
    float priFacto;
    float segFacto;

    factorialDatoUno=1;
    factorialDatoDos=1;

    if (datoUno >=0){
        for (priFacto = datoUno; priFacto>1; priFacto--){
            factorialDatoUno *= priFacto;
        }
        printf("\n El factorial del 1er operado es : %.2f es: %.2f\n",datoUno,factorialDatoUno);
    }
        if (datoDos >=0){
        for (segFacto = datoDos; segFacto>1; segFacto--){
            factorialDatoDos *= segFacto;
        }

        printf(" El factorial del 2do operado es: %.2f es: %.2f\n",datoDos,factorialDatoDos);
    }
    else
        printf("No puede operar un numero negativo\n");

    return factorialDatoUno,factorialDatoDos;
}
