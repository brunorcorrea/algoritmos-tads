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

    caminho[visitas] = inicio; // Inicial o vetor de rotas com a cidade inicial
    visitas++; // Incrementa 1 no número de cidades visitadas

    l = inicio; // Atribui a variável de linhas (l) a cidade atual
    while((l < nos) && (fim != atual)) {
        for(c = 0; c < nos; c++) {
            if(distancias[l][c] != 0) { // Verifica se não é uma cidade sem caminho
                if((distancias[l][c] < menor) || (menor == -1)) { // Se a distância entre a cidade atual for menor que a menor distância encontrada ou se for a primeira distância válida (diferente de 0)
                        int i;
                        for(i = 0; caminho[i] != -1; i++) { // Verifica se aquela cidade já foi visitada
                            if(caminho[i] == c) {
                                i = -1; // Se for visitada i passa a valer -1
                                break;
                            }
                        }

                        if(i != -1) { // Se i não for -1, quer dizer que a cidade ainda não foi visitada
                            menor = distancias[l][c]; // A menor distância passa a ser a dessa cidade
                            atual = c; // A cidade atual passa a ser a cidade verificada no FOR
                        }
                }
            }
        }

        total += menor; // Incrementa a nova distância encontrada no total percorrido

        caminho[visitas] = atual; // Adiciona a cidade nova cidade ao vetor de cidades visitadas
        visitas++; // Incrementa 1 no número de cidades visitadas

        menor = -1; // Limpa o valor da menor distância
        l = atual; // A cidade de qual as distâncias serão lidas passa ser a atual {l (atual) -> c (próxima cidade)}
    }

    printf("Distancia total entre %d e %d: %d\n", inicio, fim, total);
    printf("Caminho: ");

    for(int l = 0; l < visitas; l++) 
    {
        if(visitas - l > 1) {
            printf("%d->", caminho[l]); // Enquanto não for a última cidade do vetor imprime o valor com a seta na frente
        }
        else {
            printf("%d\n", caminho[l]); // Se for a última cidade imprime o valor e pula uma linha
        }
    }

    return 0;
}