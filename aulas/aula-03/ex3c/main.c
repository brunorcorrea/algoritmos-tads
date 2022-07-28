#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
    char operador = ' ';
    float num = 6.25;
    float num2 = 2.25;
    
    scanf("%f%c%f", &num, &operador, &num2);

    if(operador == '+'){
        printf("%.3f%c%.3f=%.3f\n", num, operador, num2, num + num2);
    }
    else if(operador == '-'){
        printf("%.3f%c%.3f=%.3f\n", num, operador, num2, num - num2);
    }
    else if(operador == '*'){
        printf("%.3f%c%.3f=%.3f\n", num, operador, num2, num * num2);
    }
    else if(operador == '/'){
        printf("%.3f%c%.3f=%.3f\n", num, operador, num2, num / num2);
    }
    else {
        printf("Operador invalido\n");
    }
    
    return 0;
}