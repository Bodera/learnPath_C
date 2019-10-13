#include <stdio.h>
#include <locale.h>
//Ler um número, se este for maior que 20 imprimir a metade.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double n1;
	
	printf("Informar um número: ");
	scanf("%lf", &n1);
	
	if(n1 > 20)
	{
		printf("%.2lf", (n1/2.0));
	}
	else
	{
		printf("%.2lf", n1);
	}
	
	getchar();
	return 0;
}
