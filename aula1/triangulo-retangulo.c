#include <stdio.h>
#include <conio.h>

/*
 * Programa que solicita os 3 lados de um triangulo
 * e informa se ele é retangulo
 *
 * @author Lucas Colette
 */

int main ( void ) {
	
	int a,b,c,maiorLado;

	printf("\nInforme o lado 1 do triangulo:");
	scanf("%d", &a);
	printf("\nInforme o lado 2 do triangulo:");
	scanf("%d", &b);
	printf("\nInforme o lado 3 do triangulo:");
	scanf("%d", &c);

	/* Verifica se é triangulo */
	if ( (a>(b+c)) || (b>(a+c)) || (c>(b+a)) ) {
		printf("\nEstes lados não formam um triangulo\n");
	} else {
		/* Encontra o maior lado */
		if ( a > b ) {
			maiorLado = a;
		} else {
			if ( b > c ) {
				maiorLado = b;
			} else {
				maiorLado = c;
			}
		}
		/* Verifica se é retangulo */
		if ( (maiorLado*maiorLado)==((a*a)+(b*b))||(maiorLado*maiorLado)==((b*b)+(c*c))||(maiorLado*maiorLado)==((a*a)+(c*c)) ) {
			printf("\nFeito, esté triangulo é retangulo\n");
		} else {
			printf("\nOps, este triangulo não é retangulo\n");
		}
	}

	getchar();

}