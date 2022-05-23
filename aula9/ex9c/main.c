#include <stdio.h>
#include <math.h>

float somar(float n1, float n2) {
    return n1+n2;
}

float subtrair(float n1, float n2) {
    return n1-n2;
}

float multiplicar(float n1, float n2) {
    return n1*n2;
}

float dividir(float n1, float n2) {
    return n1/n2;
}

float potencia(float n1, float n2) {
    return pow(n1, n2);
}

int main() {
    char op;
    float n1, n2, resultado;
    scanf("%f%c%f", &n1, &op, &n2);

    switch(op) {
        case '+' : resultado = somar(n1, n2);
        break;
        case '-' : resultado = subtrair(n1, n2);
        break;
        case '*' : resultado = multiplicar(n1, n2);
        break;
        case '/' : resultado = dividir(n1, n2);
        break;
        case '^' : resultado = potencia(n1, n2);
        break;
    }

    printf("%.3f\n", resultado);
    return 0;
}