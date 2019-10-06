#include <stdio.h>
#include <locale.h>
#include <math.h>
//Faça um programa que calcule e mostre a área de um círculo. Para isso,
// a seguinte fórmula deve ser usada: A = PI * raio²

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double raio, area;
	
	printf("Informe o raio do círculo para obter o valor da área: ");
	scanf("%lf", &raio);
	
	//Adicionar o argumento -lm no momento da build para incluir Math.h
	area = M_PI * pow(raio,2);
	
	printf("Área = %.2lf, Raio² = %.2lf.", area, pow(raio,2));
	
	getchar();
	return 0;
}
