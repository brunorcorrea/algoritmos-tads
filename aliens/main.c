#include <stdio.h>
#include <stdlib.h>

void scanDna(char* dna) {
    for(int i = 0; i < 12; i++) {
        scanf(" %c",&dna[i]);
    }
}

void countLetters(char* dna, int* dnaQtd) {
    for(int i = 0; i < 12; i++) {
        switch (dna[i]) {
            case 'A' : 
                dnaQtd[0]++;
            break;
            case 'B' : 
                dnaQtd[1]++;
            break;
            case 'C' : 
                dnaQtd[2]++;
            break;
            case 'D' : 
                dnaQtd[3]++;
            break;
            case 'E' : 
                dnaQtd[4]++;
            break;
            case 'F' : 
                dnaQtd[5]++;
            break;
        }
    }
}

void cleanArrays(int* dnaQtd1, int* dnaQtd2) {
    for(int i = 0; i < 6; i++) {
        dnaQtd1[i] = 0;
        dnaQtd2[i] = 0;
    }
}

int compareQtd(int* dnaQtd1, int* dnaQtd2) {
    for(int i = 0; i < 6; i++) {
        if(dnaQtd1[i] != dnaQtd2[i]) return 0;
    }

    return 1;
}

int main() {
    int n, qtdDna1[6], qtdDna2[6]; // 0-A, 1-B, 2-C, 3-D, 4-E, 5-F
    char dna1[12], dna2[12];
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        cleanArrays(qtdDna1, qtdDna2);

        scanDna(dna1);
        scanDna(dna2);

        countLetters(dna1, qtdDna1);
        countLetters(dna2, qtdDna2);

        if(compareQtd(qtdDna1, qtdDna2)) {
            printf("Caracteristicas Iguais\n");
        }
        else {
            printf("Caracteristicas Diferentes\n");
        }
    }
    
    return 0;
}