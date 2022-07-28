#include <stdio.h>
#include <math.h>
#define N 10

void calculaCubo(int vetorA[N], int vetorB[N]) {
    for(int i = 0; i < N; i++) {
        vetorB[i] = (int) pow(vetorA[i], 3);
    }
}

int main() {
    int vetorA[N], vetorB[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &vetorA[i]);
    }
    
    calculaCubo(vetorA, vetorB);

    for(int i = 0; i < N; i++) {
        printf("%d\n", vetorB[i]);
    }
    return 0;
}