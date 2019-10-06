#include <stdio.h>
#include <locale.h>
//Faça um algoritmo para ler dois números inteiros A e B e informar se 
// A é divisível por B.
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Informe 2 (dois) números inteiros para prosseguir: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1 % n2 == 0)
	{
		printf("%d é divisível por %d.", n1, n2);
	}
	else
	{
		printf("%d não é divisível por %d.", n1, n2);
	}
	
	getchar();
	return 0;
}
