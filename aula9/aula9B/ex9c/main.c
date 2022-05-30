#include <stdio.h>
#define N 25

int numElementos, maior = -1, menor = 99999;

void buscaMenorMaior(int vetor[N]) {
    for(int i = 0; i < numElementos; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return ;
}

int main() {
    int vetor[N];
    scanf("%d", &numElementos);
    for(int i = 0; i < numElementos; i++) {
        scanf("%d", &vetor[i]);
    }

    buscaMenorMaior(vetor);

    printf("maior valor: %d\nmenor valor: %d\n", maior, menor);

    return 0;
}