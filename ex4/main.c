#include <stdlib.h>
#include <stdio.h>

int main() {
    int dia, mes, ano;
    char barra;
    scanf("%i%c%i%c%i", &dia, &barra, &mes, &barra, &ano);
    switch(mes) {
        case 1:
            printf("%i%c%i%c%i",dia, barra, mes, barra, ano);
        break;
        default:
            printf("Mes nao suportado\n");
        break;
    }

    return 0;
}