#include <stdlib.h>
#include <stdio.h>

typedef struct ponto {
        int x;
        int y;
} Ponto;

typedef struct retangulo {
        Ponto inferiorEsquerdo;
        Ponto superiorDireito;
} Retangulo;

int main() {
    Retangulo retangulo1, retangulo2;

    scanf("%d %d \n %d %d", &retangulo1.inferiorEsquerdo.x, &retangulo1.inferiorEsquerdo.y, &retangulo1.superiorDireito.x, &retangulo1.superiorDireito.y); // recebe o primeiro retangulo
    scanf("%d %d \n %d %d", &retangulo2.inferiorEsquerdo.x, &retangulo2.inferiorEsquerdo.y, &retangulo2.superiorDireito.x, &retangulo2.superiorDireito.y);  // recebe o segundo retangulo

    if(
        (retangulo1.inferiorEsquerdo.x <= retangulo2.inferiorEsquerdo.x) &&
        (retangulo1.inferiorEsquerdo.y <= retangulo2.inferiorEsquerdo.y) &&
        (retangulo1.superiorDireito.x >= retangulo2.superiorDireito.x) &&
        (retangulo1.superiorDireito.y >= retangulo2.superiorDireito.y)
     ) { // verifica se o segundo retângulo está localizado dentro do primeiro
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

    return 0;
}