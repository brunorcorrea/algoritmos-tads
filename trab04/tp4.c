//Mitsuo Miyazato - 260852
#include <stdio.h>
#include <string.h>

int main(){

    char texto[1001];
    int vetor[62], qtdCarac = 0, contador , j;
    float porcentagem = 0;

    for(contador = 0; contador < 62; contador++)
    {
        vetor[contador] = 0;
    }


    fgets(texto, 1001,stdin);

    do
    {
        for(int i = 0; i < strlen(texto) - 1; i++)
        {
            if(((texto[i] >= 48) && (texto[i] <= 57)) || ((texto[i] >= 65) && (texto[i] <=90)) || ((texto[i] >=97) && (texto[i] <= 122)))
            {
                qtdCarac += 1;
            switch (texto[i])
            {
            case 'A':
                vetor[0]++;
                break;
            case 'B':
                vetor[1]++;
                break;
            case 'C':
                vetor[2]++;
                break;
            case 'D':
                vetor[3]++;
                break;
            case 'E':
                vetor[4]++;
                break;
            case 'F':
                vetor[5]++;
                break;
            case 'G':
                vetor[6]++;
                break;
            case 'H':
                vetor[7]++;
                break;
            case 'I':
                vetor[8]++;
                break;
            case 'J':
                vetor[9]++;
                break;
            case 'K':
                vetor[10]++;
                break;
            case 'L':
                vetor[11]++;
                break;
            case 'M':
                vetor[12]++;
                break;
            case 'N':
                vetor[13]++;
                break;
            case 'O':
                vetor[14]++;
                break;
            case 'P':
                vetor[15]++;
                break;
            case 'Q':
                vetor[16]++;
                break;
            case 'R':
                vetor[17]++;
                break;
            case 'S':
                vetor[18]++;
                break;
            case 'T':
                vetor[19]++;
                break;
            case 'U':
                vetor[20]++;
                break;
            case 'V':
                vetor[21]++;
                break;
            case 'W':
                vetor[22]++;
                break;
            case 'X':
                vetor[23]++;
                break;
            case 'Y':
                vetor[24]++;
                break;
            case 'Z':
                vetor[25]++;
                break;
            case 'a':
                vetor[26]++;
                break;
            case 'b':
                vetor[27]++;
                break;
            case 'c':
                vetor[28]++;
                break;
            case 'd':
                vetor[29]++;
                break;
            case 'e':
                vetor[30]++;
                break;
            case 'f':
                vetor[31]++;
                break;
            case 'g':
                vetor[32]++;
                break;
            case 'h':
                vetor[33]++;
                break;
            case 'i':
                vetor[34]++;
                break;
            case 'j':
                vetor[35]++;
                break;
            case 'k':
                vetor[36]++;
                break;
            case 'l':
                vetor[37]++;
                break;
            case 'm':
                vetor[38]++;
                break;
            case 'n':
                vetor[39]++;
                break;
            case 'o':
                vetor[40]++;
                break;
            case 'p':
                vetor[41]++;
                break;
            case 'q':
                vetor[42]++;
                break;
            case 'r':
                vetor[43]++;
                break;
            case 's':
                vetor[44]++;
                break;
            case 't':
                vetor[45]++;
                break;
            case 'u':
                vetor[46]++;
                break;
            case 'v':
                vetor[47]++;
                break;
            case 'w':
                vetor[48]++;
                break;
            case 'x':
                vetor[49]++;
                break;
            case 'y':
                vetor[50]++;
                break;
            case 'z':
                vetor[51]++;
                break;
            case '0':
                vetor[52]++;
                break;
            case '1':
                vetor[53]++;
                break;
            case '2':
                vetor[54]++;
                break;
            case '3':
                vetor[55]++;
                break;
            case '4':
                vetor[56]++;
                break;
            case '5':
                vetor[57]++;
                break;
            case '6':
                vetor[58]++;
                break;
            case '7':
                vetor[59]++;
                break;
            case '8':
                vetor[60]++;
                break;
            case '9':
                vetor[61]++;
                break;
            }
            }

        }
            
        
        texto[0] = '\0';
        

        fgets(texto, 1001,stdin);
    }while(texto[2] != 'M');

    printf("Caracteres Maiusculos:\n");
    for(j = 0; j <= 25; j++)
    {
        porcentagem = ((float) vetor[j]) / qtdCarac;
        
        printf("%c: ", j+65);
        
        for(contador=0; contador <= vetor[j]; contador++)
        {
            if(contador == vetor[j])
            {
                printf(" (%d - %.2f)\n", vetor[j], porcentagem);
            }
            else
            {
                printf("*");
            }
        }
        porcentagem = 0;   
    }
    printf("\n");
    printf("Caracteres Minusculos:\n");
    for(j = 26; j <= 51; j++)
    {
        porcentagem = ((float) vetor[j]) / qtdCarac;
        
        printf("%c: ", j+71);
        
        for(contador=0; contador <= vetor[j]; contador++)
        {
            if(contador == vetor[j])
            {
                printf(" (%d - %.2f)\n", vetor[j], porcentagem);
            }
            else
            {
                printf("*");
            }
        }
        porcentagem = 0;   
    }
    printf("\n");
    printf("Digitos:\n");
    for(j = 52; j <= 61; j++)
    {
        porcentagem = ((float) vetor[j]) / qtdCarac;
        
        printf("%d: ", j-52);
        
        for(contador=0; contador <= vetor[j]; contador++)
        {
            if(contador == vetor[j])
            {
                printf(" (%d - %.2f)\n", vetor[j], porcentagem);
            }
            else
            {
                printf("*");
            }
        }
        porcentagem = 0;   
    }

}