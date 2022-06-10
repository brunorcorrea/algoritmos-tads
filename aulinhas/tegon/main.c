#include <stdio.h>

int menor = 0;
int maior = 0;
int N;

void menor_maior (int vetor[N]){

    int a;

    for (a=0; a<N; a++){

        if (a==0){
            menor = vetor [a];
            maior = vetor [a];
        }

        else {
            if (vetor [a] < menor){
                menor = vetor [a];
            }
            else if (vetor [a] > maior){
                maior = vetor [a];
            }
        }
    }
}

int main (){

    scanf("%d", &N);
    int vet [N];
    int a;
    
    for (a=0; a<N; a++){
        scanf ("%d", &vet [a]);
    }

    menor_maior (vet);

    printf ("maior valor: %d\n", maior);
    printf ("menor valor: %d\n", menor);

    return 0;
}