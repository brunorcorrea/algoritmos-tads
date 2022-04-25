#include <stdlib.h>
#include <stdio.h>

int main () {
    int qtd[10];
    float valor[10], total = 0;

    for(int i = 0; i < 10; i ++) {
        scanf("%d", &qtd[i]);
    }
    for(int i = 0; i < 10; i ++) {
        scanf("%f", &valor[i]);
    }

    for(int i = 0; i < 10; i ++) {
        total += qtd[i]*valor[i];
    }

    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de 10\n", total);

    return 0;
}