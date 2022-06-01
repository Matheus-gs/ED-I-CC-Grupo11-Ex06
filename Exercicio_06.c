// Arquivo Exercicio_06.c
// Autor: Matheus Gomes Santos - RGM:26136805
// Turma: 3/N1

#include <stdio.h>
#include <stdlib.h>

int busca_bin(int vet[], int n, int elem);

int main(void)
{

	int matriculas[7] = {100, 80, 75, 60, 52, 25, 10};

	int n, matricula, resultado;

	n = 7;
	matricula = 80;
	resultado = busca_bin(matriculas, n, matricula);

	printf(" \n voce buscou a matricula %d \n", matricula);

	if (matriculas[resultado] == matricula)
	{
		printf("\n voce foi selecionado, sua matricula: %d \n", matricula);
		printf(" \n o resultado retornado foi: %d \n", resultado);
	}
	else
	{
		printf("\n voce nao foi selecionado, sua matricula %d nao consta no sistema \n", matricula);
		printf(" \n o resultado retornado foi: %d \n", resultado);
	}

	matricula = 200;
	resultado = busca_bin(matriculas, n, matricula);
	
	printf("\n ===== Segunda execucao ===== \n");
	

	printf("\n voce buscou a matricula: %d \n", matricula);
	

	if (resultado == matricula)
	{
		printf("\n voce foi selecionado, sua matricula: %d \n", matricula);
		printf("\n o resultado retornado foi: %d \n", resultado);
	}
	else
	{
		printf("\n voce nao foi selecionado, sua matricula %d nao consta no sistema \n", matricula);
		printf(" \n o resultado retornado foi: %d \n", resultado);
	}

	return 0;
}

int busca_bin(int vet[], int n, int elem)
{
	int ini, fim, meio;

	ini = 0;
	fim = n - 1;
	
	while (ini <= fim)
	{
		meio = (ini + fim) / 2;

		if (elem == vet[meio])
			return meio;

		else if (elem > vet[meio])
			fim = meio - 1;

		else
			ini = meio + 1;
	}

	return -1;
}
