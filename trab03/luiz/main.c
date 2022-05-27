#include <stdio.h>
#include <stdlib.h>

int main()
{   int cidades, cidadeInicial, cidadeFinal; //variavel de cidades, cidade inicial e final
    int linha, coluna; // variavel de linhas e colunas
    int menordistancia = 9999999;
    int Somadistancia = 0;
    int linhaAtual;
    int cidadeAtual;
    scanf("%d",&cidades);
    int Matriz [cidades][cidades];
    int memoria[cidades];// armazena cidades que ja foram visitadas

    for (int i = 0; i < cidades; i++) {
        memoria[i] = -1;
    }

    int contador = 0;//serve para saber em qual parte do vetor o valor esta
    // este for serve para criação da matriz
     for (linha=0; linha < cidades; linha++){
        for (coluna=0; coluna < cidades; coluna++){
            scanf("%d",&Matriz[linha][coluna]);
        }
     }
     scanf("%d", &cidadeInicial);//atribuir valor a cidade inicial
     scanf("%d", &cidadeFinal);//atribuir valor a cidade final

    cidadeAtual = cidadeInicial;
    memoria[contador] = cidadeInicial;
    contador++;

    int cidade = 0;

     while(cidadeAtual!= cidadeFinal){// continua rodando o for até que cidade atual seje igual cidadade final
        for(linhaAtual = 0; linhaAtual< cidades; linhaAtual++){// analise da cidade inicial até a final
            int i;
            for(i = 0; memoria[i] != -1; i++){
                if(memoria[i] == linhaAtual){
                    i = -1;
                    break;
                }
            }

            if(i != -1) {
                if ((menordistancia > Matriz[cidadeAtual][linhaAtual]) && (Matriz[cidadeAtual][linhaAtual] != 0)){
                        menordistancia = Matriz[cidadeAtual][linhaAtual];
                        cidade = linhaAtual;
                }
            }
        }

        memoria[contador] = cidade;
        contador++;
        Somadistancia += menordistancia;
        menordistancia = 9999999;
        cidadeAtual = cidade;
     }


     printf("Distancia total entre %d e %d: %d\n", cidadeInicial, cidadeFinal, Somadistancia);

     printf("Caminho: %d", memoria[0]);
     for( int i = 1; i < contador; i++) {
         printf("->%d", memoria[i]);
     }
     printf("\n");

     return 0;
}