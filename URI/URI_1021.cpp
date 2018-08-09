#include <stdio.h>
#include <math.h> // função trunc
int main(){
	//Variaveis do problema
	double X,qtd;
	double Cedulas[6] = {2, 5, 10, 20, 50, 100};
	double Moedas[6] = {0.01, 0.05, 0.10, 0.25, 0.50, 1.00};

	printf("");
	scanf("%lf",&X); //Lendo o valor a ser fatorado, o ponto é o separador decimal
	do{ //Separando os algarismos

		printf("NOTAS:\n");
		qtd = trunc(X / Cedulas[5]);
		printf("%.0lf nota(s) de R$ 100.00\n", qtd);

		X -= Cedulas[5]*qtd;
		qtd = trunc(X / Cedulas[4]);
		printf("%.0lf nota(s) de R$ 50.00\n", qtd);

		X -= Cedulas[4]*qtd;
		qtd = trunc(X / Cedulas[3]);
		printf("%.0lf nota(s) de R$ 20.00\n", qtd);

		X -= Cedulas[3]*qtd;
		qtd = trunc(X / Cedulas[2]);
		printf("%.0lf nota(s) de R$ 10.00\n", qtd);

		X -= Cedulas[2]*qtd;
		qtd = trunc(X / Cedulas[1]);
		printf("%.0lf nota(s) de R$ 5.00\n", qtd);

		X -= Cedulas[1]*qtd;
		qtd = trunc(X / Cedulas[0]);
		printf("%.0lf nota(s) de R$ 2.00\n", qtd);

		printf("MOEDAS:\n");
        X -= Cedulas[0]*qtd;
		qtd = trunc(X / Moedas[5]);
		printf("%.0lf moeda(s) de R$ 1.00\n", qtd);

		X -= Moedas[5]*qtd;
		qtd = trunc(X / Moedas[4]);
		printf("%.0lf moeda(s) de R$ 0.50\n", qtd);

		X -= Moedas[4]*qtd;
		qtd = trunc(X / Moedas[3]);
		printf("%.0lf moeda(s) de R$ 0.25\n", qtd);

		X -= Moedas[3]*qtd;
		qtd = trunc(X / Moedas[2]);
		printf("%.0lf moeda(s) de R$ 0.10\n", qtd);

		X -= Moedas[2]*qtd;
		qtd = trunc(X / Moedas[1]);
		printf("%.0lf moeda(s) de R$ 0.05\n", qtd);

		X -= Moedas[1]*qtd;
		qtd = X / Moedas[0];
		printf("%.0lf moeda(s) de R$ 0.01\n",qtd);

		break;//para quebrar o loop

	}while(X >= 0 && X <= 1000000.00); // condição do laço

	return 0;
}
