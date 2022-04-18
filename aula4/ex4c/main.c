#include <stdio.h>
#include <stdlib.h>

int main () {
    int num, par = 0, impar = 0;
    for(int i = 1; i <= 10; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) par++;
        else impar++;
    }

    printf("%d pares, %d impares\n", par, impar);
}