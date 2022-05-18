#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto {
        float x;
        float y;
    } Ponto;

float distance(Ponto ponto1, Ponto ponto2) {
    float sum = pow(ponto1.x - ponto2.x, 2) + pow(ponto1.y - ponto2.y, 2); // aplica parte da fórmula da distância euclidiana, sem a raiz para facilitar a leitura

    return sqrt(sum); //retorna a raiz valor calculado
}

int main() {
    Ponto ponto1, ponto2;

    scanf("%f %f", &ponto1.x, &ponto1.y); // recebe o primeiro ponto
    scanf("%f %f", &ponto2.x, &ponto2.y); // recebe o segundo ponto

    if(distance(ponto1,ponto2) == 0) printf("os pontos sao iguais\n"); // verifica se os pontos são iguais
    else printf("os pontos nao sao iguais\n");
    return 0;
}