#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto {
    float x,y;
} Ponto;

int main() {
    Ponto p1, p2;
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    if(sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)) < 0.0000001) {
        printf("sao iguais\n");
    }
    else printf("diferentes\n");
    
    return 0;
}