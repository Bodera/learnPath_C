#include <stdio.h>
#include <locale.h>
//Um funcionário irá receber um aumento de acordo com o seu plano de
// trabalho, de acordo com as informações abaixo:
//    A=10%, B=15%, C=20%
// Faça um programa que leia o plano de trabalho e o salário atual de
// um funcionário e calcule e imprima o seu novo salário. 
// Use switch-case e do-while.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Teste seus if's, 2 elevado ao número de condições 
	char plano, opcao='n';
	double salario;
	
	do
	{
		printf("Informe seu plano de trabalho:\n");
		scanf(" %c",&plano);
		printf("Informe seu salário:\n");
		scanf("%lf",&salario);
		
		switch(plano)
		{
			case 'A': case 'a':
				salario += salario*0.1;
				printf("Reajuste de 10%%\n");
				printf("Novo salário R$ %.2lf\n", salario);
				break;
			case 'B': case 'b':
				salario += salario*0.2;
				printf("Reajuste de 20%%\n");
				printf("Novo salário R$ %.2lf\n", salario);
				break;
			case 'C': case 'c':
				salario += salario*0.3;
				printf("Reajuste de 30%%\n");
				printf("Novo salário R$ %.2lf\n", salario);
				break;
		}
		
		printf("Calcular reajuste salarial de novo funcionário? (N/s)\n");
		scanf(" %c", &opcao);
	}
	while(opcao!='n' && opcao!='N');
	
	printf("Encerrando o programa.\n");
	
	getchar();
	return 0;
}
