#include <stdio.h>

int main(){

    int nMatriz, inicio, fim, posicao, menor = 0, c = 0, soma=0, qtd[50], contador = 0, auxiliar;

    scanf("%d", &nMatriz);

    int matriz[nMatriz] [nMatriz];

    for(int l=0; l <nMatriz; l++)// Determinando os dados da Matriz
    {
       for(int c=0; c < nMatriz; c++) {
           scanf("%d", &matriz[l] [c]);
       }        
    }

    //Definindo o Início e o Destino Final
    scanf("%d", &inicio);
    scanf("%d", &fim);

    posicao = inicio;
    qtd[contador] = inicio;
    
    if(inicio != fim)
    {
        do
        {
        contador++;
        menor = 0;
        if(posicao == inicio)
        {
            for(c = 0; c< 5; c++) //Achando o menor caminho
            {
                if(matriz[posicao] [c] != 0){
                    if((menor == 0))
                    {
                        menor = matriz[posicao] [c];
                    }
                    else
                    {
                        if(matriz[posicao] [c] < menor)
                        {
                            menor = matriz[posicao] [c];
                        }
                    }
                }
            }
            for(c = 0; c< 5; c++) //Revalidando posição
            {
                if(menor == matriz[posicao] [c])
                {
                    posicao = c;
                    soma += menor;
                    qtd[contador] = c;
                    break;
                }
            }
        }
        else
        {
            auxiliar = -1;
            for(c = 0; c< 5; c++)//Achando o menor caminho
            {
                for(int v = 0; v<contador; v++)
                {
                    if(c == qtd[v])
                    {
                        auxiliar = qtd[v];
                    }
                }
                if((matriz[posicao] [c] != 0) && (c != auxiliar))
                {
                    if(menor == 0)
                    {
                        menor = matriz[posicao] [c];
                    }
                    else
                    {
                        if(matriz[posicao] [c] < menor)
                        {
                            menor = matriz[posicao] [c];
                        }
                    }
                }
            }
        
            for(c = 0; c< 5; c++)//Revalidando posição
            {
                if(menor == matriz[posicao] [c])
                {
                    posicao = c;
                    soma += menor;
                    qtd[contador] = c;
                    break;
                }
            }
        }
        }while(posicao != fim);
    }
    else
    {
        soma=0;
    }
    printf("Distancia total entre %d e %d: %d\n", inicio, fim, soma);
    printf("Caminho: ");
    for(int m = 0; m <= contador; m++)
    {
        if(m == 0){
        printf("%d", qtd[m]);
        }
        else
        {printf("->%d", qtd[m]);}
    }
    printf("\n");
    return 0;
}