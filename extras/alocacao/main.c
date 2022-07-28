#include <stdio.h>
#include <stdlib.h>
#define TAM 10


int* aloca(int *A, int *B) {
    int *resultado = malloc(TAM * sizeof(int));
    for(int i = 0; i < TAM; i++) {
        resultado[i] = A[i] + B[i];
    }
    
    return resultado;
}

int main() {
    int vetorA[TAM], vetorB[TAM];
    int *vetorC;
    for(int i = 0; i < TAM; i++) {
        scanf("%d %d", &vetorA[i], &vetorB[i]);
    }

    vetorC = aloca(vetorA, vetorB);
    for(int i = 0; i < TAM; i++) {
        printf("%d\n", vetorC[i]);
    }

    free(vetorC);
    return 0;
}