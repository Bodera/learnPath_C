//Esse problema é melhor lido com vetores e laços de repetição
#include <stdio.h>
int main(){
	//Variaveis do problema
	int X,aux;
	int Cedulas[7] = {1,2,5,10,20,50,100};
	//Lendo o valor a ser fatorado 
	printf("");
	scanf("%d",&X);
	//Separando os algarismos
	do{
		printf("%d\n",X);
	
		aux = X/Cedulas[6]; // var aux recebe o resultado da divisão de X por 100
		printf("%d nota(s) de R$ 100,00\n",aux);
		X = X-Cedulas[6]*aux; // atualiza X subtraindo-o pela multiplicação de aux por 100
		aux = X/Cedulas[5]; // atualiza aux com o resultado da divisão de X por 50
		printf("%d nota(s) de R$ 50,00\n",aux); 
		X = X-Cedulas[5]*aux; // atualiza X subtraindo-o pela multiplicação de aux por 50
		aux = X/Cedulas[4]; // atualiza aux com o resultado da divisão de X por 20
		printf("%d nota(s) de R$ 20,00\n",aux);
		X = X-Cedulas[4]*aux; // atualiza X subtraindo-o pela multiplicação de aux por 20
		aux = X/Cedulas[3];  // atualiza aux com o resultado da divisão de X por 10
		printf("%d nota(s) de R$ 10,00\n",aux);
		X = X-Cedulas[3]*aux; // atualiza X subtraindo-o pela multiplicação de aux por 10
		aux = X/Cedulas[2];  // atualiza aux com o resultado da divisão de X por 5
		printf("%d nota(s) de R$ 5,00\n",aux);
		X = X-Cedulas[2]*aux; // atualiza X subtraindo-o pela multiplicação de aux por 5
		aux = X/Cedulas[1];  // atualiza aux com o resultado da divisão de X por 2
		printf("%d nota(s) de R$ 2,00\n",aux);
		X = X-Cedulas[1]*aux; // atualiza X subtraindo-o pela multiplicação de aux por 2
		aux = X/Cedulas[0];  // atualiza aux com o resultado da divisão de X por 1
		printf("%d nota(s) de R$ 1,00\n",aux);

		break;//para quebrar o loop
	
	}while(X > 0 && X < 1000000); // condição do laço 
	
	return 0;
}
