/*
 * TypePassenger.c
 *
 *  Created on: 29 jun. 2022
 *      Author: RYZEN 2700X
 */

#include "TypePassenger.h"

void TypePassenger(sTypePassenger typePassenger[], int size)
{
	for(int i = 0; i < size; i++)
		{
			printf("\n%d -- %s\n", typePassenger[i].idTypePassenger, typePassenger[i].typePassenger);
		}
}
