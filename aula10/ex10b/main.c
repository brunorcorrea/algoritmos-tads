#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int verificaSimetria(int linhas, int colunas, int **matriz, int **transposta) {
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if(matriz[i][j] != transposta[i][j]) return 0;
        }
    }

    return 1;
}

int main() {
    int **matriz, **transposta;
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    matriz = (int**) malloc(sizeof(int*)*linhas);
    transposta = (int**) malloc(sizeof(int*)*colunas);

    for(int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(sizeof(int) * colunas);
    }

    for(int i = 0; i < colunas; i++) {
        transposta[i] = (int*) malloc(sizeof(int) * linhas);
    }

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < colunas; i++) {
        for(int j = 0; j < linhas; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }
     
    if(verificaSimetria(linhas, colunas, matriz, transposta)) printf("Eh simetrica\n");
    else printf("Nao eh simetrica\n");

    for(int i = 0; i < linhas; i++) {
        free(matriz[i]);
        free(transposta[i]);
    }
    free(transposta);

    return 0;
}