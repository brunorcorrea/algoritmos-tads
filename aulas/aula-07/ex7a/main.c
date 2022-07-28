#include <stdio.h>
#include <string.h>

void inverte(char* palavra) {
    int size = strlen(palavra);
    for(int i = 2; i <= size; i++) {
        printf("%c", palavra[size - i]);
    }
    printf("\n");
}

int main() {
    char palavra[255];
    fgets(palavra, 255, stdin);
    inverte(palavra);
    return 0;
}