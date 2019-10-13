#include <stdio.h>
#include <locale.h>
//Crie uma calculadora usando a instrução SWITCH, que pergunte qual das
// operações básicas quer fazer (+, -, *, /), em seguida peça os dois
// números e mostre o resultado da operação matemática entre eles.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char operador, reset='S';
	
	while(reset!='N' && reset!='n')
	{
		fflush(stdin); 
		printf("Bem-vindo ao software calculadora.\n");
		printf("Informe qual o operacao artimetica deseja realizar (+, -, *, /):\n");
		scanf(" %c", &operador);

		switch(operador)
		{
			case '+':;
				double p1,p2,soma=0;
				printf("Informe a primeira parcela:\n");
				scanf("%lf",&p1);
				printf("Informe a segunda parcela:\n");
				scanf("%lf",&p2);
				soma = p1+p2;
				printf("A soma é: %.2lf\n",soma);
				break;
			case '-':;
				double minuendo, subtraendo, diferenca=0;
				printf("Informe o minuendo:\n");
				scanf("%lf",&minuendo);
				printf("Informe o subtraendo:\n");
				scanf("%lf",&subtraendo);
				diferenca = minuendo-subtraendo;
				printf("A diferenca é: %.2lf\n",diferenca);
				break;
			case '*':;
				double multiplicando, multiplicador, produto=0;
				printf("Informe o multiplicando:\n");
				scanf("%lf",&multiplicando);
				printf("Informe o multiplicador:\n");	
				scanf("%lf",&multiplicador);
				produto = multiplicando*multiplicador;
				printf("O produto é: %.2lf\n",produto);
				break;
			case '/':;
				double dividendo, divisor, resto, quociente=0;
				printf("Informe o dividendo:\n");
				scanf("%lf",&dividendo);
				printf("Informe o divisor:\n");
				scanf("%lf",&divisor);
				if(divisor == 0) break;
				quociente = dividendo/divisor;
				printf("O quociente é: %d\n",(int)quociente);
				resto = quociente - (int)quociente;
				printf("Com resto de: %.2lf\n",resto);
				break;
			default:
				printf("Operação aritmética não suportada.\n");
				break;
			}
		
		fflush(stdin); //para limpar o buffer da quebra de linha do \n
		//alternativa ao fflush(stdin), use scanf(" %c",&reset);
		printf("Deseja realizar nova operacao? (N/s)\n");
		scanf(" %c",&reset);	
	}
	//fflush(stdin); 
	printf("Encerrando o programa.\n");
	
	getchar();
	return 0;
}
