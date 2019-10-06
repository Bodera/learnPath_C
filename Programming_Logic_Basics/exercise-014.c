#include <stdio.h>
#include <locale.h>
//Em uma empresa paga-se R$ 19,50 a hora e recolhe-se para o imposto de
// renda 10% dos salários acima de R$ 1500,00. Dado o número de horas
// trabalhadas por um funcionário, informar o valor do seu salário 
// líquido.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double tt_horas, salario, tx_imposto = 0.1;
	
	printf("Informar total de horas trabalhadas: ");
	scanf("%lf", &tt_horas);
	
	salario = tt_horas * 19.5;
	
	if (salario > 1500.00)
	{
		salario = salario - salario * tx_imposto;
		printf("Salário líquido: %.2lf.", salario);
	}
	else
	{
		printf("Salário líquido: %.2lf.", salario);
	}
	
	getchar();
	return 0;
}
