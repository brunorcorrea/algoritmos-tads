#include <stdio.h>
#include <math.h>

#define TAMANHO 25

void imprimeCaminho(int* cidades, int visitas) 
{
    printf("Caminho: %d", cidades[0]);
    for(int linha = 1; linha < visitas; linha++) 
    {
        printf("->%d", cidades[linha]);
    }
    printf("\n");
}

int main() 
{
    int quantidadeCidades, origem, destino, distanciaTotal = 0, cidadeAtual = -1, menorCaminho = 99999, visitas = 0;
    int linha, coluna;
    int distancias[TAMANHO][TAMANHO], cidades[TAMANHO];

    scanf("%d", &quantidadeCidades); // Recebe a quantidade de cidades a serem inseridas na matriz

    for(linha = 0; linha < quantidadeCidades; linha++) 
    {
        for(coluna = 0; coluna < quantidadeCidades; coluna++) 
        {
            scanf("%d", &distancias[linha][coluna]); // Insere cada uma das distâncias na matriz
        }
    }

    scanf("%d", &origem); // Recebe a cidade de origem
    scanf("%d", &destino); //Recebe a cidade de destino

    linha = cidades[visitas] = origem;
    visitas++;

    do {
        if (destino == cidadeAtual) { // Verifica se já chegou ao destino
            break;
        }

        for(coluna = 0; coluna < quantidadeCidades; coluna++) 
        { // Procura a cidade com a menor distância a partir da atual
            if(distancias[linha][coluna] > 0) // Testa se não é a própria cidade
            {
                if(distancias[linha][coluna] < menorCaminho)
                {
                    int cidadeValida = 1;
                    for(int i = 0; i < visitas; i++) // Testa se já foi nessa cidade
                    {
                        if(cidades[i] == coluna)
                        {
                            cidadeValida = 0;
                            break;
                        }
                    }

                    if(cidadeValida != 0)
                    {
                        menorCaminho = distancias[linha][coluna];
                        cidadeAtual = coluna;
                    }
                }
            }
        }

        distanciaTotal += menorCaminho; // Calcula o percurso total

        cidades[visitas] = cidadeAtual;
        visitas++;

        menorCaminho = 99999;
        linha = cidadeAtual;
    } while(linha < quantidadeCidades);

    printf("Distancia total entre %d e %d: %d\n", origem, destino, distanciaTotal);

    imprimeCaminho(cidades, visitas); // Imprime o trajeto entre as cidades
    return 0;
}