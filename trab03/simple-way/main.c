#include <stdio.h>

#define N 25

int main() {
    int nos, inicio, fim, total = 0, visitas = 0, atual = -1, menor = -1, l, c;
    int distancias[N][N], caminho[N];

    for(l = 0; l < N; l++) { // Tirando o "lixo" do vetor
        caminho[l] = -1; // Atribuindo um número negativo para "zerar" o vetor
    }

    scanf("%d", &nos); // Atribui quantos nós o grafo possui

    for(l = 0; l < nos; l++) {
        for(c = 0; c < nos; c++) {
            scanf("%d", &distancias[l][c]); // Preenche a matriz de adjacência
        }
    }

    scanf("%d", &inicio); // Atribui a cidade de onde o motorista sairá
    scanf("%d", &fim); // Atribui a cidade onde o motorista chegará

    caminho[visitas] = inicio;
    visitas++;

    l = inicio;
    while((l < nos) && (fim != atual)) {
        for(c = 0; c < nos; c++) {
            if(distancias[l][c] != 0) {
                if((distancias[l][c] < menor) || (menor == -1)) {
                        int i;
                        for(i = 0; caminho[i] != -1; i++) {
                            if(caminho[i] == c) {
                                i = -1;
                                break;
                            }
                        }

                        if(i != -1) {
                            menor = distancias[l][c];
                            atual = c;
                        }
                }
            }
        }

        total += menor;

        caminho[visitas] = atual;
        visitas++;

        menor = -1;
        l = atual;
    }

    printf("Distancia total entre %d e %d: %d\n", inicio, fim, total);
    printf("Caminho: ");

    for(int l = 0; l < visitas; l++) 
    {
        if(visitas - l > 1) {
            printf("%d->", caminho[l]);
        }
        else {
            printf("%d\n", caminho[l]);
        }
    }

    return 0;
}