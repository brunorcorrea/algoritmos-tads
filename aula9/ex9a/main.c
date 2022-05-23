#include <stdio.h>
#include <math.h>
#define PI 3.14159

float volume_esfera(float raio) {
    return (4 * PI * pow(raio,3))/3;
}

int main() {
    float raio;
    scanf("%f", &raio);
    printf("%.2f\n", volume_esfera(raio));
    return 0;
}