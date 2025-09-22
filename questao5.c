#include <stdio.h>
#include <stdlib.h>  

int main() {
    int n, i;
    float *notas;  
    float soma = 0, media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);

    notas = (float*) malloc(n * sizeof(float));

    if (notas == NULL) {  
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / n;

    printf("A media das notas é: %f\n", media);

    free(notas);

    return 0;
}
