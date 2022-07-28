#include <stdio.h>
#include <math.h>

// Retornando o resultado das operações através dos 2 primeiros parâmetros da função chamada

void soma(int* realA, int* imagA, int realB, int imagB) {
    *realA = (*realA) + realB;
    *imagA = (*imagA) + imagB;
}

void multiplica(int* realA, int* imagA, int realB, int imagB) {
    int tempR = *realA, tempI = *imagA;
    *realA = ( tempR * realB ) - ( tempI * imagB );
    *imagA = ( tempR * imagB ) + ( tempI * realB );
}

int main() {
    int realA, imagA;
    int realB, imagB;
    char op;

    scanf("%d %d %c %d %d", &realA, &imagA, &op, &realB, &imagB);
    if(op == '+') {
        soma(&realA, &imagA, realB, imagB);
    }
    else if(op == '*') {
        multiplica(&realA, &imagA, realB, imagB);
    }

    printf("%d + %di\n", realA, imagA);
    return 0;
}