#include <stdio.h>
int main(){
	/*Calcule o consumo médio de um automóvel sendo fornecidos 
	   a distância total percorrida (em Km) e o total de combustível gasto (em litros).*/
	int X;
	double Y,consumo;
	
	printf("");
	scanf("%d",&X);
	printf("");
	scanf("%lf",&Y);
	
	consumo = X/Y;
	printf("%.3lf km/l\n",consumo);
}
