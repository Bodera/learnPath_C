#include <stdio.h>
#include <locale.h>
//Faça um programa que receba três notas e seus respectivos pesos,
// calcule e mostre a média ponderada desses valores.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double n1, p1, n2, p2, n3, p3, media;
	
	printf("Informar 3 (três) notas e pesos para obter a média aritmética.\n");
	printf("Nota 1 e Peso 1: ");
	scanf(" %lf %lf", &n1, &p1);
	printf("Nota 2 e Peso 2: ");
	scanf(" %lf %lf", &n2, &p2);
	printf("Nota 3 e Peso 3: ");
	scanf(" %lf %lf", &n3, &p3);
	
	media = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);
	
	printf("%.2lf é o valor final da média entre as notas.", media);
	
	getchar();
	return 0;
}
