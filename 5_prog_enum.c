/*--------------------------------------------------------------*/
/* Autor:Nazario Anselmo Belisario                              */
/* Fecha de creación:17-04-2018                                 */
/* E-mail:unsis.b@gmail.com                                     */
/* Fecha de actualización: 22-04-2018                           */
/* Programa: Muestra la utilizacion de enum			        				*/
/*--------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include<stdio.h>

//Declaracion de enum.

//tipo Identificador{Lista de identificadores separadas con comas};

enum DIAS{L,M,MI,J,V,S,D};
enum MESES{EN=1, FE, MA, AB, MAY, JU, JUL, AG, SE, OC, NO, DI};
enum FRUTAS{manza, mango, durazno, pera, uva, pina};
enum PRECIAUTO{NUEVO=10, SEMINUEVO=5, USADO, INSERVIBLE}vr1,vr2,vr3;

int main(void)
{
	printf("\n%d\n",USADO);

	for (enum MESES index = EN; index <= DI; index++)
	{
		printf(" %d ",index);

		switch(index)
		{
			case EN:
				printf("\nENERO\n");
				break;
			case OC:
				printf("\nOCTUBRE\n");
				break;
		}
	}
	printf("%d\n",vr1);
	printf("%d\n",vr2);
	printf("%d\n",vr3);
	printf("\n");
	return 0;
}
