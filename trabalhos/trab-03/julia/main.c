#include <stdio.h>

#define N 20

int main()
{
    //Definindo as variáveis
    int m1[N][N];
    int linhas, colunas, num, inicio, final, i, j;
    int menor = 0;
    int sdis = 0; //variável de soma das menores distâncias
    int menorc; //variável da nova cidade
    
    
    scanf("%d", &num); //Para definir o numero de cidades/nós
    
    int cidades[num];
    for (i = 0; i < num; i++){
        cidades[i]=-1;
    }
    
    for(linhas = 0; linhas < num; linhas++) {  //Para ler a matriz com as distâncias entre as cidades
        for(colunas = 0; colunas < num; colunas++){
                scanf("%d", &m1 [linhas][colunas]);
        }        
    } 
    
    //Para ler qual a cidade inicial e qual é seu destino
    scanf("%d", &inicio);
    int partida = inicio;
    scanf("%d", &final);
    
    
    
    for(j=0; j<num; j++) {  //Para analisar as distância do ponto inicial até o final
        if(j == 0){ 
            cidades[0] = inicio;
        }
        if(cidades[j] != final){ //Para fazer o laço continuar só até o valor da cidade for igual ao destino final
            for(i=0; i<num; i++){ //Para encontrar o menor valor de distância entre um ponto e o seguinte
                int passou = 0;
                for(int h = 0; cidades[h] != -1; h++){//verificar se a cidade atual não esta no vetor
                    if(cidades[h] == i){
                        passou = 1;
                        break; 
                    } 
                } 
                if((menor == 0 || menor > m1[inicio][i]) &&  m1[inicio][i] != 0 && passou != 1) {// serve para verificar se a cidade esta no vetor ou não
                    menor = m1[inicio][i]; //Esse 'menor' foi substituido por um ponto da matriz
                    cidades[j+1] = i;
                } 
            }
            sdis += menor;
        }else{
            break;
        }
        inicio = cidades[j+1]; //Para substituir o 'inicio' pela nova cidade
        menor=0;
    }
     printf("Distancia total entre %d e %d: %d\n", partida, final, sdis);

     printf("Caminho: %d", cidades[0]);
     for( int i = 1; i < num; i++) {
         printf("->%d", cidades[i]);
     }
     printf("\n");
   
   
    return 0;
}