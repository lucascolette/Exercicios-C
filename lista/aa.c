/*
 * Lista de exercícios em C
 * Lista AA
 *
 * @author Lucas Colette
 * @RA 212114030
 *
 * Código disponível no GitHub
 * github.com/lucascolette/Exercicios-C
 */

#include <stdio.h>

int caso1 ( void ) {
  int i, soma=0;

  for ( i=1; i<=20; i++ ) {
    soma = soma + (i*3);
  }
  printf("\nSoma do triplo dos 20 primeiros numeros: %d", soma);
  getchar();
}

int caso2 ( void ) {
  int i, n, mult = 0;

  printf("Informe um numero para exibir sua tabuada.");
  scanf("%d", &n);
  for ( i=1; i<=10; i++ ) {
    mult = i * n;
    printf("\n %d  X  %d  =  %d", i, n, mult);
  }
  getchar();
}

int caso3 ( void ) {
  int i, n, sequencia = 1;

  printf("\nSequê ncia: 1  ,");
  for ( i=2; i<10; i++ ) {
    if (i == 2 ) {
      n = 3;
      sequencia = sequencia + n;
      printf("  %d,", sequencia);
    } else{
      n = n * 2;
      sequencia = sequencia + n;
      if ( i < 15 ) printf("  %d,", sequencia);
      else printf("  %d.", sequencia);
    }
  }
  getchar();
}

int caso4 ( void ) {
  float mediaTotal=0, mediaAluno[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, nota;
  int i, j;

  for( i=0; i<20; i++ ) {
    for( j=1; j<=2; j++ ) {
      printf("Valor de i: %d",i+1);
      printf("\nInforme a %d nota", j);
      scanf("%f", &nota);
      mediaAluno[i] = mediaAluno[i] + nota;
    }
    mediaAluno[i] = mediaAluno[i] / 2;
    mediaTotal = mediaTotal + mediaAluno[i];
  }
  printf("\nMostrando Resultados:");
  for ( i=0; i<=19; i++) {
    printf("\n Aluno Numero %d: %.2f", i , mediaAluno[i]);
    if ( mediaAluno[i] >= 6)  printf("  Aprovado");
    else printf("  Reprovado");
  }
  mediaTotal = mediaTotal / 20;
  printf("\nMedia total da Classe: %.2f", mediaTotal);
  getchar();
}

int caso5 ( void ) {
  int i, a=1, b=0;
  float soma=0;

  printf("\n Sequencia 1, -1/2 , 1/4 , -1/6, 1/8, -1/10 ....");
  
  for (i=1; i<=11; i++ ) {
    if (b == 0) soma = soma + a;
    else soma = soma + (a/b);
    if (i % 2 == 0) a = -1;
    else a = 1;
    b = b + 2;
  }
  printf("\nSoma dos 11 primeiros termos da seguencia: %.2f ", soma);
  getchar();
}

int caso6 (void){
  int i=1,cont=1, soma=0;

  do {
    if ( cont % 2 != 0 ) {
      soma = soma + (cont * cont);
      i++;
    }
    cont++;
  } while ( i <= 10 );

  printf("\n Soma do quadrado dos 10 primeiros impares: %d", soma);
  getchar();
}

int caso7 (void){
  int i, b=1;

  printf("\n Sequência:");
  
  for ( i=1; i<=15; i++ ) {
    if (i == 1) {
      printf("  1  ,");
    } else {
      b=b*3;
      if (i < 15) {
        printf("1/%d  ,", b);
      } else { 
        printf("1/%d .", b);
      }
    }
  }
  getchar();
}

int main ( void ) {
  
  int flag;

  do {
    printf("\n");
    printf("\n (1) Exercicio 6.03");
    printf("\n (2) Exercicio 6.04");
    printf("\n (3) Exercicio 6.05");
    printf("\n (4) Exercicio 6.06");
    printf("\n (5) Exercicio 6.07");
    printf("\n (6) Exercicio 6.08");
    printf("\n (7) Exercicio 6.09");
    printf("\n0 - Sair\n");

    scanf("%d", &flag);

    switch ( flag ) {
      case 1:
        caso1();
      break;
      case 2:
        caso2();
      break;
      case 3:
        caso3();
      break;
      case 4:
        caso4();
      break;
      case 5:
        caso5();
      break;
      case 6:
        caso6();
      break;
      case 7:
        caso7();
      break;
    }

  } while ( flag != 0 );

  getchar();
  printf("\n\n");

}