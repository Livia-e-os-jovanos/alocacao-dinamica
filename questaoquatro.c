//Escreva um programa que aloque dinamicamente um vetor de inteiros, leia n valores e calcule a soma de todos eles.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // usuário digita o tamanho do vetor de inteiros
    int n;
    int soma = 0;
    printf("Digite o tamanho do vetor de inteiros: ");
    scanf("%d", &n);

    //aloca memoria para o ponteiro
   int *vetor = (int*) malloc(n * sizeof(int));
     if (vetor == NULL) { // verificando se há espaço na memória
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // faz o usuário digitar os valores e a variável soma acumula eles
    for (int i = 0; i < n; i++) {
        printf("Digite um número\n");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);   
    }
    printf ("O resultado da soma dos valores do vetor é: %d \n", soma);
    free (vetor); //liberando memoria caso seja necessario
    return 0;
}
