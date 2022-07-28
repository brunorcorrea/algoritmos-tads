#include <stdio.h>
#include <string.h>
#define N 1000
void imprime(char* titulo, int tamanho, int* quantidade, int quantidadeTotal, int ascii) {
    printf("%s", titulo);
    for(int i = 0; i < tamanho; i++) {
        printf("%c: ", ascii+i);
        for(int j = 0; j < quantidade[i]; j++) printf("*");
        printf(" (%d - %.2f)\n", quantidade[i], ((float) quantidade[i]) / quantidadeTotal);
    }}
int main() {
    int qtdParagrafos, quantidadeMaiusculas[26], quantidadeMinusculas[26], quantidadeDigitos[10], totalCaracteres = 0;
    for(int i = 0; i < 26; i++) {
        quantidadeMinusculas[i] = quantidadeMaiusculas[i] = 0;
        if(i < 10) quantidadeDigitos[i] = 0;
    }
    char paragrafos[N][N], fimString[] = "FIM\n";
    for(qtdParagrafos = 0; strcmp(paragrafos[qtdParagrafos-1], fimString); qtdParagrafos++) fgets(paragrafos[qtdParagrafos], N, stdin);
    for(int i = 0; i < qtdParagrafos-1; i++)
        for(int j = 0; j < strlen(paragrafos[i]); j++) {
            char valor = paragrafos[i][j];
            if((valor >= 48) && (valor <= 57)){
                quantidadeDigitos[valor-48]++;
                totalCaracteres++;
            } else if((valor >= 65) && (valor <= 90)) {
                quantidadeMaiusculas[valor-65] ++;
                totalCaracteres++;
            } else if((valor >= 97) && (valor <= 122)) {
                quantidadeMinusculas[valor-97] ++;
                totalCaracteres++;}}
    imprime("Caracteres Maiusculos:\n", 26, quantidadeMaiusculas, totalCaracteres, 65);
    imprime("\nCaracteres Minusculos:\n", 26, quantidadeMinusculas, totalCaracteres, 97);
    imprime("\nDigitos:\n", 10, quantidadeDigitos, totalCaracteres, 48);
    return 0;}