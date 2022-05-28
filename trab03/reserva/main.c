#include <stdio.h>

#define TAMANHO 10

int main() {
    int quantidadeCidades, origem, destino, distanciaTotal = 0, visitas = 0, cidadeAtual = -1, menor = 99999, linha, coluna;
    int distancias[TAMANHO][TAMANHO], cidades[TAMANHO];

    scanf("%d", &quantidadeCidades); // Recebe a quantidade de cidades a serem inseridas na matriz

    for(linha = 0; linha < quantidadeCidades; linha++) {
        for(coluna = 0; coluna < quantidadeCidades; coluna++) {
            scanf("%d", &distancias[linha][coluna]); // Insere cada uma das distâncias na matriz
        }
    }

    scanf("%d", &origem); // Recebe a cidade de origem
    scanf("%d", &destino); // Recebe a cidade de destino

    // A primeira cidade do trajeto percorrido será a cidade de origem
    cidades[visitas] = origem;
    visitas++;

    linha = origem;

    do {
        if (destino == cidadeAtual) { // Verifica se já chegou ao destino
            break;
        }

        for(coluna = 0; coluna < quantidadeCidades; coluna++) { // Procura a cidade com a menor distância a partir da atual
            if(distancias[linha][coluna] > 0) { // Testa se não é a própria cidade
                if(distancias[linha][coluna] < menor) {
                        int cidadeValida = 1;
                        for(int i = 0; i < visitas; i++) {
                            if(cidades[i] == coluna) {
                                cidadeValida = 0;
                                break;
                            }
                        }

                        if(cidadeValida != 0) {
                            menor = distancias[linha][coluna];
                            cidadeAtual = coluna;
                        }
                }
            }
        }

        distanciaTotal += menor; // Calcula o percurso total

        // Armazena a cidade encontrada
        cidades[visitas] = cidadeAtual;
        visitas++;

        menor = 99999;
        linha = cidadeAtual;
    } while((linha < quantidadeCidades));

    printf("Distancia total entre %d e %d: %d\n", origem, destino, distanciaTotal);

    // Imprime o caminho percorrido da origem até o destino
    printf("Caminho: %d", cidades[0]);
    for(int linha = 1; linha < visitas; linha++) 
    {
        printf("->%d", cidades[linha]);
    }
    printf("\n");

    return 0;
}