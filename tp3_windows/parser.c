#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Passenger.h"
#include "parser.h"

/** \brief Parsea los datos los datos de los pasajeros desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListPassenger LinkedList*
 * \return int
 *
 */
int parser_PassengerFromText(FILE* pFile , LinkedList* pArrayListPassenger)
{
	int validacion = -1;
	char id[10];
	char nombre[50];
	char apellido[50];
	char precio[50];
	char tipoPasajero[20];
	char codigoVuelo[20];
	char estadoVuelo[20];
	Passenger* pasajeroAuxiliar = NULL;
	int cantidad = 0;

	fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, apellido, precio, tipoPasajero, codigoVuelo, estadoVuelo);

	if(pFile != NULL && pArrayListPassenger != NULL)
	{
		while(!feof(pFile))
		{
			cantidad = fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, apellido, precio, codigoVuelo, tipoPasajero, estadoVuelo);

			if(cantidad == 7)
			{
				pasajeroAuxiliar = Passenger_newParametros(id, nombre, codigoVuelo, apellido, precio, tipoPasajero, estadoVuelo);

				if(pasajeroAuxiliar != NULL)
				{
					ll_add(pArrayListPassenger, pasajeroAuxiliar);
					validacion = 0;
				}
				else
				{
					Passenger_delete(pasajeroAuxiliar);
				}
			}
		}
	}

	return validacion;
}

/** \brief Parsea los datos los datos de los pasajeros desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListPassenger LinkedList*
 * \return int
 *
 */
int parser_PassengerFromBinary(FILE* pFile , LinkedList* pArrayListPassenger)
{
	int validacion = -1;
	Passenger* pasajeroAuxiliar = NULL;

	if(pFile != NULL && pArrayListPassenger != NULL)
	{
		while(!feof(pFile))
		{
			pasajeroAuxiliar = Passenger_new();

			if(pasajeroAuxiliar != NULL)
			{
				if(fread(pasajeroAuxiliar, sizeof(Passenger),1,pFile))
				{
					ll_add(pArrayListPassenger, pasajeroAuxiliar);
					validacion = 0;
				}
				else
				{
					Passenger_delete(pasajeroAuxiliar);
				}
			}
		}
	}


    return validacion;
}

/// @brief Parsea el id de los pasajeros desde el archivo IDS.csv.
///
/// @param pFile El archivo.
/// @param pArrayListPassenger La lista de pasajeros.
/// @param id El id a parsear.
/// @return Retorna si pudo o no parsear la id.
int parser_IdFromText(FILE* pFile, LinkedList* pArrayListPassenger, int* id)
{
	int validacion = -1;
	char idStr[20];
	int idInt;
	int cantidad = 0;

	if(pFile != NULL && pArrayListPassenger != NULL)
	{
		while(!feof(pFile))
		{
			cantidad= fscanf(pFile, "%[^\n]\n", idStr);

			if(cantidad == 1)
			{
				validacion = 0;
				idInt = atoi(idStr);

				if(idInt > *id)
				{
					*id = idInt;
				}
			}
		}
	}
	return validacion;
}
