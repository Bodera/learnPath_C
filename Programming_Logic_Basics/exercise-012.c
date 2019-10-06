#include <stdio.h>
#include <locale.h>
//Escreva um algoritmo que receba um número e imprima uma das mensagens:
// "é múltiplo de 3" ou "não é múltiplo de 3".

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	printf("Informe 1 (um) número para prosseguir: ");
	scanf("%d", &n1);
	
	if (n1 % 3 == 0)
	{
		printf("%d é um múltiplo de 3.", n1);
	}
	else
	{
		printf("%d não é um múltiplo de 3.", n1);
	}
	
	getchar();
	return 0;
}
