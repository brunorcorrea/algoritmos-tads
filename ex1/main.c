#include <stdio.h>
#include <stdlib.h>

int main () {
    int num = 0;
    scanf("%d",&num);
    if(num % 2 == 0) printf("par\n");
    else printf("impar\n");
    return 0;
}