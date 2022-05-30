#include <stdio.h>
#include <ctype.h>
#include <math.h>

float media(float n1, float n2, char tipo) {
    if(toupper(tipo) == 'A') {
        return (n1+n2)/2;
    }
    else if(toupper(tipo) == 'B') {
        return sqrt(n1*n2);
    }
}

int main() {
    char tipo;
    float n1, n2;
    scanf("%c", &tipo);
    scanf("%f %f", &n1, &n2);

    printf("%.3f\n", media(n1, n2, tipo));
    return 0;
}