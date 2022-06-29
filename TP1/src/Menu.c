/*
 * Menú.c
 *
 *  Created on: 6 abr. 2022
 *      Author: RYZEN 2700X
 */

#include <stdio.h>
#include <stdlib.h>

#include "Funciones.h"

void Menu()
{
	setbuf(stdout, NULL);

	int opcionElegida;
	//Variable para determinar qué opción van a elegir.

	float x;
	//Variable para guardar Kilómetros.

	float y;
	//Variable para guardar el precio de Aerolíneas Argentinas.

	float z;
	//Variable para guardar el precio de LATAM.

	float precioDebitoAerolineas;
	//Precio con tarjeta de débito de Aerolíneas Argentinas.

	float precioCreditoAerolineas;
	//Precio con tarjeta de crédito de Aerolíneas Argentinas.

	float precioBitcoinAerolineas;
	//Precio de Aerolíneas Argentinas con Bitcoin.

	float precioUnitarioAerolineas;
	//El precio unitario de Aerolíneas Argentinas.

	float diferenciaPrecio;
	// La diferencia de precio entre ambas aerolíneas.

	float precioDebitoLatam;
	//Precio con tarjeta de débito de Latam.

	float precioCreditoLatam;
	//Precio con tarjeta de crédito de Latam.

	float precioBitcoinLatam;
	//Precio de Latam con Bitcoin.

	float precioUnitarioLatam;
	//El precio unitario de Latam.

	int bandera;
	//Bandera para validar en caso que de querer mostrar resultados sin haberlos calculado.

	x= 0;
	y= 0;
	z= 0;

	bandera= 0;

	do
	{

		Separador();

		printf(" ¿Qué opción quiere elegir? \n\n");
		printf("\n 1- Ingrese KM del viaje: ");
		printf("\n 2- Ingrese el precio de los vuelos: ");
		printf("\n 3- Calcular todos los costos: ");
		printf("\n 4- Informar resultado: ");
		printf("\n 5- Carga forzada de datos: ");
		printf("\n 6- Salir! \n");

		Separador();

		fflush(stdin);
		scanf("%d", &opcionElegida);

		while(opcionElegida > 6)
		{
			printf("No existe esa opción, por favor, vuelva a ingresarla.");
			fflush(stdin);
			scanf("%d", &opcionElegida);
		}

		switch(opcionElegida)
		{
		case 1:
			x= NumeroIngresado("Ingrese KM del viaje (entre 50 y 12000): ", 50, 12000);
			Limpiar();
		break;

		case 2:
			printf(" Ingrese el precio de los vuelos según la aerolínea (entre 5000 y 700000): \n \n");
			y = NumeroIngresado("\n Precio de Aerolíneas Argentinas: \n", 5000, 700000);
			fflush(stdin);
			z = NumeroIngresado("\n Precio de LATAM: \n", 5000, 700000);
			Limpiar();
		break;

		case 3:
			if(x == 0 || y == 0 || z == 0)
			{
				printf("Faltan datos para realizar las operaciones, por favor, vuelva a ingresarlos. \n");
				system("pause");
				Limpiar();
			}
			else
			{
				bandera= 1;

				precioDebitoAerolineas = CalcularPrecioDebito(y);
				precioCreditoAerolineas = CalcularPrecioCredito(y);
				precioBitcoinAerolineas = CalcularPrecioBitcoin(y);
				precioUnitarioAerolineas = CalcularPrecioUnitario(x, y);

				precioDebitoLatam = CalcularPrecioDebito(z);
				precioCreditoLatam = CalcularPrecioCredito(z);
				precioBitcoinLatam = CalcularPrecioBitcoin(z);
				precioUnitarioLatam = CalcularPrecioUnitario(x, z);

				diferenciaPrecio= DiferenciaPrecios(y, z);

				printf("Todos los datos han sido calculados\n");

				system("pause");
				Limpiar();

			}
		break;

		case 4:

			if(bandera == 0)
			{
				printf("Faltan datos para mostrar resultados, por favor, vuelva a ingresarlos. \n");
				system("pause");
				Limpiar();
			}
			else
			{

			Separador();

			printf(" Los kilómetros ingresados son: %.2f \n", x);

			Separador();

			printf(" Precios de Aerolíneas Argentinas: %.2f \n \n", y);


			printf(" I- Precio con tarjeta de débito: %.2f", precioDebitoAerolineas);
			printf("\n II- Precio con tarjeta de crédito: %.2f", precioCreditoAerolineas);
			printf("\n III- Precio con bitcoin: %f", precioBitcoinAerolineas);
			printf("\n IV- Precio unitario: %.2f \n", precioUnitarioAerolineas);

			Separador();

			printf(" Precios de Latam: %.2f \n \n", z);


			printf(" I- Precio con tarjeta de débito: %.2f", precioDebitoLatam);
			printf("\n II- Precio con tarjeta de crédito: %.2f", precioCreditoLatam);
			printf("\n III- Precio con bitcoin: %f", precioBitcoinLatam);
			printf("\n IV- Precio unitario: %.2f \n", precioUnitarioLatam);

			Separador();

			printf(" La diferencia de precios es: %.2f \n", diferenciaPrecio);

			Separador();

			system("pause");
			Limpiar();

			}

		break;

		case 5:
			printf(" Carga forzada de datos. \n \n");

			x= 7090;
			y= 162965;
			z= 159339;

			precioDebitoAerolineas = CalcularPrecioDebito(y);
			precioCreditoAerolineas = CalcularPrecioCredito(y);
			precioBitcoinAerolineas = CalcularPrecioBitcoin(y);
			precioUnitarioAerolineas = CalcularPrecioUnitario(x, y);

			precioDebitoLatam = CalcularPrecioDebito(z);
			precioCreditoLatam = CalcularPrecioCredito(z);
			precioBitcoinLatam = CalcularPrecioBitcoin(z);
			precioUnitarioLatam = CalcularPrecioUnitario(x, z);

			diferenciaPrecio= DiferenciaPrecios(y, z);

			printf(" Los km ingresados forzosamente: %.2f \n", x);

			Separador();

			printf(" Precios de Aerolíneas Argentinas: %.2f \n \n", y);


			printf("\n I- Precio con tarjeta de débito: %.2f", precioDebitoAerolineas);
			printf("\n II- Precio con tarjeta de crédito: %.2f", precioCreditoAerolineas);
			printf("\n III- Precio con bitcoin: %.2f", precioBitcoinAerolineas);
			printf("\n IV- Precio unitario: %.2f \n", precioUnitarioAerolineas);

			Separador();

			printf(" Precios de Latam: %.2f \n \n", z);
			printf("\n I- Precio con tarjeta de débito: %.2f", precioDebitoLatam);
			printf("\n II- Precio con tarjeta de crédito: %.2f", precioCreditoLatam);
			printf("\n III- Precio con bitcoin: %.2f", precioBitcoinLatam);
			printf("\n IV- Precio unitario: %.2f \n", precioUnitarioLatam);

			Separador();

			printf(" La diferencia de precios es: %.2f \n", diferenciaPrecio);

			Separador();

			system("pause");
			Limpiar();

		break;

		case 6:
			printf("Saliendo, hasta la próxima! \n");
		break;

		default:
			printf("Error, ingrese una opción válida. \n");
		break;

		}

	}while(opcionElegida != 6);

}

