#include <stdio.h>
#include <string.h>

#define NUM_LIM 20
#define NUM_COL 20

int main() {
    int lin, col, matriz[NUM_LIM][NUM_COL];
    scanf("%d %d", &lin, &col);
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < col; i++) {
        for(int j = 0; j < lin; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}