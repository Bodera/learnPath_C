#include <stdio.h>
#include <locale.h>
//Faça um algoritmo para ler três valores reais e informar se estes
// podem ou não formar um triângulo e qual tipo de triângulo seria:
// equilátero, isósceles ou escaleno. Obs: no caso do usuário informar
// algum dos lados maior que a soma dos outros 2 lados configura uma
// forma geométrica que não caracteriza um triângulo.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double lado_a, lado_b, lado_c;
	
	printf("Informar medidas do lado A (Ângulo do vértice): ");
	scanf("%lf", &lado_a);
	printf("Informar medidas do lado B: ");
	scanf("%lf", &lado_b);
	printf("Informar medidas do lado C (Base do triângulo): ");
	scanf("%lf", &lado_c);
	
	if (lado_a > lado_b+lado_c || 
		lado_c > lado_a+lado_b || 
		lado_b > lado_c+lado_a)
	{
		printf("Classificação - As medidas informadas não caracterizam um triângulo.");
	}
	else if (lado_a == lado_b && lado_b == lado_c)
	{
		printf("Classificação - Triângulo equilátero.");
	}
	else if ((lado_a == lado_b && lado_b != lado_c) ||
		(lado_b == lado_c && lado_c != lado_a) ||
		(lado_c == lado_a && lado_a != lado_b))
	{
		printf("Classificação - Triângulo isósceles.");
	}
	else //(lado_a != lado_b && lado_b != lado_c && lado_c != lado_a)
	{
		printf("Classificação - Triângulo escaleno.");
	}
	
	getchar();
	return 0;
}
