/*
 ============================================================================
 Name        : TP_1.c
 Author      : fabian
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 trabajo practico n1
 elvio fabian maidana
 div c
 */
#include "calculos.h"
#include "sub_menus.h"
#include "salida_y_entrada_de_datos.h"
# define INTERES 25
# define DESCUENTO 10
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	setbuf(stdout,NULL);
	float kilometros;
	kilometros=0;

	float precioAerolineas;  // aerolineas
	precioAerolineas=0;
	int debitoAerolineas;
	int creditoAerolineas;
	float bitcoinAerolineas;
	float precioUnitarioAerolineas;

	float precioLatam;     // latam
	precioLatam=0;
	int debitoLatam;
	int creditoLatam;
	float bitcoinLatam;
	float precioUnitarioLatam;
	float diferencia;

	int flag;
	flag=0;
	int opcion;
	char seguir;
		seguir = 's';
			do
			{
				printf("\n1. Ingresar Kilómetros: ( km=%.2f)\n",kilometros);
				printf("2. Ingresar Precio de Vuelos:(Aerolíneas=$%.2f, Latam=$%.2f) \n",precioAerolineas,precioLatam);
				printf("3. calcular todos los costos\n");
				printf("4. informar resultados\n");
				printf("5. carga forzada de datos\n");
				printf("6. salir \n");
				scanf("%d",&opcion);
				switch(opcion)
				{
					case 1:
						kilometros=PedirFloat("Ingrese Kilómetros:");
					break;
					case 2:
						SubMenu("\na)aerolineas  \nb)latam\n",&precioAerolineas,&precioLatam);
					break;
					case 3:
						if(precioAerolineas>0 && precioLatam>0 && kilometros>0)
						{
							debitoAerolineas=CalcularDescuento(precioAerolineas,DESCUENTO);
							creditoAerolineas=CalcularInteres(precioAerolineas,INTERES);
							bitcoinAerolineas=PesosABitcoin(precioAerolineas);
							precioUnitarioAerolineas=Dividir(precioAerolineas,kilometros);
							debitoLatam=CalcularDescuento(precioLatam,DESCUENTO);
							creditoLatam=CalcularInteres(precioLatam,INTERES);
							bitcoinLatam=PesosABitcoin(precioLatam);
							precioUnitarioLatam=Dividir(precioLatam,kilometros);
							diferencia=Restar(precioAerolineas, precioLatam);
							flag++;
						}
						else
						{
							printf("ingrese el precio  de ambas agencias y la distancia para calcular los resultados \n");
						}
					break;
					case 4:
						if(precioAerolineas>0 && precioLatam>0 && kilometros>0 && flag>0)
						{
						printf("KMs ingresados: %.2f\n\n",kilometros);
						MostrarResultadosAgencias(debitoLatam,creditoLatam,precioUnitarioLatam,debitoAerolineas,creditoAerolineas,precioUnitarioAerolineas,precioAerolineas,precioLatam,bitcoinAerolineas,bitcoinLatam,diferencia);
						}
						else
						{
							printf("debe ingresar el precio  de ambas  agencias y la distancia,asi como pasar por la opcion 3 para mostrar los resultados \n");
						}
					break;
					case 5:
						MostrarResultadosHarcodeados(7090,162965 ,159339,INTERES,DESCUENTO);
					break;
					case 6:
						printf("Gracias por usar nuestra app...");
							seguir = 'n';
					break;
					default:
						printf("Opcion incorrecta...\n");
					break;
					}


				}while(seguir == 's');

}
