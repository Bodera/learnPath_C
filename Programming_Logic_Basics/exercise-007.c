#include <stdio.h>
#include <locale.h>
#include <math.h>
//Elabore um programa que efetue a leitura de três valores inteiros
// (A, B, C) e apresente como resultado final o quadrado da soma dos.
// três números. resultado = (A+B+C)²

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double a, b, c, resultado;
	
	printf("Informe os valores de A, B e C: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	//Adicionar o argumento -lm no momento da build para incluir Math.h
	resultado = pow(a+b+c,2);
	
	printf("%.2lf é a soma dos quadrados de A, B e C.", resultado);
	
	getchar();
	return 0;
}
