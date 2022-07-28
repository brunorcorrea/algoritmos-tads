#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float* polinomio, x, soma = 0;
    int grau;
    scanf("%d", &grau);
    
    polinomio = (float*) malloc(grau * sizeof(float) + 1);

    if(polinomio == NULL) {
        return 1;
    }

    for( int i = 0; i <= grau; i++ ) {
        scanf("%f",&polinomio[i]);
    }

    scanf("%f", &x);

    for( int i = 0; i <= grau; i++ ) {
        soma += (polinomio[i] * pow(x, i));
    }
    printf("%.2f\n", soma);

    free(polinomio);

    return 0;
}