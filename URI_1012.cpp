#include <stdio.h>
int main(){
	/* atividade: Escreva um programa que leia três valores 
		com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre: 
			a) a área do triângulo retângulo que tem A por base e C por altura. 
			b) a área do círculo de raio C. (pi = 3.14159) 
			c) a área do trapézio que tem A e B por bases e C por altura. 
			d) a área do quadrado que tem lado B. 
			e) a área do retângulo que tem lados A e B. 
	*/
	double A,B,C;
	double pi = 3.14159;
	double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
	
	printf("");
	scanf("%lf %lf %lf",&A,&B,&C);
	
	TRIANGULO = (A*C)/2;
	CIRCULO = pi*(C*C);
	TRAPEZIO = (A+B)/2*C;
	QUADRADO = B*B;
	RETANGULO = A*B;
	
	printf("TRIANGULO: %.3lf\n",TRIANGULO);
	printf("CIRCULO: %.3lf\n",CIRCULO);
	printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
	printf("QUADRADO: %.3lf\n",QUADRADO);
	printf("RETANGULO: %.3lf\n",RETANGULO);
	
	return 0;
}
