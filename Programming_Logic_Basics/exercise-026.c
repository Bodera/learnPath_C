#include <stdio.h>
#include <locale.h>
//Informe o tempo gasto numa viagem (em horas), a velocidade média
// e calcule o consumo.
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double horas_gastas, velocidade, consumo, km_l;
	
	printf("Informar total de tempo gasto na viagem em horas: ");
	scanf("%lf", &horas_gastas);
	printf("Informar velocidade média durante a viagem: ");
	scanf("%lf", &velocidade);
	printf("Informar a capacidade de Km por Litro do veículo: ");
	scanf("%lf", &km_l);
	
	consumo = (horas_gastas * velocidade) / km_l;
	
	printf("Consumo total de combustível em litros: %.2lf", consumo);
	
	getchar();
	return 0;
}
