#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAMANHO 1002

int main()
{
    char texto[TAMANHO], valores[62] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int qM[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, qm[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, qd[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, qtdTotal = 0;

    do
    {
        fgets(texto, TAMANHO, stdin);
        if ((texto[0] == 'F') && (texto[1] == 'I') && (texto[2] == 'M') && (texto[3] == '\n'))
        {
            break;
        }

        for (int i = 0; i < strlen(texto) - 1; i++)
        {
            if (((texto[i] >= 65) && (texto[i] <= 90)) || ((texto[i] >= 97) && (texto[i] <= 122)) || ((texto[i] >= 48) && (texto[i] <= 57)))
                switch (texto[i])
                {
                case 'A':
                    qM[0]++;
                    qtdTotal++;
                    break;
                case 'B':
                    qM[1]++;
                    qtdTotal++;
                    break;
                case 'C':
                    qM[2]++;
                    qtdTotal++;
                    break;
                case 'D':
                    qM[3]++;
                    qtdTotal++;
                    break;
                case 'E':
                    qM[4]++;
                    qtdTotal++;
                    break;
                case 'F':
                    qM[5]++;
                    qtdTotal++;
                    break;
                case 'G':
                    qM[6]++;
                    qtdTotal++;
                    break;
                case 'H':
                    qM[7]++;
                    qtdTotal++;
                    break;
                case 'I':
                    qM[8]++;
                    qtdTotal++;
                    break;
                case 'J':
                    qM[9]++;
                    qtdTotal++;
                    break;
                case 'K':
                    qM[10]++;
                    qtdTotal++;
                    break;
                case 'L':
                    qM[11]++;
                    qtdTotal++;
                    break;
                case 'M':
                    qM[12]++;
                    qtdTotal++;
                    break;
                case 'N':
                    qM[13]++;
                    qtdTotal++;
                    break;
                case 'O':
                    qM[14]++;
                    qtdTotal++;
                    break;
                case 'P':
                    qM[15]++;
                    qtdTotal++;
                    break;
                case 'Q':
                    qM[16]++;
                    qtdTotal++;
                    break;
                case 'R':
                    qM[17]++;
                    qtdTotal++;
                    break;
                case 'S':
                    qM[18]++;
                    qtdTotal++;
                    break;
                case 'T':
                    qM[19]++;
                    qtdTotal++;
                    break;
                case 'U':
                    qM[20]++;
                    qtdTotal++;
                    break;
                case 'V':
                    qM[21]++;
                    qtdTotal++;
                    break;
                case 'W':
                    qM[22]++;
                    qtdTotal++;
                    break;
                case 'X':
                    qM[23]++;
                    qtdTotal++;
                    break;
                case 'Y':
                    qM[24]++;
                    qtdTotal++;
                    break;
                case 'Z':
                    qM[25]++;
                    qtdTotal++;
                    break;
                case 'a':
                    qm[0]++;
                    qtdTotal++;
                    break;
                case 'b':
                    qm[1]++;
                    qtdTotal++;
                    break;
                case 'c':
                    qm[2]++;
                    qtdTotal++;
                    break;
                case 'd':
                    qm[3]++;
                    qtdTotal++;
                    break;
                case 'e':
                    qm[4]++;
                    qtdTotal++;
                    break;
                case 'f':
                    qm[5]++;
                    qtdTotal++;
                    break;
                case 'g':
                    qm[6]++;
                    qtdTotal++;
                    break;
                case 'h':
                    qm[7]++;
                    qtdTotal++;
                    break;
                case 'i':
                    qm[8]++;
                    qtdTotal++;
                    break;
                case 'j':
                    qm[9]++;
                    qtdTotal++;
                    break;
                case 'k':
                    qm[10]++;
                    qtdTotal++;
                    break;
                case 'l':
                    qm[11]++;
                    qtdTotal++;
                    break;
                case 'm':
                    qm[12]++;
                    qtdTotal++;
                    break;
                case 'n':
                    qm[13]++;
                    qtdTotal++;
                    break;
                case 'o':
                    qm[14]++;
                    qtdTotal++;
                    break;
                case 'p':
                    qm[15]++;
                    qtdTotal++;
                    break;
                case 'q':
                    qm[16]++;
                    qtdTotal++;
                    break;
                case 'r':
                    qm[17]++;
                    qtdTotal++;
                    break;
                case 's':
                    qm[18]++;
                    qtdTotal++;
                    break;
                case 't':
                    qm[19]++;
                    qtdTotal++;
                    break;
                case 'u':
                    qm[20]++;
                    qtdTotal++;
                    break;
                case 'v':
                    qm[21]++;
                    qtdTotal++;
                    break;
                case 'w':
                    qm[22]++;
                    qtdTotal++;
                    break;
                case 'x':
                    qm[23]++;
                    qtdTotal++;
                    break;
                case 'y':
                    qm[24]++;
                    qtdTotal++;
                    break;
                case 'z':
                    qm[25]++;
                    qtdTotal++;
                    break;
                case '0':
                    qd[0]++;
                    qtdTotal++;
                    break;
                case '1':
                    qd[1]++;
                    qtdTotal++;
                    break;
                case '2':
                    qd[2]++;
                    qtdTotal++;
                    break;
                case '3':
                    qd[3]++;
                    qtdTotal++;
                    break;
                case '4':
                    qd[4]++;
                    qtdTotal++;
                    break;
                case '5':
                    qd[5]++;
                    qtdTotal++;
                    break;
                case '6':
                    qd[6]++;
                    qtdTotal++;
                    break;
                case '7':
                    qd[7]++;
                    qtdTotal++;
                    break;
                case '8':
                    qd[8]++;
                    qtdTotal++;
                    break;
                case '9':
                    qd[9]++;
                    qtdTotal++;
                    break;
                }
        }
    } while (1);

    printf("Caracteres Maiusculos:\n");
    for (int l = 0; l < 26; l++)
    {
        printf("%c: ", valores[l]);
        for (int c = 0; c < qM[l]; c++)
            printf("*");
        printf(" (%d - %.2f)\n", qM[l], ((float)qM[l] / qtdTotal));
    }
    printf("\nCaracteres Minusculos:\n");
    for (int l = 0; l < 26; l++)
    {
        printf("%c: ", valores[l + 26]);
        for (int c = 0; c < qm[l]; c++)
            printf("*");
        printf(" (%d - %.2f)\n", qm[l], ((float)qm[l] / qtdTotal));
    }
    printf("\nDigitos:\n");
    for (int l = 0; l < 10; l++)
    {
        printf("%c: ", valores[l + 52]);
        for (int c = 0; c < qd[l]; c++)
            printf("*");
        printf(" (%d - %.2f)\n", qd[l], ((float)qd[l] / qtdTotal));
    }

    return 0;
}