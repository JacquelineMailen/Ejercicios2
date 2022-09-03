/*
 ============================================================================
 Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
 a) El promedio de los positivos y su mínimo.
 b) El promedio de los negativos y su máximo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	char respuesta;

	int acumuladorPositivos = 0;
	int acumuladorNegativos = 0;
	int contadorPositivos = 0;
	int contadorNegativos = 0;
	float promedioPositivos;
	float promedioNegativos;
	int banderaPositivos = 0;
	int banderaNegativos = 0;
	int numeroMinimo;
	int numeroMaximo;

	do{
		printf("Ingrese un numero:");
		scanf("%d", &numero);

		if(numero>0)
		{
			acumuladorPositivos+=numero;
			contadorPositivos++;
			if(banderaPositivos==0 || numero<numeroMinimo)
			{
				numeroMinimo=numero;
				banderaPositivos=1;
			}
		}
		else
		{
			acumuladorNegativos+=numero;
			contadorNegativos++;
			if(banderaNegativos==0 || numero>numeroMaximo)
			{
				numeroMaximo=numero;
				banderaNegativos=1;
			}

		}
		//Salida del bucle
		printf("Desea continuar? s/n: ");
		fflush(stdin);
		scanf("%c", &respuesta);
		while(respuesta!='s' && respuesta!='n')
		{
			printf("Error ingrese lo que corresponde");
			fflush(stdin);
			scanf("%c", &respuesta);
		}

	}while(respuesta=='s');


	promedioPositivos = (float) acumuladorPositivos / contadorPositivos;
	promedioNegativos = (float) acumuladorNegativos / contadorNegativos;

	printf("\nEl promedio de negativos es:%.2f y su maximo %d ",
			promedioNegativos, numeroMaximo);
	printf("\nEL promedio de positivos es:%.2f y su minimo %d", promedioPositivos,
			numeroMinimo);

	return 0;
}
