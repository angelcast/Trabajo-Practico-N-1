#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numeroA;
    int numeroB;
    int resultadoSuma;
    int resultadoResta;
    int resultadoFactorial;
    int resultadoMultiplicacion;
    float resultadoDivision;

    while(seguir=='s')
    {
        printf("Trabajo Practico N°1 \n");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingresar numero A\n");
                scanf("%d",&numeroA);
                break;
            case 2:
                printf("Ingresar numero B\n");
                scanf("%d",&numeroB);
                break;
            case 3:
                if(suma(numeroA,numeroB,&resultadoSuma)==0)
                {
                    printf("La suma es %.d\n",resultadoSuma);
                }
                else
                {
                    printf("La suma no esta en el rango admitido\n");
                }
                break;
            case 4:
                if(resta(numeroA,numeroB,&resultadoResta)==0)
                {
                    printf("La resta es %d\n",resultadoResta);
                }
                else
                {
                    printf("La resta no esta en el rango admitido\n");
                }
                break;
            case 5:
                if(division(numeroA,numeroB,&resultadoDivision)==0)
                {
                    printf("La division es %.2f\n",resultadoDivision);
                }
                else
                {
                    printf("El segundo numero no puede ser cero\n");
                }
                break;
            case 6:
                if(multiplicacion(numeroA,numeroB,&resultadoMultiplicacion)==0)
                {
                    printf("La multiplicacion es %d\n",resultadoMultiplicacion);
                }
                else
                {
                    printf("La multiplicacion no esta en el rango admitido\n");
                }
                break;
            case 7:
                if(factorial(numeroA,&resultadoFactorial)==0)//se factorea!
                {
                    printf("El factorial es %d\n",resultadoFactorial);
                }
                else
                {
                    printf("El factorial es 1\n");
                }
                break;
            case 8:
                if(suma(numeroA,numeroB,&resultadoSuma)==0)//se suma!
                {
                    printf("La suma es %d\n",resultadoSuma);
                }
                else
                {
                    printf("La suma no esta en el rango admitido\n");
                }

                if(resta(numeroA,numeroB,&resultadoResta)==0)//se resta!
                {
                    printf("La resta es %d\n",resultadoResta);
                }
                else
                {
                    printf("La resta no esta en el rango admitido\n");
                }

                if(division(numeroA,numeroB,&resultadoDivision)==0)//se divide!
                {
                    printf("La division es %.2f\n",resultadoDivision);
                }
                else
                {
                    printf("El segundo numero no puede ser cero\n");
                }

                if(multiplicacion(numeroA,numeroB,&resultadoMultiplicacion)==0)//se multiplica!
                {
                    printf("La multiplicacion es %.d\n",resultadoMultiplicacion);
                }
                else
                {
                    printf("La multiplicacion no esta en el rango admitido\n");
                }

                if(factorial(numeroA,&resultadoFactorial)==0)// verifica el factorial 
                {
                    printf("El factorial es %.d\n",resultadoFactorial);
                }
                else
                {
                    printf("El numero debe ser positivo\n");
                }
                break;
            case 9:
                seguir = 'n';
                break;

            default:
                printf("ninguno de los numeros ingresados es valido para continuar");

                return;

                break;
        }
        system("pause");
        system("cls");
    }
    return 0;
}

