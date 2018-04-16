/*Autor: Belisario Nazario Anselmo
Contacto: unsis.b@gmail.com
Fecha: 14/04/2018
Descripcion:Reordena un arreglo de números enteros de forma ascendente */

#include <stdio.h>
#define N 5

int main()
{
  printf("\n\tReordena un arreglo");
  int x[N],aux;
  //El siguiente for llena el vector con N elementos
  for (int i = 0;i<N;i++)
  {
  	printf("\nInserte un numero en la posicion %d: ",i);
  	scanf("%d",&x[i]);
  }	
  //El siguiente for ordena los elementos del arreglo
  for (int i = 1; i <N ; i++)
  {
  	for (int j= 0; j < N-i; j++)
  	{
  		if (x[j]>x[j+1])
  		{
  			aux=x[j];
  			x[j]=x[j+1];
  			x[j+1]=aux;
  		}
  	}
  }
  //Con el siguiete for se imprime los elementos ordenados.
  for (int i = 0; i < N; i++)
  {
  	printf("%d",x[i]);
  }
	return 0;
}