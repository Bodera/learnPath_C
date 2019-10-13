#include <stdio.h>
#include <locale.h>
//Informe o tipo de carro (A, B ou C). Informar o percurso rodado em km
// e calcule o consumo estimado, conforme o tipo de carro.
//    A=8, B=9, C=12 km/litro.

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char carro;
	double km, consumo;
	
	printf("Informe o tipo de carro (A, B, C).\n");
	scanf("%c",&carro);
	
	printf("Informe o percurso rodado em km.\n");
	scanf("%lf",&km);
	
	switch (carro)
	{
		case 'a': case 'A':
			consumo = km / 8.0;
			printf("Consumo estimado em litros: %.2lf\n", consumo);
			break;
		case 'b': case 'B':
			consumo = km / 9.0;
			printf("Consumo estimado em litros: %.2lf\n", consumo);
			break;
		case 'c': case 'C':
			consumo = km / 12.0;
			printf("Consumo estimado em litros: %.2lf\n", consumo);
			break;
		default:
			printf("Opção inválida!");
			break;
	}
	
	getchar();
	return 0;
}
