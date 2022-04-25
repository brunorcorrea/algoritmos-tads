#include <stdlib.h>
#include <stdio.h>

void scanArray(int* v) {
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
}

void interpolate(int *v1, int *v2) {
    for (int i = 0; i < 10; i++) {
            printf("%d|", v1[i]);
            printf("%d|", v2[i]);
    }
    printf("\n");
}

int main () {
    int v1[10], v2[10];
    scanArray(v1);
    scanArray(v2);

    interpolate(v1, v2);

    return 0;
}