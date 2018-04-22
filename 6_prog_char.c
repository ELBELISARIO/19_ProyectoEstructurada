/*--------------------------------------------------------------*/
/* Autor: Belisario Nazario Anselmo                             */
/* Fecha de creación:18-04-2018                                 */
/* E-mail: unsis.b@gmail.com                                    */
/* Fecha de actualización: 22-04-2018                           */
/* Programa: Muestra la utilizacion de assci en unarreglo.   	*/
/*--------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include<stdio.h>

const int tamanio=5; //definiendo la constante.

int main()
{
	char c, d, array[tamanio], array2[tamanio];
	int index;


	index=0;
	puts("INSERTE LETRAS MAYUSCULAS");
	while ((c=getchar())!='\n')//
	{
	   if(c>=65&&c<=90)//validando unicamente caracteres:letras minúscula
		{
		//c=c+32;
		array[index]=c+32;
		index++;
		}
	}
	//va a leer caracter por caracter hasta donde nostros queramos.
	for(int i=0;i<tamanio;i++)
	{
	printf("%c",array[i]);
	}
	printf("\n");

	puts("inserte letras minusculas");
	index=0;
	while((d=getchar())!='\n')
	{
		if (d>=97&&d<=122)
		{
			d=d-32;
			array2[index]=d;
			index++;
		}
	}

	for(int i=0;i<tamanio;i++)
	{
	printf("%c",array2[i]);
	}
	printf("\n");
return 0;
}
