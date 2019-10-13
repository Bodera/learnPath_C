#include <stdio.h>
#include <locale.h>
//Faça um algoritmo para ler três notas e o número de faltas de um aluno
// e escrever qual a situação final: aprovado, reprovado por falta ou
// reprovado por média. A média para aprovação é 7,0 e o limite de
// faltas é de 25% do total de aulas. O número de aulas ministradas no
// semestre foi de 80. A reprovação por falta sobrepõe a reprovação por
// média.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double n1, n2, n3, media;
	int tt_faltas, tolerancia;
	
	printf("Informar 3 (três) valores correspondentes às notas: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	printf("Informar o valor correspondente ao total de ausências: ");
	scanf("%d", &tt_faltas);
	
	tolerancia = 80 * 0.25;
	media = (n1+n2+n3) / 3.0;
	
	if(tt_faltas > tolerancia)
	{
		printf("Situação final - Reprovado por falta");
	}
	else if (media < 7.0)
	{
		printf("Situação final - Reprovado por média");
	}
	else
	{
		printf("Situação final - Aprovado");
	}
	
	getchar();
	return 0;
}
