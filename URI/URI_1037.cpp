#include <stdio.h>
#include <locale.h>
main(){
    setlocale(LC_ALL, "Portuguese"); //Permitindo acentua
    //Como o switch só funciona com valores inteiros utilizarei outra abordagem sem if-else

double a; int i;
    struct {
        double value;
        const char *description;
    } list[] = {
        { -0.01, "Fora de intervalo\n" },
        { 0, "Intervalo [0,25]\n" },
        { 25.00, "Intervalo [0,25]\n" },
        { 25.01, "Intervalo (25,50]\n" },
        { 50.00, "Intervalo (25,50]\n" },
        { 50.01, "Intervalo (50,75]\n" },
        { 75.00, "Intervalo (50,75]\n" },
        { 75.01, "Intervalo (75,100]\n" },
        { 100.00, "Intervalo (75,100]\n" },
        { 100.01, "Fora de intervalo\n" },
    };

    printf("");
    scanf("%lf",&a);

    for (i=0; i<9 && a>=list[i].value; i++) ;
    printf ("%s\n", list[i].description);
    getchar();
}
