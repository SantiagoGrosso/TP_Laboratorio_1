/*
 * Funciones.h
 *
 *  Created on: 6 abr. 2022
 *      Author: RYZEN 2700X
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
#include <stdio.h>
#include <stdlib.h>

/// @fn void Menu()
/// @brief Funci�n de desarrollo del men�.
///
void Menu ();

/// @fn void Limpiar()
/// @brief Funci�n para simular una limpieza de consola.
///
void Limpiar ();

/// @fn void Separador()
/// @brief Funci�n est�tica para usar de separador.
///
void Separador ();

/// @fn float NumeroIngresado(char[], float, float)
/// @brief
///
/// @param mensaje para mostrar al usuario.
/// @param Rango m�nimo de ingreso de datos.
/// @param Rango m�ximo de ingreso de datos.
/// @return Retorna el n�mero ingresado por el usuario.
float NumeroIngresado(char mensaje [], float, float);

/// @fn float CalcularPrecioDebito(float)
/// @brief Funci�n para calcular el precio con d�bito.
///
/// @param precioBruto Recibe el precio del viaje de las aerol�neas, ya sea Y o Z.
/// @return Retorna el valor con descuento pagado con d�bito.
float CalcularPrecioDebito (float precioBruto);

/// @fn float CalcularPrecioCredito(float)
/// @brief Funci�n para calcular el precio con cr�dito.
///
/// @param precioBruto Recibe el precio del viaje de las aerol�neas, ya sea Y o Z.
/// @return Retorna el valor con aumento pagado con cr�dito.
float CalcularPrecioCredito (float precioBruto);

/// @fn float CalcularPrecioBitcoin(float)
/// @brief Funci�n para calcular el precio en Bitcoin.
///
/// @param precioBruto Recibe el precio del viaje de las aerol�neas, ya sea Y o Z.
/// @return Retorna el valor del viaje en Bitcoin.
float CalcularPrecioBitcoin (float precioBruto);

/// @fn float CalcularPrecioUnitario(float, float)
/// @brief Funci�n para calcular el precio unitario.
///
/// @param kmIngresado Es la cantidad de kil�metros ingresados.
/// @param precioBruto Es el precio del viaje de las aerol�neas, ya sea Y o Z.
/// @return Retorna el valor por cada kil�metro.
float CalcularPrecioUnitario (float kmIngresado, float precioBruto);

/// @fn float DiferenciaPrecios(float, float)
/// @brief Funci�n que calcula la diferencia de los precios.
///
/// @param y Es el precio de Aerol�neas Argentina.
/// @param z Es el precio de LATAM.
/// @return Retorna la diferencia entre ambos precios de los viajes de las aerol�neas.
float DiferenciaPrecios (float y, float z);

#endif /* FUNCIONES_H_ */
