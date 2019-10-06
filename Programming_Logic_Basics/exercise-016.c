#include <stdio.h>
#include <locale.h>
#include <math.h>
//Elaborar um algoritmo que realize o cálculo do Índice de Massa 
// Corpórea de uma pessoa após receber os valores do peso e da altura.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double peso, altura, imc;
	
	printf("Informar o peso em quilogramas: ");
	scanf("%lf", &peso);
	printf("Informar a altura em metros: ");
	scanf("%lf", &altura);
	
	//Adicionar o argumento -lm no momento da build para incluir Math.h
	altura = pow(altura,2);
	imc = peso / altura;
	
	if (imc < 20)
	{
		printf("Situação - Abaixo do peso");
	}
	else if (imc >= 20 && imc < 25)
	{
		printf("Situação - Peso normal");
	}
	else if (imc >= 25 && imc < 30)
	{
		printf("Situação - Sobrepeso");
	}
	else if (imc >= 30 && imc < 40)
	{
		printf("Situação - Obeso");
	}
	else
	{
		printf("Situação - Obeso mórbido");
	}
	
	getchar();
	return 0;
}
