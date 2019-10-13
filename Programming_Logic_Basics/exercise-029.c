#include <stdio.h>
#include <locale.h>
//Cálculo de um salário líquido de um professor. Serão fornecidos valor
// da hora aula, número de aulas dadas e o % de desconto do INSS.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double salario, hora_aula, prcntgm_contrib;
	int tt_aulas;
	
	printf("Informar o valor pago por hora de aula: R$ ");
	scanf("%lf", &hora_aula);
	printf("Informar o total de aulas ministradas: ");
	scanf("%d", &tt_aulas);
	printf("Informar porcentagem de desconto do INSS (só números): ");
	scanf("%lf", &prcntgm_contrib);
	
	prcntgm_contrib /= 100;
	salario = hora_aula * tt_aulas;
	salario *= (1+prcntgm_contrib);
	
	printf("O salário líquido do professor é de: R$ %.2lf", salario);
	
	getchar();
	return 0;
}
