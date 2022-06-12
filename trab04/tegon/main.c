#include <stdio.h>
#include <string.h>

int main()
{

    char vet[1002];
    int a = 0, b = 0, l = 0, j = 0, v = 0;
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

    while ((vet[0] != 'F') && (vet[1] != 'I') && (vet[2] != 'M'))
    {
        fgets(vet, 1002, stdin);
        if ((vet[0] == 'F') && (vet[1] == 'I') && (vet[2] == 'M'))
        {
            break;
        }
        for (int i = 0; i < 1002; i++)
        {
            //if (vet[i] == '\0')
              //  break;

            for (a = 65; a <= 90; a++)
            {
                grafico1 = 0;
                v = vet[i];
                if (v == a)
                {
                    grafico1++;
                    quant++;
                }
                vet_maiusculo[l] = grafico1;
                l++;
            }

            l = 0;

            for (a = 97; a <= 122; a++)
            {
                grafico2 = 0;
                v = vet[i];
                if (v == a)
                {
                    grafico2++;
                    quant++;
                }
                vet_minusculo[l] = grafico2;
                l++;
            }

            l = 0;

            for (a = 48; a <= 57; a++)
            {
                grafico3 = 0;
                v = vet[i];
                if (v == a)
                {
                    grafico3++;
                    quant++;
                }
                vet_numero[l] = grafico3;
                l++;
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