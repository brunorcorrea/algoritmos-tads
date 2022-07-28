#include <stdio.h>

int main () {
    int num, d = 0;
    scanf("%d", &num);
    for(int i = 2; i <= num/2; i++) {
        if(num%i == 0) {
            printf("Nao eh primo\n");
            d++;
            break;
        }
    }
    if(d == 0) printf("Numero primo\n");
    return 0;
}