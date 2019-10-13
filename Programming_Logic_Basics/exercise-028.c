#include <stdio.h>
#include <locale.h>
//Informar um saldo e imprimir o saldo com reajuste de 1%.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double saldo;
	
	printf("Informar valor correspondente ao saldo: ");
	scanf("%lf", &saldo);
	
	saldo *= (1+0.01);
	
	printf("Saldo com reajuste de 1%%: %.2lf", saldo);
	
	getchar();
	return 0;
}
