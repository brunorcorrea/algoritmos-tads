#include <stdio.h>
#include <string.h>

#define N 1000

int totalCaracteres = 0;

void calculaProbabilidade(int tamanho, float* vetorProbabilidades, int vetorQuantidades[tamanho]) {
    for(int i = 0; i < tamanho; i++) {
        vetorProbabilidades[i] = ((float) vetorQuantidades[i]) / totalCaracteres; // atraves da divisão da quantidade de elementos de cada tipo pela quantidade total de elementos se obtém a probabilidade de encontrar aquele valor
    }
}

void limpaVetorInt(int* vetor, int tamanho) { // Para poder iterar no vetor com segurança, essa função limpa todos os campos
    for(int i = 0; i < tamanho; i++) {
        vetor[i] = 0;
    }
}

int main() {
    float probabilidadeMaiusculas[26], probabilidadeMinusculas[26], probabilidadeDigitos[10]; // O tamanho de cada vetor representa os valores válidos de cada tipo. Ex: A = 0, B = 1
    int quantidadeMaiusculas[26], quantidadeMinusculas[26], quantidadeDigitos[10]; // O tamanho de cada vetor representa os valores válidos de cada tipo. Ex: A = 0, B = 1

    limpaVetorInt(quantidadeMaiusculas, 26);
    limpaVetorInt(quantidadeMinusculas, 26);
    limpaVetorInt(quantidadeDigitos, 10);


    char buffer[4], paragrafos[N][N], fimString[] = "FIM";

    int qtdParagrafos;

    for(qtdParagrafos = 0; strcmp(buffer, fimString); qtdParagrafos++) { // Ler os parágrafos até encontrar FIM
        fgets(paragrafos[qtdParagrafos], N, stdin);
        for(int j = 0; j < 4; j++) {
            buffer[j] = paragrafos[qtdParagrafos][strlen(paragrafos[qtdParagrafos])-(4-j)]; // Pega as últimas 4 casas do parágrafo que foi inserido e verifica se ele é igual a FIM
        }
        buffer[3] = '\0';
    }
    qtdParagrafos--; // Tirando a linha de FIM da contagem

    for(int i = 0; i < qtdParagrafos; i++) { //roda os paragrafos digitados contando as ocorrências
        int tamanho = strlen(paragrafos[i]);

        for(int j = 0; j < tamanho; j++) {
            char valor = paragrafos[i][j];
            if((valor >= 48) && (valor <= 57)){ // Verifica se é um dígito através da tabela ASCII
                quantidadeDigitos[valor-48] ++;
                totalCaracteres++;
            }
            else if((valor >= 65) && (valor <= 90)) { // Verifica se é uma letra maiúscula através da tabela ASCII
                quantidadeMaiusculas[valor-65] ++;
                totalCaracteres++;
            }
            else if((valor >= 97) && (valor <= 122)) { // Verifica se é uma letra minúscula através da tabela ASCII
                quantidadeMinusculas[valor-97] ++;
                totalCaracteres++;
            }
        }
    }

    calculaProbabilidade(26, probabilidadeMaiusculas, quantidadeMaiusculas);
    calculaProbabilidade(26, probabilidadeMinusculas, quantidadeMinusculas);
    calculaProbabilidade(10, probabilidadeDigitos, quantidadeDigitos);

    printf("Caracteres Maiusculos:\n");
    for(int i = 0; i < 26; i++) {
        printf("%c: ", (65+i));
        for(int j = 0; j < quantidadeMaiusculas[i]; j++) printf("*"); // Imprime um * para cada ocorrência
        printf(" (%d - %.2f)\n", quantidadeMaiusculas[i], probabilidadeMaiusculas[i]);
    }

    printf("\nCaracteres Minusculos:\n");
    for(int i = 0; i < 26; i++) {
        printf("%c: ", (97+i));
        for(int j = 0; j < quantidadeMinusculas[i]; j++) printf("*"); // Imprime um * para cada ocorrência
        printf(" (%d - %.2f)\n", quantidadeMinusculas[i], probabilidadeMinusculas[i]);
    }

    printf("\nDigitos:\n");
    for(int i = 0; i < 10; i++) {
        printf("%c: ", (48+i));
        for(int j = 0; j < quantidadeDigitos[i]; j++) printf("*"); // Imprime um * para cada ocorrência
        printf(" (%d - %.2f)\n", quantidadeDigitos[i], probabilidadeDigitos[i]);
    }

    return 0;
}