/*
 * DesarrolloFunciones.c
 *
 *  Created on: 6 abr. 2022
 *      Author: RYZEN 2700X
 */
#include "Funciones.h"

void Limpiar()
{
	printf("\n\n\n\n\n\n\n\n\n");
}

void Separador()
{
	printf("-----------------------------------\n");
}

float NumeroIngresado(char mensaje [], float minimo, float maximo)
{
	float numeroIngresado;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%f", &numeroIngresado);
	while(numeroIngresado < minimo || numeroIngresado > maximo)
	{
		printf("Dato incorrecto, por favor, vuelva a ingresarlo: ");
		fflush(stdin);
		scanf("%f", &numeroIngresado);
	}

	return numeroIngresado;
}

float CalcularPrecioDebito (float precioBruto)
{
	float resultado;
	float descuento;
	float precioFinal;

	descuento= 10;

	resultado= precioBruto * descuento / 100;

	precioFinal = precioBruto - resultado;

	return precioFinal;
}

float CalcularPrecioCredito (float precioBruto)
{
	float resultado;
	float aumento;
	float precioFinal;

	aumento= 25;

	resultado= precioBruto * aumento / 100;

	precioFinal = precioBruto + resultado;

	return precioFinal;
}

float CalcularPrecioBitcoin (float precioBruto)
{
	float resultado;

	resultado= precioBruto / 4606954.55;

	return resultado;

}

float CalcularPrecioUnitario (float kmIngresado, float precioBruto)
{
	float resultado;

	resultado= precioBruto / kmIngresado;

	return resultado;
}

float DiferenciaPrecios (float y, float z)
{
	float resultado;

	if(y > z)
	{
		resultado= y - z;
	}

	else
	{
		resultado= z - y;
	}

	return resultado;

}


