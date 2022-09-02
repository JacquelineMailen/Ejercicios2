/*
 ============================================================================
Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIE 7

int main(void)
{
	setbuf(stdout, NULL);

	int numero;
	int promedio;
	int acumulador=0;


	for(int i=0; i<SIE; i++)
	{
		printf("ingrese un numero: ");
		scanf("\n%d", &numero);

		while(numero>=0)
		{
			printf("ingrese un numero menor y distinto de 0: ");
			scanf("\n%d", &numero);
		}
		acumulador=acumulador+numero;

	}
	promedio = acumulador / SIE;

	printf("El promedio de los numeros es: %d", promedio);
	return 0;
}
