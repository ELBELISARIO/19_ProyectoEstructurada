/* Autor: Belisario Nazario Anselmo                         */
/* E-mail: unsis.b@gmail.com                                */
/* Fecha de creación: 20/04/2018                            */
/* Fecha de actualizacion:  20/04/2018                      */
/* Descripcion:Programa que imprime tres arreglos diferentes*/

#include<stdio.h>
#include <stdlib.h>

 int main()
 {
  int matriz_cuadrada[5][5], matriz_columna[1][5], matriz_rectangular[5][8];//declaracion de las matrices con sus respectivos tamaños.
  puts("\n\tPrograma que imprime tres diferentes tipos de matrices");
  //Imprime una matriz cuadrada.
  puts("\nMatriz cuadrada");
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      matriz_cuadrada[i][j]=rand() % (100+1);//llenado de la matriz con numeros aleatorios.
      printf(" %d ",matriz_cuadrada[i][j]);//Impresion del elemento de la matriz.
    }
    printf("\n");
  }

  //Imprime una matriz columna
  puts("\nMatriz columna");
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 1; j++)
    {
      matriz_columna[i][j]=rand() % (100+1);//llenado de la matriz con numeros aleatorios.
      printf(" %d ",matriz_columna[i][j]);//Impresion del elemento de la matriz.
    }
    printf("\n");
  }

  //Imprime una matriz rectangular.
  puts("\nMatriz rectangular");
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      matriz_rectangular[i][j]=rand() % (100+1);//llenado de la matriz con numeros aleatorios.
      printf(" %d ",matriz_rectangular[i][j]);//Impresion del elemento de la matriz.
    }
    printf("\n");
  }
 }
