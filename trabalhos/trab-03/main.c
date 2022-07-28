#include <stdio.h>

#define SIZE 20

void limparVetor(int* vetor) {
    for(int i = 0; i < SIZE; i++) {
        vetor[i] = -1;
    }
}

int existe(int *rota, int cidade) {
    for(int i = 0; (i < SIZE) && (rota[i] != -1); i++) {
        if(rota[i] == cidade) return 1;
    }
    
    return 0;
}

int main() {
    int qtdNos, grafo[SIZE][SIZE], partida, chegada, distancia = 0, qtdCidades = 1, rota[SIZE], cidade = -1;
    scanf("%d", &qtdNos); //recebe a quantidade de cidades
    limparVetor(rota);

    for(int i = 0; i < qtdNos; i++) {
        for(int j = 0; j < qtdNos; j++) {
            scanf("%d", &grafo[i][j]);//armazena a distância entre as cidades
        }
    }
    scanf("%d", &partida); // armazena o ponto de saida
    scanf("%d", &chegada); // armazena o ponto de chegada
    rota[0] = partida;

    for(int i = partida; i < qtdNos; i = cidade) {
        int min = 0;
        for(int j = 0; j < qtdNos;j++) {
            if((grafo[i][j] != 0) && ((grafo[i][j] < min) || (min == 0)) && !existe(rota, j)) {
                    min = grafo[i][j];
                    cidade = j;
            }
        }
        distancia += min;
        rota[qtdCidades] = cidade;
        qtdCidades++;

        if (chegada == cidade) break;
    }

    printf("Distancia total entre %d e %d: %d\n", partida, chegada, distancia);
    printf("Caminho: ");
    for(int i = 0; i < qtdCidades; i++) 
    {
        if(i+1 != qtdCidades) printf("%d->", rota[i]);
        else printf("%d\n", rota[i]);
    }

    return 0;
}