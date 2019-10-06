#include <stdio.h>
#include <locale.h>
//Faça um algoritmo para ler dois números inteiros e escrever o maior.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double n1, n2;
	
	printf("Informe 2 (dois) números para prosseguir: ");
	scanf("%lf %lf", &n1, &n2);
	
	if (n1 > n2)
	{
		printf("%.2lf é maior que %.2lf.", n1, n2);
	}
	else if (n2 > n1)
	{
		printf("%.2lf é maior que %.2lf.", n2, n1);
	}
	else
	{
		printf("%.2lf e %.2lf são iguais.", n1, n2);
	}
	
	
	getchar();
	return 0;
}
