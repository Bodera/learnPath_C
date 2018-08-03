#include <stdio.h>

int main(){

	double A,B;
	double pesoA = 3.5;
	double pesoB = 7.5;
	double pesoTotal = pesoA + pesoB;
	double MEDIA;
	
	printf("");
	scanf("%lf",&A);
	printf("");
	scanf("%lf",&B);
	
	if ((A <= 10 && A >= 0) &&
	 	(B <= 10 && B >= 0)) {
		
		MEDIA = ((A*pesoA + B*pesoB)/pesoTotal);
		printf("MEDIA = %.5lf\n",MEDIA);
	}
	else {
		printf("Informe apenas valores de 0 a 10\n");
	}
	return 0;
}
