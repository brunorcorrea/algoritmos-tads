#include <stdio.h>
#include <string.h>
int main()
{
    char txt[1002];
    int vetor[62];
    for (int i = 0; i < 62; i++)
        vetor[i] = 0;

    int palavra = 0;
    int lin, col;
    int contadortxt = 0;
    txt[0] = '\0';
    char mm[62] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    while (1)
    {
        fgets(txt, 1002, stdin);
        if (strstr(txt, "FIM") != NULL)
        {
            break;
        }
        for (lin = 0; lin < strlen(txt) - 1; lin++)
        {
            contadortxt = 0;
            if ((txt[lin] >= 65) && (txt[lin] <= 90))
            { // [A-Z]
                for (col = 65; col <= 90; col++)
                {
                    if (txt[lin] == col)
                    {
                        vetor[contadortxt]++;
                        palavra += 1;
                    }
                    contadortxt++;
                }
            }

            contadortxt = 26;
            if ((txt[lin] >= 97) && (txt[lin] <= 122))
            { // [a-z]
                for (col = 97; col <= 122; col++)
                {
                    if (txt[lin] == col)
                    {
                        vetor[contadortxt]++;
                        palavra += 1;
                    }
                    contadortxt++;
                }
            }
            contadortxt = 52;

            if ((txt[lin] >= 48) && (txt[lin] <= 57))
            { // [0-9]
                for (col = 48; col <= 57; col++)
                {
                    if (txt[lin] == col)
                    {
                        vetor[contadortxt]++;
                        palavra += 1;
                    }
                    contadortxt++;
                }
            }
        }
        txt[0] = '\0';
    }
    printf("Caracteres Maiusculos:\n");
    for (int n = 0; n < 26; n++)
    {
        float prob = ((float)vetor[n]) / palavra;
        printf("%c: ", mm[n]);
        for (int i = 0; i < vetor[n]; i++)
        {
            printf("*");
        }
        printf(" (%d - %.2f)", vetor[n], prob);
        printf("\n");
    }

    printf("\n");
    printf("Caracteres Minusculos:\n");
    for (int n = 26; n < 52; n++)
    {
        float prob = ((float)vetor[n]) / palavra;
        printf("%c: ", mm[n]);
        for (int i = 0; i < vetor[n]; i++)
        {
            printf("*");
        }
        printf(" (%d - %.2f)", vetor[n], prob);
        printf("\n");
    }
    printf("\n");
    printf("Digitos:\n");
    for (int n = 52; n < 62; n++)
    {
        float prob = ((float)vetor[n]) / palavra;
        printf("%c: ", mm[n]);
        for (int i = 0; i < vetor[n]; i++)
        {
            printf("*");
        }
        printf(" (%d - %.2f)", vetor[n], prob);
        printf("\n");
    }
    return 0;
}