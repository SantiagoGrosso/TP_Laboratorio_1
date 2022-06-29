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
/// @brief Función de desarrollo del menú.
///
void Menu ();

/// @fn void Limpiar()
/// @brief Función para simular una limpieza de consola.
///
void Limpiar ();

/// @fn void Separador()
/// @brief Función estética para usar de separador.
///
void Separador ();

/// @fn float NumeroIngresado(char[], float, float)
/// @brief
///
/// @param mensaje para mostrar al usuario.
/// @param Rango mínimo de ingreso de datos.
/// @param Rango máximo de ingreso de datos.
/// @return Retorna el número ingresado por el usuario.
float NumeroIngresado(char mensaje [], float, float);

/// @fn float CalcularPrecioDebito(float)
/// @brief Función para calcular el precio con débito.
///
/// @param precioBruto Recibe el precio del viaje de las aerolíneas, ya sea Y o Z.
/// @return Retorna el valor con descuento pagado con débito.
float CalcularPrecioDebito (float precioBruto);

/// @fn float CalcularPrecioCredito(float)
/// @brief Función para calcular el precio con crédito.
///
/// @param precioBruto Recibe el precio del viaje de las aerolíneas, ya sea Y o Z.
/// @return Retorna el valor con aumento pagado con crédito.
float CalcularPrecioCredito (float precioBruto);

/// @fn float CalcularPrecioBitcoin(float)
/// @brief Función para calcular el precio en Bitcoin.
///
/// @param precioBruto Recibe el precio del viaje de las aerolíneas, ya sea Y o Z.
/// @return Retorna el valor del viaje en Bitcoin.
float CalcularPrecioBitcoin (float precioBruto);

/// @fn float CalcularPrecioUnitario(float, float)
/// @brief Función para calcular el precio unitario.
///
/// @param kmIngresado Es la cantidad de kilómetros ingresados.
/// @param precioBruto Es el precio del viaje de las aerolíneas, ya sea Y o Z.
/// @return Retorna el valor por cada kilómetro.
float CalcularPrecioUnitario (float kmIngresado, float precioBruto);

/// @fn float DiferenciaPrecios(float, float)
/// @brief Función que calcula la diferencia de los precios.
///
/// @param y Es el precio de Aerolíneas Argentina.
/// @param z Es el precio de LATAM.
/// @return Retorna la diferencia entre ambos precios de los viajes de las aerolíneas.
float DiferenciaPrecios (float y, float z);

#endif /* FUNCIONES_H_ */
