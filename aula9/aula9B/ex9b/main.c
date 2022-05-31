#include <stdio.h>
#include <math.h>

int soma(int realA, int imagA, int realB, int imagB, int* imagRes) {
    *imagRes = imagA + imagB;
    return realA+realB;
}

int multiplica(int realA, int imagA, int realB, int imagB, int* imagRes) {
    *imagRes = realA*imagB + imagA*realB;
    return realA*realB - imagA*imagB;
}

int main() {
    int realA, imagA;
    int realB, imagB;
    int imagRes = 0, realRes = 0;
    char op;

    scanf("%d %d %c %d %d", &realA, &imagA, &op, &realB, &imagB);
    if(op == '+') {
        realRes = soma(realA, imagA, realB, imagB, &imagRes);
    }
    else if(op == '*'){
        realRes = multiplica(realA, imagA, realB, imagB, &imagRes);
    }

    printf("%d + %di\n", realRes, imagRes);
    return 0;
}