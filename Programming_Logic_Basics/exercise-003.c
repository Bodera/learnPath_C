#include <stdio.h>
#include <locale.h>
#include <math.h>
//Faça um programa para calcular a área de um quadrado.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double lado, area;
	
	printf("Informe o comprimento de 1 (um) dos lados do quadrado: ");
	scanf("%lf", &lado);
	
	//Adicionar o argumento -lm no momento da build para incluir Math.h
	area = pow(lado,2);
	
	printf("Área = %.2lf, Lado = %.2lf, Fórmula = Lado²", area, lado);
	
	getchar();
	return 0;
}
