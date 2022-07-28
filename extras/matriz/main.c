#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3

void imprime(int matriz[][3]);
int *preenche(int matriz[][3]);

int main()
{
    int matriz[L][C];
    preenche(matriz);
    imprime(matriz);
    return 0;
}

int *preenche(int matriz[][3])
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = i*j;
        }
    }
}

void imprime(int matriz[][3])
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if(j == 0) printf("%d", matriz[i][j]);
            else printf("-%d", matriz[i][j]);
        }
        printf("\n");
    }
}