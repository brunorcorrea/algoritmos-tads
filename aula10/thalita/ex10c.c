#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct aluno {
    char nome[102];
    int ra;
    float p1, p2;
} Aluno;

int main() {
    int n;
    Aluno *alunos;
    scanf("%d", &n);
    alunos = (Aluno*) malloc(n * sizeof(Aluno));

    for(int i = 0; i < n; i++) {
        getchar();
        fgets(alunos[i].nome, 102, stdin);
        alunos[i].nome[strlen(alunos[i].nome) - 1] = '\0';
        scanf("%d", &alunos[i].ra);
        scanf("%f", &alunos[i].p1);
        scanf("%f", &alunos[i].p2);
    }

    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", alunos[i].ra, alunos[i].nome, ((alunos[i].p1+alunos[i].p2)/2));
    }

    free(alunos);

    return 0;
}