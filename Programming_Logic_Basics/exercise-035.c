#include <stdio.h>
#include <locale.h>
//Um posto está vendendo combustíveis com a seguinte tabela de descontos:
// Álcool: até 20 litros desconto de 3% por litro, else 5% por litro
// Gasolina: até 20 litros desconto de 4% por litro, else 6% por litro
// Escreva um algoritmo que leia 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char tipo;
	
	double litros = 0;
	double val_alc = 2.19;
	double val_gas = 3.79;
	
	printf("Informe total de litros vendidos.\n");
	scanf("%f",&litros);
	printf("Informe o tipo de combustIvel.\n");;
	scanf(" %c",&tipo); //remova o espaço e apanhe do programador.
	
	switch(tipo)
	{
		case 'A': 
			litros *= val_alc;
			printf("Total a ser pago: R$ %.2f",litros);
			break;
		case 'G':
			litros = val_gas;
			printf("Total a ser pago: R$ %.2f", litros);
			break;
	}
	
	getchar();
	return 0;
}
