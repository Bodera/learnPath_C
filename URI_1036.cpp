#include <stdio.h>
#include <math.h>
main(){
    double a,b,c;
    double discriminante; //Delta

    printf("");
    scanf("%lf %lf %lf",&a,&b,&c);

    discriminante = (b*b-(4*a*c));

    if((a==0) || (discriminante<0))
        printf("Impossivel calcular\n");

    else{
        double x1,x2,deltaRaiz; //Bhaskara

        deltaRaiz = sqrt(discriminante);
        x1 = (-b + deltaRaiz)/(2*a);
        x2 = (-b - deltaRaiz)/(2*a);

        printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
    }
   return 0;
}
