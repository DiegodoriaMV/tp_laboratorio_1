#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    float numeroUno;
    float numeroDos;

    int opcion;

    char seguir = 's';
    char salirOp;

    float suma = 0;
    float resta = 0;
    float multiplicacion = 0;
    float division = 0;
    int flag = 0;

    do
    {

        opcion = mostrarMenu();
    switch(opcion)
        {
            case 1:
                printf("\n Ingrese el primer numero: ");
                scanf("%f",&numeroUno);
                fflush(stdin);
                break;
            case 2:
                printf("\nIngrese el segundo numero: ");
                scanf("%f",&numeroDos);
                fflush(stdin);
                break;
            case 3:
                printf("\n Calculando las operaciones\n ");
                suma = opSumar(numeroUno, numeroDos);
                resta = opRestar(numeroUno, numeroDos);
                multiplicacion = opMultiplicar(numeroUno, numeroDos);
                division = opDividir(numeroUno, numeroDos);
                flag = 1;

            break;
            case 4:

                printf("\nResultados \n");

                printf("\n a)(A+B)");
                printf("\n La suma da: %.2f",suma);

                printf("\n (A-B)");
                printf("\n la resta da :%.2f " ,resta);

                printf("\n(A x B)");
                printf("\n la multiplicacion da :%.2f " ,multiplicacion);

                printf("\n(A / B)");
                if(division == 0)
                    {
                        printf("\n No se puede dividir por 0 \n");
                    }else
                    {
                    printf("\n La division da :%.2f " ,division);
                    }

                printf("\n(A!)");

                    if(flag == 1)
                    {
                        opFactorear(numeroUno, numeroDos);
                    }
                    else{
                        printf("\n\n NO SE OLVIDE QUE PARA QUE LE APAREZCAN LOS RESULTADO DEBE PRECIONAR PRIMERO LA OPCION 3 DE CALCULAR");
                        flag = 0;
                    }
                    break;

            case 5:
                printf("quiere salir? Ingrese 'n'");
                scanf("%c",salirOp);
                if(salirOp == 'n')
                {seguir = 'n';}
            break;
            default:
                printf("opcion icorrecta \n");
                break;
        }

        //printf("\n%.2f\n", numeroUno);
        //printf("\n%.2f\n", numeroDos);


        getch();
        system("cls");
    }while(seguir == 's');

    return 0;
}
