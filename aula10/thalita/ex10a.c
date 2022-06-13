#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int grau;
    float x, valor = 0;
    scanf("%d", &grau);
    float *coeficientes = (float*) malloc((grau + 1) * sizeof(float));

    for(int i = 0; i <= grau; i++){
        scanf("%f", &coeficientes[i]);
    }
    
    scanf("%f", &x);

    for(int i = 0; i <= grau; i++){
        valor += coeficientes[i] * pow(x, i);
    }

    printf("%.2f\n", valor);

    free(coeficientes);

    return 0;
}