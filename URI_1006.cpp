#include <stdio.h>

int main(){

	double A,B,C;
	int pesoA = 2;
	int pesoB = 3;
	int pesoC = 5;
	double pesoTotal = pesoA + pesoB + pesoC;
	double MEDIA;
	
	printf("");
	scanf("%lf",&A);
	printf("");
	scanf("%lf",&B);
	printf("");
	scanf("%lf",&C);
	
	if ((A <= 10 && A >= 0) &&
	 	(B <= 10 && B >= 0) &&
		 (C <=10 && C >= 0)) {
		
		MEDIA = ((A*pesoA + B*pesoB +C*pesoC)/pesoTotal);
		printf("MEDIA = %.1lf\n",MEDIA);
	}
	else {
		printf("Informe apenas valores de 0 a 10\n");
	}
	return 0;
}
