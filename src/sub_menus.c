#include <stdio.h>
#include <stdlib.h>
#include "sub_menus.h"
#include "salida_y_entrada_de_datos.h"

void SubMenu(char pregunta [],float* aerolineas , float* latam)
{
	int preciolatam;
	int precioaerolineas;
	char respuesta;
	printf("%s",pregunta);
	fflush(stdin);
	scanf("%c",&respuesta);
	if(respuesta=='a')
	{
		precioaerolineas=PedirFloat(" ingrese un precio \n");
		*aerolineas=precioaerolineas;
	}
	else
	{
		if(respuesta=='b')
		{
			preciolatam=PedirFloat(" ingrese un precio \n");
			*latam=preciolatam;
		}
	}
	while(respuesta!='a' && respuesta!='b')
	{
		printf("elija una opcion valida \n\n");
		printf("%s",pregunta);
		fflush(stdin);
		scanf("%c",&respuesta);
		if(respuesta=='a')
			{
				precioaerolineas=PedirFloat(" ingrese un precio \n");
				*aerolineas=precioaerolineas;
			}
			else
			{
				if(respuesta=='b')
				{
					preciolatam=PedirFloat(" ingrese un precio \n");
					*latam=preciolatam;
				}
			}
	}



}

