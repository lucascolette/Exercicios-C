#include <stdio.h>

/**
 * Informar o maior número
 * @author Lucas Colette
 * @RA 212114030
 */

int main ( void ) {
	int n,maior,i;
	maior = 0;
	for ( i = 1; i<=3; i++ ) {
		printf("\nInforme um número:");
		scanf("%d", &n);
		if ( i == 1 || n > maior ) {
			maior = n;
		}
	}

	printf("\nO maior número é %d", maior);

	printf("\n");

	getchar();
}