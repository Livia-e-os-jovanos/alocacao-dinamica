#include <stdio.h>
#include <stdlib.h>
/* Leia um número n e aloque dinamicamente um vetor de n
inteiros. Preencha com valores lidos do usuário e depois
imprima todos.*/
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
    // libera
    free(vetor);

    return 0;
}