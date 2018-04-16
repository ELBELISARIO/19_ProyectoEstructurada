#include <stdio.h>

/* DECLARACION DE CONSTANTES CON #define*/
/* No se reservan espacios en memoria */
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN  0
#define MAX 100

/* ImpÄºementaciÃ³n de macro */
#define SUMA(x, y) x+y
#define RESTA(x, y) x-y
#define MULT(x, y) x*y
#define DIV(x, y) x/y
#define POTCUADRADO(x) x*x
#define POTCUBO(x) x*x*x

/* Definir ciclos con macro */
#define CICLOFOR(x, y) for(x=0; x < y; x++)
#define CICLOWHILE(a,b) (a>b)? a:b

/*Declaracion de constantes con cont*/
/* Se reservan espacios en memoria */
const float pi = 3.1416;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max = 100;

int main(void)
{

  /* Imprimir constantes #define */
  printf("El valor de PI:\n %f \n", PI);
  printf("El valor de G:\n %f \n", G);
  printf("El valor de TAMANIO:\n %f \n", TAMANIO);
  printf("El valor de MIN:\n %f \n", MIN);
  printf("El valor de MAX:\n %f \n", MAX);

  /* Imprimir macros */
  printf("Operacion SUMA: \n %d \n", SUMA(3,4));
  printf("Operacion RESTA: \n %d \n", RESTA(3,4));
  printf("Operacion MULT: \n %d \n", MULT(3,4));
  printf("Operacion DIV: \n %d \n", DIV(3,4));
  printf("Operacion POTCUADRADO: \n %d \n", POTCUADRADO(3));
  printf("Operacion POTCUBO: \n %d \n", POTCUBO(3));

  /* Imprimir constantes const */
  printf("El valor de pi:\n %f \n", pi);
  printf("El valor de g:\n %f \n", g);
  printf("El valor de tamanio:\n %f \n", tamanio);
  printf("El valor de min:\n %f \n", min);
  printf("El valor de max:\n %f \n", max);

  /* Utilizando las macros de ciclo */
  int x=0;
  int y = 10;
  CICLOFOR(x, y)
  {
    printf("\n Hola Mundo...\n" );
  }
  printf("El numero mayor entre 1 y 5 es: %d", CICLOWHILE(1,5));
  return 0;
}