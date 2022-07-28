#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    typedef struct corpo {
        float altura;
        float peso;
        char nome[255];
    } Corpo;

    Corpo pessoa;

    scanf("%f %f", &pessoa.altura, &pessoa.peso);
    fgets(pessoa.nome, 255, stdin);

    float imc = pessoa.peso / pow(pessoa.altura, 2);
    printf("%.3f\n", imc);

    return 0;
}