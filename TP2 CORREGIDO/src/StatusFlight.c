/*
 * StatusFlight.c
 *
 *  Created on: 29 jun. 2022
 *      Author: RYZEN 2700X
 */

#include "StatusFlight.h"

void StatusFlight(sStatusFlight statusFlight[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("\n%d -- %s\n", statusFlight[i].idStatusFlight, statusFlight[i].statusFlight);
	}
}
