#include <stdio.h>
#include <locale.h>
#include <math.h>
//Escreva um algoritmo que leia um número e imprima a raiz quadrada do
// número caso ele seja positivo ou igual a zero e o quadrado do número
// caso ele seja negativo.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double n1;
	
	printf("Informe 1 (um) número antes de prosseguir: ");
	scanf("%lf", &n1);
		
	//Adicionar o argumento -lm no momento da build para incluir Math.h
	if (n1 >= 0)
	{
		printf("Resultado: %.2lf", (sqrt(n1)));
	}
	else
	{
		printf("Resultado: %.2lf", (pow(n1,2)));
	}

	getchar();
	return 0;
}
