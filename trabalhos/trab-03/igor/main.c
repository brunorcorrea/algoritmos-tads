#include <stdio.h>
#include <string.h>
#define N 20

int main (){
    int num_cidades, cI, cF;
    int indicador_linhas;
    int indicador_colunas;

    scanf("%d", &num_cidades);
    int matrix_de_adjacencias[N][N];
    for (indicador_linhas = 0; indicador_linhas < num_cidades; indicador_linhas++){
        for (indicador_colunas = 0; indicador_colunas < num_cidades; indicador_colunas++)
            scanf("%d", &matrix_de_adjacencias[indicador_linhas][indicador_colunas]);
    }
    scanf("%d", &cI);
    int pdp = cI;
    scanf("%d", &cF);

    int pp_int = 0; /* pp_int = Possivel ponto de interseccao */
    int somatoria_do_perc = 0;
    int contador = 0, pedagio = 77777;
    int percurso[N];

    for(int i = 0; i < N; i++) {
        percurso[i] = -1;
    }

    int tem_Rota = 0, ponto_de_interseccao = -1, caminho = 0;
    percurso[caminho] = cI;
    caminho++;

    while (cI != cF) {
        for (pp_int = 0; pp_int < num_cidades; pp_int++) {
            for (contador = 0; contador < caminho; contador++) {
                if (percurso[contador] == pp_int) {
                    tem_Rota = 1;
                    break;
                }
            }

            if (tem_Rota != 1) {
                if ((matrix_de_adjacencias [cI][pp_int] > 0) && (matrix_de_adjacencias[cI][pp_int] < pedagio)) {
                    pedagio = matrix_de_adjacencias[cI][pp_int];
                    ponto_de_interseccao = pp_int;
                }
            }
            tem_Rota = 0;
        }

        percurso[caminho] = ponto_de_interseccao;
        caminho++;
        cI = ponto_de_interseccao;
        somatoria_do_perc += pedagio;
        pedagio = 77777;
    }

    printf("Distancia total entre %d e %d: %d\n", pdp, cF, somatoria_do_perc );

    printf("Caminho: %d", percurso[0]);
    for(int i = 1; i < caminho; i++) {
        printf("->%d", percurso[i]);
    }
    printf("\n");

    return 0;
}
