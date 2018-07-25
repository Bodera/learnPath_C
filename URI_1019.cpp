#include <stdio.h>

void calcula_tempo(int &horas, int &minutos, int &segundos, int X){
	int hora_em_segundos = 3600;
	horas = X/hora_em_segundos;
	minutos = (X-(hora_em_segundos*horas))/60;
	segundos = (X-(hora_em_segundos*horas)-(minutos*60));
}

main(){
	int X;
	int horas,minutos,segundos = 0;
	
	printf("");
	scanf("%d",&X);
	
	calcula_tempo(horas,minutos,segundos, X);
	
	printf("%d:%d:%d",horas,minutos,segundos);

 getchar();//Uma função que não depende de bibliotecas para congelar a tela
 }
