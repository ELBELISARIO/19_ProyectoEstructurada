/*------------------------------------------------------------*/
/* Autor: Belisario Nazario Anselmo --------------------------*/
/* Fecha: 11/04/2018 -----------------------------------------*/
/*Contacto: unsis.b@gmail.com---------------------------------*/
/* Descripción: un programa que permita encontrar las veces que 
   se repite los números del 0 - 9 en un arreglo unidimensional dado..*/
/*------------------------------------------------------------*/

#include <stdio.h>
#define N 9

int main()
{
	int x[N],opcion,contador=0,numero,conta;
	for (int i = 0; i < N; i++)
	{
		printf("\n\tInserta un numero en la posicion %d: ",i);
		scanf("%d",&x[i]);
	}
	printf("\n\tInserta una opcion: \n\t1) Saber cuantas veces se repite cada numero dentro del arreglo.\n\t2) Saber cuantas veces se repite un numero particular dentro del arreglo.\n\n\t");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:
			for (int i = 0; i < N; i++)
			{
				conta=1;
				for (int j = 1; j< N; j++)
				{
					if(x[i]==x[j])
						{
							conta=conta+1;

						}
				}
				printf("\n\tEl elemento %d se repite %d veces\n",x[i],conta);
			}
			break;	
		case 2:
			printf("\n\tInserta un numero a buscar en el arreglo: ");
			scanf("%d",&numero);
			for (int i = 0; i < N; i++)
			{
				if(numero==x[i])
				{
					contador=contador+1;

				}
			}
			printf("\n\tLas veces que aparece el numero %d en el arreglo es %d y se encuentra en las siguientes posiciones: ",numero,contador);
			for (int i = 0; i < N; i++)
			{
				if (x[i]==numero)
				{
					printf("%d ",i);
				}
			}
			printf("\n");
			break;
		default:
			printf("\n\tOpcion invalida vuelva a ejecutar el programa\n");
	}
	return 0;
}
