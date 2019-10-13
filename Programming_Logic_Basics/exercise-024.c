#include <stdio.h>
#include <locale.h>
//Receber um valor qualquer do teclado e imprimir esse valor com
// reajuste de 10%;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double valor;
	
	printf("Informar 1 (um) valor numérico: ");
	scanf("%lf", &valor);
	
	valor *= (1+0.1);
	
	printf("Valor reajustado em 10%%: %.2lf", valor);
	
	getchar();
	return 0;
}
