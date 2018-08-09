#include <stdio.h>
#include <stdlib.h> // biblioteca para a função abs
int main(){
	/*Faça um programa que leia três valores e apresente 
	   o maior dos três valores lidos seguido da mensagem “eh o maior”.*/
	int A,B,C;
	int MaiorABC, MaiorAB;
	
	printf("");
	scanf("%d %d %d",&A,&B,&C);
	
	MaiorAB = (A+B+abs(A-B))/2;
	MaiorABC = (MaiorAB+C+abs(MaiorAB-C))/2;
	printf("%d eh o maior\n",MaiorABC);
	
	return 0;
}
