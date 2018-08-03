#include <stdio.h>

void calcula_tempo(int &anos, int &meses, int &dias, int X){
	int dias_no_ano = 365; //1 ano contém 365 dias
	anos = X/dias_no_ano; //Dividindo o valor recebido por 365 obtemos o número de anos
	meses = (X-(dias_no_ano*anos))/30; //Multiplica-se 365 pelo número de anos para subtrair pelo valor recebido e enfim dividir por 30 dias
	dias = (X-(dias_no_ano*anos)-(meses*30)); //Multiplica-se 365 pelo número de anos e 60 vezes os meses para subtrair pelo valor recebido
}

int main(){
	int X;
	int anos,meses,dias;
	
	printf("");
	scanf("%d",&X);
	
	calcula_tempo(anos,meses,dias, X); //chamada da função com identificação dos parâmetros 
	
	printf("%d ano(s)\n",anos);
	printf("%d mes(es)\n",meses);
	printf("%d dia(s)\n",dias);

	return 0;
 	//getchar(); //Uma função que não depende de bibliotecas para congelar a tela
 }
