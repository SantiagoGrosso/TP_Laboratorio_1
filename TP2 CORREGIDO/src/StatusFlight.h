/*
 * StatusFlight.h
 *
 *  Created on: 29 jun. 2022
 *      Author: RYZEN 2700X
 */

#ifndef STATUSFLIGHT_H_
#define STATUSFLIGHT_H_

#include "InputsYValidaciones.h"

typedef struct
{
	int idStatusFlight;
	char statusFlight[20];
}sStatusFlight;

/// @brief Muestra la id y la descripción de los estados de vuelo.
///
/// @param statusFlight La estructura de estados de vuelo.
/// @param size El tamaño de esta.
void StatusFlight(sStatusFlight statusFlight[], int size);

#endif /* STATUSFLIGHT_H_ */
