#include <stdio.h>
#include <locale.h>
//A prefeitura de uma cidade abriu uma linha de crédito para os 
// funcionários estatutários. O valor máximo da prestação não poderá
// ultrapassar 30% do salário bruto. Fazer um algoritmo que permita
// entrar com o salário bruto e o valor da prestação, e informar se
// o empréstimo pode ou não ser concedido.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double sal_bruto, vlr_parcela, vlr_max;
	
	printf("Informar valor do salário bruto: ");
	scanf("%lf", &sal_bruto);
	printf("Informar valor da prestação: ");
	scanf("%lf", &vlr_parcela);
	
	vlr_max = sal_bruto * 0.3;
	
	if (vlr_parcela > vlr_max)
	{
		printf("O empréstimo não poderá ser concedido.");
	}
	else
	{
		printf("O empréstimo poderá ser concedido.");
	}
	
	getchar();
	return 0;
}
