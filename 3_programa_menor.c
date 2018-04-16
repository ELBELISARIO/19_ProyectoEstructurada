/*Autor: Belisario Nazario Anselmo
Contacto: unsis.b@gmail.com
Fecha: 14/04/2018
Descripcion: Software que determina el numero menor dentro de un arreglo*/
#include <stdio.h>
#define N 5
int main(void)
{
  printf("\n\tDetermina un numero menor dentro de un arreglo de N elementos");
  int x[N],menor=0;
  //El siguiente for llena el vector con N elementos
  for (int i = 0;i<N;i++)
  {
  	printf("\nInserte un numero en la posicion %d: ",i);
  	scanf("%d",&x[i]);
  }
  //El siguiente for determina el numero menor.
  for(int i = 1; i < N; i++)
  {
    if(menor>x[i])
      	menor=x[i];
  }
  printf("\n\tEl numero menor es: %d\n",menor);
  return 0;
}