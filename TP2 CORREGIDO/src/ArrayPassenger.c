/*
 * ArrayPassenger.c
 *
 *  Created on: 11 may. 2022
 *      Author: RYZEN 2700X
 */

#include "ArrayPassenger.h"

int initPassengers(sPassenger list[], int size)
{
	int retorno = -1;

	for(int i=0;i<size;i++)
	{
		list[i].isEmpty = VACIO;
	}

	return retorno;
}

////////////////////////////////////////////////////////

int findPassengerById(sPassenger list[], int size,int id)
{

	int index = -1;

	for(int i=0;i<size;i++)
	{
		if(list[i].id == id && list[i].isEmpty == OCUPADO)
		{
			index = i;
			break;
		}
	}

	return index;

}

////////////////////////////////////////////////////////

int removePassenger(sPassenger list[], int size, int id)
{
	int index;
	int aceptarEliminacion;
	int retorno =-1;

	index = findPassengerById(list, size, id);
	if(index != -1)
	{
		printf("\n Vas a eliminar a este pasajero: \n"
				"\n ID: %d \n"
				"\n Nombre: %s \n"
				"\n Apellido: %s \n"
				"\n Código de vuelo: %s \n"
				,list[index].id
				,list[index].name
				,list[index].lastname
				,list[index].flycode);

		printf("\n Está usted seguro que es el pasajero que quiere borrar? Si es así, ingrese 1: \n");
		scanf("%d", &aceptarEliminacion);

		if(aceptarEliminacion == 1)
		{
			list[index].isEmpty = VACIO;
			retorno = 0;
		}
	}


	return retorno;

}

////////////////////////////////////////////////////////

int sortPassengers(sPassenger passengerList[], int size, int order)
{
	int retorno = -1;

	sPassenger auxiliar;
	for(int i=0; i<size-1; i++)
	{
		for(int j = i+1; j<size; j++)
		{
			if(strcmp(passengerList[i].lastname, passengerList[j].lastname) == order)
			{
				auxiliar = passengerList[i];
				passengerList[i] = passengerList[j];
				passengerList[j] = auxiliar;
				retorno = 0;
			}
			else
			{
				if(strcmp(passengerList[i].lastname, passengerList[j].lastname) == 0)
				{
					if(order<0)
					{
						if(passengerList[i].idTypePassenger < passengerList[j].idTypePassenger)
						{
							auxiliar=passengerList[i];
							passengerList[i]=passengerList[j];
							passengerList[j]=auxiliar;

						}
					}
					else
					{
						if(passengerList[i].idTypePassenger > passengerList[j].idTypePassenger)
						{
							auxiliar=passengerList[i];
							passengerList[i]=passengerList[j];
							passengerList[j]=auxiliar;
						}
					}
				}
			}
		}
	}

	return retorno;
}

////////////////////////////////////////////////////////

int sortPassengersByCode(sPassenger passengerList[], int size, int order)
{
	int retorno = -1;

		sPassenger auxiliar;
		for(int i=0; i<size-1; i++)
		{
			for(int j = i+1; j<size; j++)
			{
				if(strcmp(passengerList[i].flycode, passengerList[j].flycode) == order)
				{
					auxiliar = passengerList[i];
					passengerList[i] = passengerList[j];
					passengerList[j] = auxiliar;
					retorno = 0;
				}
				else
				{
					if(strcmp(passengerList[i].flycode, passengerList[j].flycode) == 0)
					{
						if(order<0)
						{
							if(passengerList[i].idStatusFlight < passengerList[j].idStatusFlight)
							{
								auxiliar=passengerList[i];
								passengerList[i]=passengerList[j];
								passengerList[j]=auxiliar;

							}
						}
						else
						{
							if(passengerList[i].idStatusFlight > passengerList[j].idStatusFlight)
							{
								auxiliar=passengerList[i];
								passengerList[i]=passengerList[j];
								passengerList[j]=auxiliar;
							}
						}
					}
				}
			}
		}

		return retorno;
}

////////////////////////////////////////////////////////

int BuscarEspacioLibre(sPassenger list[], int size)
{
    int index;
    index = -1;
    for(int i=0; i<size; i++)
    {
        if(list[i].isEmpty != OCUPADO)
        {
            index = i;
            break;
        }
    }
    return index;
}

////////////////////////////////////////////////////////

int BuscarEspacioOcupado(sPassenger list[], int size)
{
    int index;
    index = -1;
    for(int i=0; i<size; i++)
    {
        if(list[i].isEmpty != VACIO)
        {
            index = i;
            break;
        }
    }
    return index;
}

////////////////////////////////////////////////////////

float CalcularPromedioViajes(sPassenger list[], int size)
{
	float acumulador;
	int contador;
	float promedio;
	int i;

	acumulador = 0;
	contador = 0;

		for(i = 0; i < size; i++)
		{
			if(list[i].isEmpty == OCUPADO)
			{
			acumulador = acumulador + list[i].price;
			contador++;
			}
		}


	printf("El total de los precios es: %2f\n", acumulador);
	promedio = CalcularPromedio(acumulador, contador);

	return promedio;
}

////////////////////////////////////////////////////////

void CargaForzada (sPassenger list[], int size)
{

    int id[] = {2000,2001,2002,2003,2004, 2005};
    char name[][51]={"Maria","Jorge","Clorinda","Julian", "Rocio"};
    char lastname[][51]= {"Locuras","Curioso","Pascuangulo","Alvarez", "Mbappe"};
    float price[]={12000,27000,5000.50,31000.78,20000.15};
    char flycode[][10]={"5fdt67","aR4tf9","0ph3af","iJ8fC6", "nm9213"};
    int statusFlight[]={1,4,2,1,3};
    int typePassenger[]={1,2,2,1,3};
    int estado[]= {0,0,0,0,0};

    for(int i=0;i<size;i++)
    {
        list[i].id =id[i];
        strcpy(list[i].name,name[i]);
        strcpy(list[i].lastname,lastname[i]);
        list[i].price=price[i];
        strcpy(list[i].flycode,flycode[i]);
        list[i].idTypePassenger=typePassenger[i];
        list[i].idStatusFlight=statusFlight[i];
        list[i].isEmpty=estado[i];
    }

    printf("\nSe cargó correctamente a los pasajeros!\n");

}

////////////////////////////////////////////////////////

