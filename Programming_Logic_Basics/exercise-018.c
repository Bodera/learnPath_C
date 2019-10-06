#include <stdio.h>
#include <locale.h>
//Em uma faculdade, alunos com média superior a 7,0 são aprovados, 
// aqueles com média inferior a 3,0 são reprovados e os demais ficam
// de recuperação. Fornecidas duas notas de um aluno, informe a sua
// situação. Aprovado, reprovado e recuperação, respectivamente.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	double n1, n2, media;
	printf("Informar duas notas para cálculo da situação escolar: ");
	scanf("%lf %lf", &n1, &n2);
	
	media = (n1+n2) / 2;
	
	if (media > 7)
	{
		printf("Situação - Aprovado");
	}
	else if (media < 3)
	{
		printf("Situação - Reprovado");
	}
	else
	{
		printf("Situação - Recuperação");
	}
	
	getchar();
	return 0;
}
