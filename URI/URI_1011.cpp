#include <stdio.h>
#include <math.h>

int main(){
/*
Faça um programa que calcule e mostre o volume de uma esfera 
 sendo fornecido o valor de seu raio (R).
A fórmula para calcular o volume é: (4/3) * pi * R3.
*/
	
	float raio;
	double pi = 3.14159;
	double volume;

	// Leia o raio
	printf("");
	scanf("%f",&raio);
	
	// Calcule o  volume (Dica usei decimal na divisão 4/3, para não interpretar o resultado como inteiro)	
	volume = (4.0/3.0) * pi * pow(raio,3);
	printf("VOLUME = %.3lf\n",volume);
	
	return 0;
}
