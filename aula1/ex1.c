#include <stdio.h>

/**
 * Verificar se o número informado é par ou impar
 * @author Lucas Colette
 * @RA 212114030
 */

int main ( void ) {
	int n;

	printf("\nInforme um número:");
	scanf("%d", &n);

	if ( n % 2 == 0 ) {
		printf("\nO número é par");
	} else {
		printf("\nO número é ímpar");
	}

	printf("\n");

	getchar();
}