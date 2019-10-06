#include <stdio.h>
#include <locale.h>
//Faça um algoritmo para ler um número inteiro e informar se esse
// número é par ou ímpar.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	printf("Informe 1 (um) número para prosseguir: ");
	scanf("%d", &n1);
	
	if (n1 % 2 == 0)
	{
		printf("%d é um número par.", n1);
	}
	else
	{
		printf("%d é um número ímpar.", n1);
	}
	
	getchar();
	return 0;
}
