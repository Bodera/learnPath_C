#include <stdio.h>

int main(){
// atividade: calcular o salário de um cara
	
	int id;
	int horasTrabalhadas;
	double salarioHora;
	double resultado;

	// Leia id
	printf("");
	scanf("%d",&id);
	// Leia número de horas trabalhadas
	printf("");
	scanf("%d",&horasTrabalhadas);
	// Leia o $/hora
	printf("");
	scanf("%lf",&salarioHora);
	
	// Calcule a diferença e me diga quando deu	
	printf("NUMBER = %d\n",id);
	resultado = horasTrabalhadas * salarioHora;
	printf("SALARY = U$ %.2lf\n",resultado);
	
	return 0;
}
