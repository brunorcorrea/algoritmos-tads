#include <stdlib.h>
#include <stdio.h>

int main() {
    int dia, mes, ano;
    char barra;
    scanf("%2d%c%2d%c%4d", &dia, &barra, &mes, &barra, &ano);
    switch(mes) {
        case 1:
            printf("%i de janeiro de %i\n",dia, ano);
        break;
        case 2:
            printf("%i de fevereiro de %i\n",dia, ano);
        break;
        case 3:
            printf("%i de marco de %i\n",dia, ano);
        break;
        case 4:
            printf("%i de abril de %i\n",dia, ano);
        break;
        case 5:
            printf("%i de maio de %i\n",dia, ano);
        break;
        case 6:
            printf("%i de junho de %i\n",dia, ano);
        break;
        case 7:
            printf("%i de julho de %i\n",dia, ano);
        break;
        case 8:
            printf("%i de agosto de %i\n",dia, ano);
        break;
        case 9:
            printf("%i de setembro de %i\n",dia, ano);
        break;
        case 10:
            printf("%i de outubro de %i\n",dia, ano);
        break;
        case 11:
            printf("%i de novembro de %i\n",dia, ano);
        break;
        case 12:
            printf("%i de dezembro de %i\n",dia, ano);
        break;
        default:
            printf("Mes invalido\n");
        break;
    }

    return 0;
}