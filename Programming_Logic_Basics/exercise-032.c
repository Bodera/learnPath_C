#include <stdio.h>
#include <locale.h>
//Suponha que você atrasou uma conta. A cada mês que você deixar de
// pagar, será cobrado 1% de juros no valor inicial. Se atrasar 3 meses,
// irá pagar 3%. Vamos também supor que você possa atrasar, no máximo,
// 5 meses.

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float conta, total = 0;
	int dias, meses;
	
	printf("Informe o valor da conta.\n");
	scanf("%f",&conta);
	printf("Quantos dias se passaram desde a data de vencimento?\n");
	scanf("%i", &dias);
	
	meses = dias/30;
	
	switch (meses)
	{
		case 0:
			total += conta;
			printf("Total a pagar R$ %.2f",total);
			break;
		case 1:
			total += conta*(1+0.01);
			printf("Total a pagar R$ %.2f\n",total);
			break;
		case 2:
			total += conta*(1+0.02);
			printf("Total a pagar R$ %.2f\n",total);
			break;
		case 3:
			total += conta*(1+0.03);
			printf("Total a pagar R$ %.2f\n",total);
			break;
		case 4:
			total += conta*(1+0.04);
			printf("Total a pagar R$ %.2f\n",total);
			break;
		case 5:
			total += conta*(1+0.05);
			printf("Total a pagar R$ %.2f\n",total);
			break;
		default:
			printf("O período de atraso extrapolou o tolerado.\n");
			break;
	}
	
	getchar();
	return 0;
}
