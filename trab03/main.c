#include <stdio.h>

#define SIZE 20

int main() {
    int qtdNos, grafo[SIZE][SIZE], partida, chegada, distancia = 0, qtdCidades = 0, rota[SIZE], cidade = -1;
    scanf("%d", &qtdNos); //recebe a quantidade de cidades

    for(int i = 0; i < qtdNos; i++) {
        for(int j = 0; j < qtdNos; j++) {
            scanf("%d", &grafo[i][j]);//armazena a distância entre as cidades
        }
    }
    scanf("%d", &partida); // armazena o ponto de saida
    scanf("%d", &chegada); // armazena o ponto de chegada
    //rota[0] = partida;

    for(int i = 0; i < qtdNos; i++) {
        int min = 0;
        for(int j = 0; j < qtdNos; j++) {
            if (((grafo[i][j] < min) || (min == 0)) && (grafo[i][j] != 0)) {
                if (rota[qtdCidades-1] != grafo[i][j]) {
                    min = grafo[i][j];
                    cidade = j;
                }
            }
        }
        distancia += min;
        rota[qtdCidades] = cidade;
        i = cidade;
        qtdCidades++;

        if(cidade == chegada) {
            break;
        }
    }

    printf("Distancia total entre %d e %d: %d\n", partida, chegada, distancia);
    printf("Caminho: ");
    for(int i = 0; i < qtdCidades; i++) {
        if(i+1 != qtdCidades) printf("%d->", rota[i]);
        else printf("%d\n", rota[i]);
    }
    return 0;
}