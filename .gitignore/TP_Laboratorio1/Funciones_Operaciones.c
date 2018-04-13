#include "Operaciones.h"

int suma(int numeroUno,int numeroDos,int *resultado)
{
    long res;
    int retorno;
    res=numeroUno+numeroDos;
    if(res>32767 || res<-32768)
    {
        retorno=-1;
    }
    else
    {
        *resultado=res;
        retorno=0;
    }
    return retorno;
}

int resta(int numeroUno,int numeroDos,int *resultado)
{
    long res;
    int retorno;
    res=numeroUno-numeroDos;
    if(res>32767 || res<-32768)
    {
        retorno=-1;
    }
    else
    {
        *resultado=res;
        retorno=0;
    }
    return retorno;
}

int multiplicacion(int numeroUno,int numeroDos,int *resultado)
{
    long res;
    int retorno;
    res=numeroUno*numeroDos;
    if(res>32767 || res<-32768)
    {
        retorno=-1;
    }
    else
    {
        *resultado=res;
        retorno=0;
    }
    return retorno;
}

int division(int numeroUno,int numeroDos,float *resultado)
{
    int retorno;
    float res;
    if(numeroDos==0)
    {
        retorno=-1;
    }
    else
    {   res=(float)numeroUno/(float)numeroDos;
        *resultado=res;
        retorno=0;
    }
    return retorno;
}

int factorial(int numeroUno,int *resultado)
{
    int retorno;
    int acumulador;
    acumulador=2;

    if(numeroUno>1)
    {
        while(numeroUno>2)
        {
            acumulador=acumulador*numeroUno;
            numeroUno--;
        }
        retorno=0;
        *resultado=acumulador;
    }
    else if(numeroUno==0 || numeroUno==1)
    {
        retorno=0;
        *resultado=1;
    }
    else
    {
        retorno=-1;
    }


    return retorno;
}

