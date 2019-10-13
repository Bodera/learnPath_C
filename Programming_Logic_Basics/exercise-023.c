#include <stdio.h>
#include <locale.h>
//Monte um programa que classifique a faixa etária das pessoas conforme
// a idade que foi informada por elas conforme listado:
// Bebê - menos que 2 anos de vida
// Criança - maior que 2 e até 12 anos
// Adolescente - maior que 12 e menor 23
// Adulto - maior que 23 e menor que 70
// Idoso - maior que 70 anos

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Informar a idade em anos: ");
	scanf("%d", &idade);
	
	if(idade >= 70)
	{
		printf("Classificação - Idoso.");
	}
	else if (idade >= 23 && idade < 70)
	{
		printf("Classificação - Adulto.");
	}
	else if (idade >= 12 && idade < 23)
	{
		printf("Classificação - Adolescente.");
	}
	else if (idade >= 2 && idade < 12)
	{
		printf("Classificação - Criança.");
	}
	else
	{
		printf("Classificação - Bebê.");
	}
	
	getchar();
	return 0;
}
