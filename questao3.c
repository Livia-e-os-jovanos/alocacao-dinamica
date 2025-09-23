#include <stdio.h>
#include <stdlib.h>
/*
Crie uma matriz m × n usando ponteiro de ponteiro (int **).
Preencha cada posição com i + j e exiba a matriz.
*/
int main () {

    //tamanho da matriz
    int m, n;
    printf("Digite o número de linhas: ");
    scanf("%d", &m);
    printf("Digite o número de colunas: ");
    scanf("%d", &n);

    // aloca para um vetor de ponteiros
    int **p = malloc(m * sizeof(p));
    if (p == NULL) {
        printf("Falha ao alocar memória em p\n");
        return 1;
    }

    // cada item vai ter espaço para um vetor
    for (int i = 0; i < m; i++) {
        p[i] = malloc(n * sizeof(p));
        if (p[i] == NULL) {
            printf("Falha ao alocar memória para a linha p[%d]\n", i);
            return 1;
        }
    }

    // i + j preenchendo o vetor
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            p[i][j] = i + j;
        }
    }

    //exibe
    for (int i = 0; i < m; i++) {
        printf("\n");
        for(int j = 0; j < n; j++) {
            printf("%d ", p[i][j]);
        }
    }

    // libera
    for (int i = 0; i < m; i++) {
        free(p[i]);
    }
    free(p);
}