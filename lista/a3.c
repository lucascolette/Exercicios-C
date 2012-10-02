/*
 * Lista de exercícios em C
 * Lista A3
 *
 * @author Lucas Colette
 * @RA 212114030
 *
 * Código disponível no GitHub
 * github.com/lucascolette/Exercicios-C
 */

#include <stdio.h>

/*
 * Ex701
 */
int ex701 ( void ) {
  printf("\nComponente: número máximo de elementos em um array");
  printf("\nÍndice: localização de uma chave do array");
  printf("\nConteúdo: e o que esta armazenado em cada chave do array");
  getchar();
}

/*
 * Ex702
 */
int ex702 ( void ) {
  printf("\nO vetor apresenta apenas uma linha, já matriz possui linhas e colunas");
  getchar();
}

/*
 * Ex703
 */
int ex703 ( void ) {
  int i, vet1[5], vet2[5], vetjun[10];

  printf("\nInforme os Valores do Vetor");

  for ( i=0; i<5; i++ ) scanf("%d", &vet1[i]);

  printf("\nInforme os Valores do Vetor");

  for ( i=0; i<5; i++) scanf("%d", &vet2[i]);

  for(i=0;i<5;i++){
    vetjun[i] = vet1[i];
    vetjun[i+5] = vet2[i];
  }
  printf("\nVetor concatenado: ");
  for ( i=0; i<10; i++ ) {
    printf("%d  ", vetjun[i]);
  }

  getchar();

}

/**
 * Ex704
 */
int ex704 ( void ) {
  int i, vet1[5], vet2[5], vetsoma[5];

  printf("\nInforme os Valores do Vetor:");

  for ( i=0; i<5; i++ ) scanf("%d", &vet1[i]);

  printf("\nInforme os Valores do Vetor");

  for ( i=0; i<5; i++ ) scanf("%d", &vet2[i]);
  printf("\nVetor Soma: ");

  for ( i=0; i<5; i++) {
    vetsoma[i] = vet1[i] + vet2[i];
    printf("%d  ", vetsoma[i]);
  }

  getchar();
}

/**
 * Ex705
 */
int ex705 ( void ) {
  int i, soma, maiorMedia, menorMedia, naMedia, vet[5];
  float media;
  printf("\nInforme os números do vetor:\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &vet[i]);
  }
  // Soma os elementos
  soma = 0;
  for ( i = 0; i < 5; i++ ) {
    soma = soma + vet[i];
  }

  media = soma/5;
  maiorMedia = 0;
  menorMedia = 0;
  naMedia = 0;

  for ( i = 0; i < 5; i++ ) {
    if ( vet[i] > media ) {
      maiorMedia++;
    } else if ( vet[i] == media ) {
      naMedia++;
    } else {
      menorMedia++;
    }
  }

  printf("\nMédia dos elementos: %f", media);
  printf("\nQtd. de elementos maiores que a média: %d", maiorMedia);
  printf("\nQtd. de elementos iguais a média: %d", naMedia);
  printf("\nQtd. de elementos menores que a média: %d", menorMedia);

  getchar();

}

/*
 * Ex 7.06
 */
int ex706 ( void ) {
  /* Soma de 50 elementos de um array */
  int i, soma, vet[50];
  srand(time(NULL));

  for ( i = 0; i < 50; i++ ) {
    vet[i] = rand() % 10;
  } 

  soma = 0;

  for ( i = 0; i < 50; i++ ) {
    soma = soma + vet[i];
  } 

  printf("\nA soma dos 50 elementos é: %d", soma);

  getchar();

}

/*
 * Ex 7.07
 */
int ex707 ( void ) {
  int i, vet[10];
  float soma;

  for ( i = 1; i <= 10; i++ ) {
    vet[i] = i+2;
  } 

  soma = 0;

  for ( i = 1; i <= 10; i++ ) {
    soma = soma + (i/vet[i]);
  } 

  printf("\nA soma (i/v[i]) dos 10 elementos é: %f", soma);

  getchar();

}

/*
 * Ex 7.08
 */
int ex708 ( void ) {
  int i, c, vet1[3] = {5,4,3}, vet2[3] = {5,4,3}, flag;

  // Conferindo
  flag = 0;
  for ( i = 0; i < 3; i++ ) {
    if ( vet1[i] == vet2[i] ) flag++;
  }

  if ( flag == 3 ) {
    printf("Os vetores são iguais !");
  } else {
    printf("Os vetores não são iguais !");
  }

  getchar();

}

/**
 * Ex 7.09
 */
int ex709 ( void ) {
  int i, t, n, vet[100];
  srand(time(NULL));

  printf("\n100 números aleatórios e dizer se há algum igual\n");

  for ( i = 0; i < 100; i++ ) {
    vet[i] = rand() % 10;
  }

  printf("\nInforme qual valor você deseja verificar no array: ");
  scanf("%d", &n);

  // Verifica
  for ( i = 0; i < 100; i++ ) {
    if ( vet[i] == n ) t++;
  }

  // Show
  printf("\nTotal de elementos com valor %d: %d", n, t);

  getchar();

}

/**
 * Ex 7.10
 */
int ex710 ( void ) {
  int i, vet1[10], vet2[10], soma=0;

  printf("\nInforme os Valores do Vetor");

  for ( i=0; i<10; i++ ) scanf("%d", &vet1[i]);

  printf("\nInforme os Valores do Vetor");

  for ( i=0; i<10; i++ ) {
    scanf("%d", &vet2[i]);
    if (vet2[i] == vet1[i]) soma++;
  }
  if (soma == 1) printf("\n %d elemento do primeiro vetor tem um correspondente igual no segundo vetor", soma);
  else if (soma > 1) printf("\n %d elementos do primeiro vetor tem correspondentes iguais no segundo vetor", soma);
  else if (soma == 0) printf("\n Nao existem elementos correspondentes iguais nos vetores");
  getchar();
}

/**
 * Ex 7.11
 */
int ex711 ( void ) {
  int i, j, mat[5][5], mattrans[5][5];
  printf ("\nInforme os Valores da Matriz");
  for ( i=0; i<5; i++ ) {
    for ( j=0; j<5; j++ ) {
      scanf("%d", &mat[i][j]);
      mattrans[j][i] = mat[i][j];
    }
  }
  printf("\n Matriz Transposta:");
  printf("\n");
  for ( i=0; i<5; i++ ) {
    for ( j=0; j<5; j++ ) {
      printf("%d  ", mattrans[i][j]);
    }
    printf("\n");
  }
  getchar();
}

/**
 * Ex 7.13
 */
int ex713 ( void ) {
  int i,j,cont=0,mat[5][5];
  printf("\n Informe os Valores da Matriz");
  for ( i=0; i<5; i++ ) {
    for ( j=0; j<5; j++ ) {
      scanf("%d", mat[i][j]);
    }
  }
  if ( (mat[0][0] == 1) && (mat[1][1] == 1) && (mat[2][2] == 1) && (mat[3][3] == 1) && (mat[4][4] == 1) ) {
    for ( i=0; i<5; i++ ){
      for ( j=0; j<5; j++ ){
        if ( i != j ){
          if ( mat[i][j] == 0) cont++;
        }
      }
    }
  }
  else printf("\n Não é matriz Identidade!");
  if (cont == 20) printf("\n A matriz é identidade!");
  else printf("\n Não é matriz Identidade!");
  getchar();
}

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