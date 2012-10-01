#include <stdio.h>
#include <math.h>

/**
 * Fazer um programa que leia uma matriz nxm e calcule:
 * a - Média dos elementos
 * b - Porcentagem de pares e ímpares
 * c - Produto dos elementos da diagonal principal
 * d - Maior elemento
 * e - Média geométrica dos elementos ímpares
 * f - Soma dos elementos da diagonal secundária
 * g - Produto dos elementos acima da diagonal principal
 * h - Média ponderada utilizando como peso a soma dos índices
 * i - Produto dos elementos de cada linha
 * j - Menor elemento ímpar
 * k - Média dos elementos internos da matriz
 *
 * @author Lucas Colette
 * @RA 212114030
 */

int main ( void ) {
  
  int i,j,n,m,a[20][20],qi,maior;
  float med,mg,p,produtoImpares;

  printf("\nNúmero de linhas:");
  scanf("%d", &n);
  printf("\nNúmero de colunas:");
  scanf("%d", &m);

  /* Leitura da Matriz */
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("\nA[%d][%d] = ", i, j);
      scanf("%d", &a[i][i]);
    }
  }

  /* Média dos elementos */
  med = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      med = med + a[i][j];
    }
  }

  printf("\nMédia: %2f", med/(n*m));

  /* Porcentagem */
  qi = 0;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (a[i][j] % 2 == 1) {
        qi = qi+1;
      }
    }
  }

  printf("\nPorcentagem de impares: %2f%%", (qi*100.0)/(n*m));
  printf("\nPorcentagem de pares: %2f%%", ((n*m)-qi)*100.0/(n*m));

  /* Produto da diagonal principal */

  if (n == m) {
    p = 1;
    for (i = 0; i < m; i++) {
      p = p*a[i][i];
    }
    printf("\nProduto diagonal principal = %2f", p);
  } else {
    printf("\nImpossível calcular o produto, esta matriz não é quadrada");
  }

  /* Maior elemento */
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if ( j == 1 || a[i][j] > maior ) {
        maior = a[i][j];
      }
    }
  }

  printf("\nMaior elemento: %d", maior);

  /* Média geométrica dos elementos ímpares */
  mg = 0.0;
  produtoImpares = 0.0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if ( a[i][j] % 2 == 1 ) {
        produtoImpares = produtoImpares*a[i][j];
      }
    }
  }

  printf("\nMédia geométrica dos elementos ímpares: %2f", produtoImpares); 


  printf("\n");
  getchar();
}