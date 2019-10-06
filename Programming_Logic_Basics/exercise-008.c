#include <stdio.h>
#include <locale.h>
//Construir um algoritmo que leia dois números e efetue a adição.
// Caso o valor somado seja maior que 20, este deverá ser apresentado
// somando-se a ele mais 8; caso o valor somado seja menor ou igual a
// 20, este deverá ser apresentado subtraindo-se 5.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double n1, n2, soma;
	
	printf("Informar 2 (dois) números para prosseguir: ");
	scanf("%lf %lf", &n1, &n2);
	
	soma = n1 + n2;
	
	if (soma > 20)
	{
		printf("Resultado: %.2lf \n", (soma+8));
		printf("Fórmula: %.2lf + %.2lf + 8", n1, n2);
	}
	else
	{
		printf("Resultado: %.2lf \n", (soma-5));
		printf("Fórmula: %.2lf + %.2lf - 5", n1, n2);
	}
	
	getchar();
	return 0;
}
