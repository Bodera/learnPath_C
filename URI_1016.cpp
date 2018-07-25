#include <stdio.h>
#include <conio.h>
main (){
	/*Dois carros (X e Y) partem em uma mesma direção. O carro X sai com velocidade 
	constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
	Em uma hora (60 minutos) o carro Y consegue se distanciar 30 quilômetros do carro X,
 	ou seja, consegue se afastar um quilômetro a cada 2 minutos.
	Leia a distância (em Km) e calcule quanto tempo leva (em minutos) 
	para o carro Y tomar essa distância do outro carro.

	--Entrada--
	O arquivo de entrada contém um número inteiro.
	---Saída---
	Imprima o tempo necessário seguido da mensagem "minutos".*/
     
 	int D,X;
     
     printf(""); 
     scanf ("%d",&D);//Distância em Km
 	
 	X = (60*D)/30; //X é igual a 60 minutos vezes Km  dividido por 30 Km --> a diferença em Km de carro X e Y
 
 printf ("%d minutos\n",X);
 
 getch(); // função exclusiva da conio.h (congelar a tela)
 
}
