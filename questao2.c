#include <stdio.h>
#include <stdlib.h>
/*Modifique o programa anterior para dobrar o tamanho do vetor
usando realloc, mantendo os valores antigos e preenchendo
os novos.*/
int main () {
    // usuário digita o tamanho do vetor
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // tenta alocar o espaço necessário
    int *vetor = malloc(n * sizeof(*vetor));
    if (vetor == NULL) {
        printf("Erro na alocação");
        return 1;
    }

    // faz o usuário digitar os valores e depois exibe
    for (int i = 0; i < n; i++) {
        printf("Digite um número\n");
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }
    
    // usa uma váriavel auxiliar para realocar o vetor
    int *tmp = realloc(vetor, sizeof(vetor) * n * 2);
    if (tmp == NULL) {
        printf("Erro ao realocar");
    } else {
        vetor = tmp;
    }

    // faz o usuário digitar os valores e depois exibe
    for (int i = n; i < n * 2; i++) {
        printf("Digite um número\n");
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < n * 2; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}