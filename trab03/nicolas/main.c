#include <stdio.h>
#include <strings.h>
#define A 15
int main()
{
	int dist[A][A], quantidadecidades = 0, saida, chegada, proximacidade = -1;
	int inicio, fim, soma = 0, aux = 0, menor = 1000, cidadesvisitadas[50];
	int pontoinicial, pontofim;

	scanf("%d", &quantidadecidades);

	for (saida = 0; saida < quantidadecidades; saida++)
		for (chegada = 0; chegada < quantidadecidades; chegada++)
		{
			scanf("%d", &dist[saida][chegada]);
		}

	scanf("%d", &inicio);
	scanf("%d", &fim);
	cidadesvisitadas[0] = pontoinicial = inicio;
	pontofim = fim;

	aux++;

	for (saida = inicio; inicio != pontofim; saida = inicio)
	{
		for (chegada = 0; chegada < quantidadecidades; chegada++)
		{
			if (dist[saida][chegada] < menor && dist[saida][chegada] != 0)
			{
				int p;
				for (p = 0; p < aux; p++)
				{
					if (cidadesvisitadas[p] == chegada)
						break;
				}
				if (p == aux)
				{
					menor = dist[saida][chegada];
					proximacidade = chegada;
				}
			}
		}

		soma = soma + menor;
		inicio = cidadesvisitadas[aux] = proximacidade;
		aux++;
		menor = 1000;
	}

	printf("Distancia total entre %d e %d: %d\n", pontoinicial, pontofim, soma);
	printf("Caminho:");
	int y;
	for (y = 0; y < aux; y++)
	{
		if (y == 0)
		{
			printf("%d", cidadesvisitadas[0]);
		}
		else
		{
			printf("->%d", cidadesvisitadas[y]);
		}
	}
	printf("\n");

	return 0;
}