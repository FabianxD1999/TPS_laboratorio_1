#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
float CalcularDescuento(float precio,int DESCUENTO)
{
	float precioFinalConDescuento;
	int descuento;
	descuento=(precio*DESCUENTO)/100;
	precioFinalConDescuento=precio-descuento;
	return precioFinalConDescuento;
}

float CalcularInteres(float precio,int INTERES)
{
	float precioFinalConInteres;
	int  interes;
	interes=(precio*INTERES)/100;
	precioFinalConInteres=precio+interes;
	return precioFinalConInteres;
}

float Dividir(float numero1,float numero2)
{
	float resultado;
	resultado=numero1/numero2;
	return resultado;
}

float PesosABitcoin(float pesos )
{
	float conversion;
	conversion=pesos/ 4606954.55;
	return conversion;
}

float Restar(float numero1,float numero2)
{
	float resultado;

	if(numero1>numero2 || numero1==numero2)
	{
		resultado=numero1-numero2;
	}
	else
	{
		resultado=numero2-numero1;
	}
	return resultado;
}
