#include <stdio.h>
#include <stdlib.h>
#include "salida_y_entrada_de_datos.h"
#include "calculos.h"
void MostrarResultadosAgencias(int debitoL,int creditoL,float unitarioL,int debitoA,int creditoA,float unitarioA,float precioa,float preciol,float bitcoinA,float bitcoinL,float diferencia)
{


	printf("precio Aerolineas: $%.2f \n",precioa);
	printf("a) Precio con tarjeta de débito:$%d\n",debitoA);
	printf("b) Precio con tarjeta de crédito:$%d\n",creditoA);
	printf("c) Precio pagando con bitcoin :$%.2f BItcoins\n",bitcoinA);
	printf("d) Precio unitario:$%.2f\n\n",unitarioA);
	printf("precio Latam: $%.2f\n",preciol);
	printf("a) Precio con tarjeta de débito:$%d\n",debitoL);
	printf("b) Precio con tarjeta de crédito:$%d\n",creditoL);
	printf("c) Precio pagando con bitcoin :$%.2f BItcoins\n",bitcoinL);
	printf("d) Precio unitario:$%.2f\n\n",unitarioL);
	printf("La diferencia de precio es :$%.2f ",diferencia);


}

void MostrarResultadosHarcodeados(float kilometros,float precioA,float precioL,int interes,int descuento)
{
	int debitoAerolineas;
	debitoAerolineas=CalcularDescuento(precioA, interes);
	int creditoAerolineas;
	creditoAerolineas=CalcularInteres(precioA,interes );
	float bitcoinAerolineas;
	bitcoinAerolineas=PesosABitcoin(precioA);
	float precioUnitarioAerolineas;
	precioUnitarioAerolineas=Dividir(precioA, kilometros);

	int debitoLatam;
	debitoLatam=CalcularDescuento(precioL, descuento);
	int creditoLatam;
	creditoLatam=CalcularInteres(precioL, interes);
	float bitcoinLatam;
	bitcoinLatam=PesosABitcoin(precioL);
	float precioUnitarioLatam;
	precioUnitarioLatam=Dividir(precioL, kilometros);
	float diferencia;
	diferencia=Restar(precioA, precioL);

	printf("KMs ingresados: %.2f\n\n",kilometros);

	printf("precio Aerolineas: $%.2f \n",precioA);
	printf("a) Precio con tarjeta de débito:$%d\n",debitoAerolineas);
	printf("b) Precio con tarjeta de crédito:$%d\n",creditoAerolineas);
	printf("c) Precio pagando con bitcoin :$%.2f BItcoins\n",bitcoinAerolineas);
	printf("d) Precio unitario:$%.2f\n\n",precioUnitarioAerolineas);
	printf("precio Latam: $%.2f\n",precioL);
	printf("a) Precio con tarjeta de débito:$%d\n",debitoLatam);
	printf("b) Precio con tarjeta de crédito:$%d\n",creditoLatam);
	printf("c) Precio pagando con bitcoin :$%.2f BItcoins\n",bitcoinLatam);
	printf("d) Precio unitario:$%.2f\n\n",precioUnitarioLatam);
	printf("La diferencia de precio es :$%.2f ",diferencia);


}


float PedirFloat(char mensaje[])
{
	float numero;
	printf("%s",mensaje);
	scanf("%f",&numero);
	while(numero<1)
	{
		printf("ingresa una  cifra valida \n");
		scanf("%f",&numero);
	}
	return numero;
}

