#include <stdio.h>
#include <stdlib.h>

int main()
{   int cidades, cidadeInicial, cidadeFinal; //variavel de cidades, cidade inicial e final
    int linha, coluna; // variavel de linhas e colunas
    int menordistancia = 0;
    int Somadistancia = 0;
    int linhaAtual;
    int cidadeAtual;
    scanf("%d",&cidades);
    int Matriz [cidades][cidades];
    int memoria[cidades];// armazena cidades que ja foram visitadas
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

     while(cidadeAtual!= cidadeFinal){// continua rodando o for até que cidade atual seje igual cidadade final
        for(linhaAtual = 0; linhaAtual<cidades; linhaAtual++){// analise da cidade inicial até a final
            for(int i = 0; i <= contador; i++){
                if(memoria[i] == linhaAtual){
                   break;
                } else if ((menordistancia > Matriz[cidadeAtual][linhaAtual] && Matriz[cidadeAtual][linhaAtual] == 0)|| menordistancia == 0){
                        menordistancia = Matriz[cidadeAtual][linhaAtual];
                        memoria[contador+1]=linhaAtual;
                }
            }
        }

        cidadeAtual=memoria[contador+1];
        contador++;
        Somadistancia += menordistancia;
        menordistancia = 0;
     }
     printf("%d %d %d\n", memoria[0], memoria[1], memoria[2]);
     printf("Distancia total entre %d e %d: %d\n", cidadeInicial, cidadeFinal, Somadistancia);

     return 0;
}