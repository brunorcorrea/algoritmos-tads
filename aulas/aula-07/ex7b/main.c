#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compara(char* palavra) {
    char aux[255];
    int size = strlen(palavra)-1;
    strcpy(aux, palavra);
    
    for(int i = 0; i < size; i++) 
    {
        if(toupper(palavra[size - i]) != toupper(aux[i])) return 0;
    }

    return 1;
}

int main() {
    char palavra[255];
    scanf("%s", palavra);
    if (compara(palavra)) printf("Esta palavra e um palindromo\n");
    else printf("Esta palavra nao e um palindromo\n");
    return 0;
}