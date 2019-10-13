#include <stdio.h>
#include <locale.h>
// Informar três números inteiros e imprimir a média aritmética.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	double media;
	
	printf("Informar 3 (três) números inteiros para prosseguir: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	media = (n1+n2+n3) / 3.0;
	
	printf("Cálculo da média aritmética: %.2lf", media);
	
	getchar();
	return 0;
}
