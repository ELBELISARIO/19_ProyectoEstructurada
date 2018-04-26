/*----------------------------------------------------------------*/
/* Autor:Nazario Anselmo Belisario                                */
/* Fecha de creación:25-04-2018                                   */
/* E-mail:unsis.b@gmail.com                                       */
/* Fecha de actualización: 25-04-2018                             */
/* Programa: Convierte un numero de decimal a binario y viceversa.*/		        				
/*----------------------------------------------------------------*/


//Directivas y bibliotecas. ojo este programa se compila con el -lm por la biblioteca math
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	

int main() 
{
	 int decimal=0,numero, binario = 0, position = 1,falso=0, j;
	 char bina[100];
	 printf("Ingrese numero a convertir a Binario: ");
	 scanf("%d",&numero);

	 //Convirtiendo de decimal a binario.
	 while(numero > 0)
	 {
	  binario = binario + (numero%2) * position;
	  numero/=2;
	  position *= 10;
	 }
	 printf("El número en Binario es: %d\n",binario);
	 
	 //Convirtiendo numero binario a decimal
	 printf("Inserte el numero binario a convertir en decimal: ");
	 scanf("%s", bina);

	 for (j = 0; bina[j] !='\0'; j++)
	 {
	 	/* code */
	 }
	 j=j-1;
	 for(int i=0;bina[i]!='\0';i++)
	 {
		 if(bina[i]=='0'){
			numero=0;
			decimal+=numero * pow(2,j);
			j--;}
		  else
		  {
			if(bina[i]=='1')
			{
				numero=1;
				decimal+=numero * pow(2,j);
				j--; 
			}
			else{ 
				falso=1;}
		  }	   
	 }
	 //Impresion de resultados.
	 if(falso==1)
	 	printf("El numero no es valido\n");
	 else
		printf("El numero convertido en decimal es %d\n",decimal);
}
