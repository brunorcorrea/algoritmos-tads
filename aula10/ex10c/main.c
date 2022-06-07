#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    char nome[100];
    int ra;
    float notaP1, notaP2, media;
} Aluno;

int main() {
    int n;
    scanf("%d", &n);
    
    Aluno **alunos = (Aluno**) malloc(sizeof(Aluno*) * n);
    for(int i = 0; i < n; i++) {
        alunos[i] = (Aluno*) malloc(sizeof(Aluno));
    }

    for(int i = 0; i < n; i++) {
        fgets(alunos[i]->nome, 100, stdin);
        scanf("%d", &alunos[i]->ra);
        scanf("%f", &alunos[i]->notaP1);
        scanf("%f", &alunos[i]->notaP2);
        alunos[i]->nome[strlen(alunos[i]->nome)-1] = '\0';
        alunos[i]->media = (alunos[i]->notaP1+alunos[i]->notaP2)/2;
    }

    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n\n",  alunos[i]->ra, alunos[i]->nome, alunos[i]->media);
    }
    return 0;
}