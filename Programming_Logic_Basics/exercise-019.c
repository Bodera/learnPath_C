#include <stdio.h>
#include <locale.h>
//Faça um algoritmo para ler duas variáveis inteiras A e B e garantir 
// que A e B fiquem em ordem crescente, ou seja, a variável A deverá
// armazenar o menor valor fornecido e a variável B o maior.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;	
	
	printf("Informar dois valores inteiros: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1 > n2)
	{
		int temp;
		temp = n1;
		n1 = n2;
		n2 = temp;
		printf("Valores ordenados - %d %d", n1, n2);
	}
	else //n1 == n2 || n2 > n1
	{
		printf("Valores ordenados - %d, %d", n1, n2);
	}
	getchar();
	return 0;
}
