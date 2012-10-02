/*
 * Lista de exercícios em C
 * Lista A4
 *
 * @author Lucas Colette
 * @RA 212114030
 *
 * Código disponível no GitHub
 * github.com/lucascolette/Exercicios-C
 */

#include <stdio.h>



int main ( void ) {
  
  int flag; 

  do {
    printf("\n");
    printf("\n1 - Exercício 7.01");
    printf("\n2 - Exercício 7.02");
    printf("\n3 - Exercício 7.03");
    printf("\n4 - Exercício 7.04");
    printf("\n5 - Exercício 7.05");
    printf("\n6 - Exercício 7.06");
    printf("\n7 - Exercício 7.07");
    printf("\n8 - Exercício 7.08");
    printf("\n9 - Exercício 7.09");
    printf("\n10 - Exercício 7.10");
    printf("\n11 - Exercício 7.11");
    printf("\n13 - Exercício 7.13");
    printf("\n0 - Sair\n");
    scanf("%d", &flag);

    switch ( flag ) {
      case 1:
        ex701();
      break;
      case 2:
        ex702();
      break;
      case 3:
        ex703();
      break;
      case 4:
        ex704();
      break;
      case 5:
        ex705();
      break;
      case 6:
        ex706();
      break;
      case 7:
        ex707();
      break;
      case 8:
        ex708();
      break;
      case 9:
        ex709();
      break;
      case 10:
        ex710();
      break;
      case 11:
        ex711();
      break;
      case 13:
        ex713();
      break;
    }

  } while ( flag != 0 );

  getchar();
  printf("\n\n");

}