#include <stdlib.h>
#include <stdio.h>

int main () {
    int qtd[10], qtdTotal = 0;
    float valor[10], valorTotal = 0;

    for(int i = 0; i < 10; i ++) {
        scanf("%d", &qtd[i]);
        qtdTotal += qtd[i];
    }
    for(int i = 0; i < 10; i ++) {
        scanf("%f", &valor[i]);
    }

    for(int i = 0; i < 10; i ++) {
        valorTotal += qtd[i]*valor[i];
    }

    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", valorTotal, qtdTotal);

    return 0;
}