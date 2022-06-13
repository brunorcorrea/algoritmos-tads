#include <stdlib.h>
#include <stdio.h>

int main() {
    int **normal, **inversa;
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);

    normal = (int**) malloc(linhas * sizeof(int*));
    for(int i = 0; i < linhas; i++) {
        normal[i] = (int*) malloc(colunas * sizeof(int));
    }

    inversa = (int**) malloc(colunas * sizeof(int*));
    for(int i = 0; i < colunas; i++) {
        inversa[i] = (int*) malloc(linhas * sizeof(int));
    }

    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            scanf("%d", &normal[i][j]);
        }
    }

    for(int i = 0; i < colunas; i++) {
        for(int j = 0; j < linhas; j++) {
            inversa[i][j] = normal[j][i];
        }
    }
    
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            if((inversa[i][j] != normal[i][j]) || (linhas != colunas)) {
                printf("Nao eh simetrica\n");
                return 0;
            }
        }
    }

    printf("Eh simetrica\n");

    for(int i = 0; i < linhas; i++) {
        free(normal[i]);
    }

    for(int i = 0; i < colunas; i++) {
        free(inversa[i]);
    }
    free(normal);
    free(inversa);

    return 0;
}