#include <stdio.h>
#include <locale.h>
//Faça um programa que receba três notas, calcule e
// mostre a média aritmética entre elas.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double n1, n2, n3, media;
	
	printf("Informar 3 (três) notas para obter a média aritmética.\n");
	scanf(" %lf %lf %lf", &n1, &n2, &n3);
	
	media = (n1+n2+n3) / 3;
	
	printf("%.2lf é o valor final da média entre as notas.", media);
	
	getchar();
	return 0;
}

