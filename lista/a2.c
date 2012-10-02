/*
 * Lista de exercícios em C
 * Lista A2
 *
 * @author Lucas Colette
 * @RA 212114030
 *
 * Código disponível no GitHub
 * github.com/lucascolette/Exercicios-C
 */

#include <stdio.h>

/*
 * Calcula o fatorial de um número
 * Exercicio 6.08
 */
void CalcFatorial ( void ) {
  int i, n, fat = 1;
  printf("\nDigite um número:");
  scanf("%d", &n);
  for ( i=n; i>1; i-- ) {
    fat *= i;
  }
  printf("\nFatorial: %d", fat);
  getchar();
}

/*
 * Exercicio 6.01
 */
void SomaQuadrados ( void ) {
  int i, soma = 0;
  for (i=1; i<11; i++) {
    soma = soma + (i*i);
  }
  printf("\nA soma dos quadrados de 1 até 10 é: %d", soma);
  getchar();
}

/*
 * Exercicio 6.02
 */
void Alo ( void ) {
  int i, n;
  printf("\n Informe um numero inteiro:");
  scanf("%d", &n);
  if ( n > 0 ){
    for ( i=1;i<=n;i++ ) {
      printf(" Alo ");
    }
  }
  getchar();
}

int main ( void ) {
  
  int flag; 

  do {
    printf("\n1 - Exercício 6.08");
    printf("\n2 - Exercício 6.01");
    printf("\n3 - Exercício 6.02");
    printf("\n0 - Sair\n");
    scanf("%d", &flag);

    switch ( flag ) {
      case 1:
        CalcFatorial();
        break;
      case 2:
        SomaQuadrados();
        break;
      case 3:
        Alo();
        break;
    }

  } while ( flag != 0 );

  getchar();
  printf("\n\n");

}