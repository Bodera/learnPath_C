#include <stdio.h>
#include <locale.h>
//Ler um número inteiro e imprimir seu quadrado.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	printf("Informar 1 (um) número inteiro: ");
	scanf("%d", &n1);
	
	n1 *= n1;
	
	printf("O quadrado do número fornecido é: %d", n1);
	
	getchar();
	return 0;
}
