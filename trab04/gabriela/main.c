#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char paragrafo[1002], maiusculas[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}, minusculas[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}, digitos[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int quantidades[62], total = 0; // [0] == 'A', [26] == 'a', [61] == '9'

    for(int i = 0; i < 62; i++) {
        quantidades[i] = 0; // limpando lixo para poder incrementar
    }

    while(1) {
        fgets(paragrafo, 1002, stdin); // recebe o paragrafo
        if(strcmp(paragrafo, "FIM\n") == 0) {
            break; // se o paragrafo for FIM o programa para
        }

        for(int i = 0; i < strlen(paragrafo)-1; i++) {
            if ((paragrafo[i] >= 65) && (paragrafo[i] <= 90)) { // usando a tabela ascii para pegar maiusculas
                quantidades[paragrafo[i] - 65]++;
                total++;
            } else if ((paragrafo[i] >= 97) && (paragrafo[i] <= 122)) { // usando a tabela ascii para pegar minusculas
                quantidades[paragrafo[i] - 71]++;
                total++;
            } else if ((paragrafo[i] >= 48) && (paragrafo[i] <= 57)) { // usando a tabela ascii para pegar digitos
                quantidades[paragrafo[i] + 4]++;
                total++;
            }
        }
    }

    printf("Caracteres Maiusculos:\n"); // imprime os maiusculos
    for(int i = 0; i < 26; i++) {
        printf("%c: ", maiusculas[i]);
        int qtd = quantidades[i];
        for(int j = 0; j < qtd; j++) {
            printf("*");
        }
        printf(" (%d - %.2f)\n", qtd, ((float) qtd) / total);
    }

    printf("\nCaracteres Minusculos:\n"); // imprime os minusculos
    for(int i = 26; i < 52; i++) {
        printf("%c: ", minusculas[i-26]);
        int qtd = quantidades[i];
        for(int j = 0; j < qtd;j++) {
            printf("*");
        }
        printf(" (%d - %.2f)\n", qtd, ((float) qtd) / total);
    }

    printf("\nDigitos:\n"); // imprime os digitos
    for(int i = 52; i < 62; i++) {
        printf("%c: ", digitos[i-52]);
        int qtd = quantidades[i];
        for(int j = 0; j < qtd;j++) {
            printf("*");
        }
        printf(" (%d - %.2f)\n", qtd, ((float) qtd) / total);
    }
    
    return 0;
}