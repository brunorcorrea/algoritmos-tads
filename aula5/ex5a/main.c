#include <stdlib.h>
#include <stdio.h>

int searchNumber(float* vetor, float* num) {
    for (int i = 0; i < 20; i++) {
        if (vetor[i] == *num) return 1;
    }
    return 0;
}

int main() {
    float vetor[20], num;

    for(int i = 0; i < 20; i++){
        scanf("%f",&vetor[i]);
    }

    while(1) {
        scanf("%f", &num);
        if (num < 0) break;
        if(searchNumber(vetor, &num)) printf("existe\n");
        else printf("nao existe\n");
    }
    return 0;
}