#include <stdio.h>
#include <locale.h>
//Um comerciante comprou um produto e quer vendê-lo com um lucro de 45%
// se o valor da compra for menor que R$ 20,00; caso contrário, o lucro
// será de 30%. Elabore um algoritmo que leia o valor do produto e 
// imprima o valor de venda para o produto.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double preco, venda;
	
	printf("Informar o preço de compra do produto: R$ ");
	scanf("%lf", &preco);
	
	if (preco < 20)
	{
		venda = preco*(1+0.45);
		printf("Valor de venda - R$ %.2lf", venda);
	}
	else
	{
		venda = preco*(1+0.3);
		printf("Valor de venda - R$ %.2lf", venda);
	}
	
	getchar();
	return 0;
}
