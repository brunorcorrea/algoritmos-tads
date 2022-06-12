
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRING_MAX 1001

int main()
{

    char texto[STRING_MAX], caractere = '*';
    int qntd_de_caracter[62], posicao_vetor = 0;
    int fator_de_analise, fator_de_comparacao = 65, a, b;
    float total_de_caracteres = 0;

    for (b = 0; b < 62; b++)
    {
        qntd_de_caracter[b] = 0;
    }

    fgets(texto, STRING_MAX, stdin);

    //printf("\n");

    while (texto[2] != 'M' && texto[3] != '\0')
    {

        while (fator_de_comparacao != 58)
        {
            for (a = 0; texto[a] != '\0'; a++)
            {
                fator_de_analise = texto[a];
                if (fator_de_analise == fator_de_comparacao)
                {
                    qntd_de_caracter[posicao_vetor]++;
                }
            }
            fator_de_comparacao++;
            fator_de_analise = 0;
            posicao_vetor++;
            if (fator_de_comparacao == 91)
            {
                fator_de_comparacao = 97;
            }
            else if (fator_de_comparacao == 123)
            {
                fator_de_comparacao = 48;
            }
        }

        texto[0] = '\0';
        posicao_vetor = 0;
        fator_de_comparacao = 65;

        fgets(texto, STRING_MAX, stdin);
    }

    for (a = 0; a < 62; a++)
    {
        total_de_caracteres += qntd_de_caracter[a];
    }

    fator_de_comparacao = 65;

    while (fator_de_comparacao != 58)
    {
        if (fator_de_comparacao == 65)
        {
            printf("Caracteres Maiusculos:");
            printf("\n");
        }
        for (a = 0; a < 62; a++)
        {
            float qntd_letra = qntd_de_caracter[a];
            float coeficiente = qntd_letra / total_de_caracteres;
            printf("%c: ", fator_de_comparacao);
            for (b = 0; b < qntd_de_caracter[a]; b++)
            {
                printf("%c", caractere);
            }
            printf(" (%d - %.2f)", qntd_de_caracter[a], coeficiente);

            printf("\n");

            fator_de_comparacao++;

            if (fator_de_comparacao == 91)
            {
                printf("\n");
                printf("Caracteres Minusculos:");
                printf("\n");
                fator_de_comparacao = 97;
            }
            else if (fator_de_comparacao == 123)
            {
                printf("\n");
                printf("Digitos:");
                printf("\n");
                fator_de_comparacao = 48;
            }
        }
    }
    return 0;
}
