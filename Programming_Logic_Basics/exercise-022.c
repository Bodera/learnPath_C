#include <stdio.h>
#include <locale.h>
//Faça um programa para ler a temperatura atual e conforme a leitura,
// imprimir o resultado conforme listado:
// Até 15ºC - Muito frio
// De 16ºC a 23ºC - Frio
// De 23ºC a 26ºC - Agradável
// De 26ºC a 30ºC - Quente
// Acima de 31ºC - Muito quente

int main()
{
	double temperatura;
	
	printf("Informar valor da temperatura em graus centígrados: ");
	scanf("%lf", &temperatura);
	
	if (temperatura <= 15)
	{
		printf("Muito frio!");
	}
	else if (temperatura > 15 && temperatura <= 23)
	{
		printf("Frio!");
	}
	else if (temperatura > 23 && temperatura <= 26)
	{
		printf("Agradável!");
	}
	else if (temperatura > 26 && temperatura <= 30)
	{
		printf("Quente!");
	}
	else
	{
		printf("Muito quente!");
	}
	
	getchar();
	return 0;
}
