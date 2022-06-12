#include <stdio.h>
#include <string.h>

int main()
{
    char vet[1002];
    int a = 0, b = 0, l = 0, j = 0, v = 0, x = 0;
    int grafico1 = 0;
    int grafico2 = 0;
    int grafico3 = 0;
    int quant = 0;
    int vet_maiusculo[26];
    int vet_minusculo[26];
    int vet_numero[10];
    char vetletras_M[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char vetletras_m[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char vet_num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (a = 0; a < 1002; a++)
    {
        vet[a] = '\0';
    }

    for (a = 0; a < 26; a++)
    {
        vet_maiusculo[a] = 0;
        vet_minusculo[a] = 0;
    }

    for (a = 0; a < 10; a++)
    {
        vet_numero[a] = 0;
    }

    while (1)
    {
        fgets(vet, 1002, stdin);
        if ((vet[0] == 'F') && (vet[1] == 'I') && (vet[2] == 'M'))
        {
            break;
        }

        for (a = 0; a < strlen(vet); a++)
        {
            x = 0;

            if ((vet[a] >= 65) && (vet[a] <= 90))
            {
                for (b = 65; b <= 90; b++, x++)
                {
                    if (vet[a] == b)
                    {
                        vet_maiusculo[x]++;
                        quant++;
                    }
                }
            }
            else if ((vet[a] >= 97) && (vet[a] <= 122))
            {
                for (b = 97; b <= 122; b++, x++)
                {
                    if (vet[a] == b)
                    {
                        vet_minusculo[x]++;
                        quant++;
                    }
                }
            }
            else if ((vet[a] >= 48) && (vet[a] <= 57))
            {
                for (b = 48; b <= 57; b++, x++)
                {
                    if (vet[a] == b)
                    {
                        // printf("%c: %d\n", b, vet_numero[x] + 1);
                        vet_numero[x]++;
                        quant++;
                    }
                }
            }
        }
        vet[0] = '\0';
    }

    printf("Caracteres Maiusculos:\n");
    for (a = 0; a < 26; a++)
    {
        j = 0;
        printf("%c: ", vetletras_M[a]);
        while (j < vet_maiusculo[a])
        {
            printf("*");
            j++;
        }
        printf(" ");
        float probabilidade = ((float)vet_maiusculo[a]) / quant;
        printf("(%d - %.2f)", vet_maiusculo[a], probabilidade);
        printf("\n");
    }

    printf("\n");

    printf("Caracteres Minusculos:\n");
    for (a = 0; a < 26; a++)
    {
        j = 0;
        printf("%c: ", vetletras_m[a]);
        while (j < vet_minusculo[a])
        {
            printf("*");
            j++;
        }
        printf(" ");
        float probabilidade = ((float)vet_minusculo[a]) / quant;
        printf("(%d - %.2f)", vet_minusculo[a], probabilidade);
        printf("\n");
    }

    printf("\n");

    printf("Digitos:\n");
    for (a = 0; a < 10; a++)
    {
        j = 0;
        printf("%c: ", vet_num[a]);
        while (j < vet_numero[a])
        {
            printf("*");
            j++;
        }
        printf(" ");
        float probabilidade = ((float)vet_numero[a]) / quant;
        printf("(%d - %.2f)", vet_numero[a], probabilidade);
        printf("\n");
    }

    return 0;
}