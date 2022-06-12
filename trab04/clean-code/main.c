#include <stdio.h>
#include <string.h>

#define N 1000

int totalCaracteres = 0;

void imprime(char* titulo, int tamanho, int* quantidade, float* probabilidade, int ascii) {
    printf("%s", titulo);
    for(int i = 0; i < tamanho; i++) {
        printf("%c: ", ascii+i);
        for(int j = 0; j < quantidade[i]; j++) printf("*");
        printf(" (%d - %.2f)\n", quantidade[i], probabilidade[i]);
    }
}

void calculaProbabilidade(int tamanho, float* vetorProbabilidades, int vetorQuantidades[tamanho]) {
    for(int i = 0; i < tamanho; i++) {
        vetorProbabilidades[i] = ((float) vetorQuantidades[i]) / totalCaracteres;
    }
}

void limpaVetorInt(int* vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        vetor[i] = 0;
    }
}

int main() {
    float probabilidadeMaiusculas[26], probabilidadeMinusculas[26], probabilidadeDigitos[10];
    int qtdParagrafos, quantidadeMaiusculas[26], quantidadeMinusculas[26], quantidadeDigitos[10]; 

    limpaVetorInt(quantidadeMaiusculas, 26);
    limpaVetorInt(quantidadeMinusculas, 26);
    limpaVetorInt(quantidadeDigitos, 10);

    char paragrafos[N][N], fimString[] = "FIM\n";

    for(qtdParagrafos = 0; strcmp(paragrafos[qtdParagrafos-1], fimString); qtdParagrafos++) {
        fgets(paragrafos[qtdParagrafos], N, stdin);
    }

    for(int i = 0; i < qtdParagrafos-1; i++) {
        for(int j = 0; j < strlen(paragrafos[i]); j++) {
            char valor = paragrafos[i][j];
            if((valor >= 48) && (valor <= 57)){
                quantidadeDigitos[valor-48]++;
                totalCaracteres++;
            }
            else if((valor >= 65) && (valor <= 90)) {
                quantidadeMaiusculas[valor-65] ++;
                totalCaracteres++;
            }
            else if((valor >= 97) && (valor <= 122)) {
                quantidadeMinusculas[valor-97] ++;
                totalCaracteres++;
            }
        }
    }

    calculaProbabilidade(26, probabilidadeMaiusculas, quantidadeMaiusculas);
    calculaProbabilidade(26, probabilidadeMinusculas, quantidadeMinusculas);
    calculaProbabilidade(10, probabilidadeDigitos, quantidadeDigitos);

    imprime("Caracteres Maiusculos:\n", 26, quantidadeMaiusculas, probabilidadeMaiusculas, 65);
    imprime("\nCaracteres Minusculos:\n", 26, quantidadeMinusculas, probabilidadeMinusculas, 97);
    imprime("\nDigitos:\n", 10, quantidadeDigitos, probabilidadeDigitos, 48);

    return 0;
}