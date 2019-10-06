#include <stdio.h>
#include <locale.h>
//Faça um programa para calcular a área de um retângulo.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double h, b, area;
	
	printf("Informe o comprimento dos lados do retângulo (altura, base): ");
	scanf("%lf %lf", &h, &b);
	
	area = h * b;
	
	printf("Área = %.2lf, Altura = %.2lf, Base = %.2lf", area, h, b);
	
	getchar();
	return 0;
}
