#include <iostream>
#include <stdio.h>

    int main(){
	
	float n1, n2, media;
	printf("digite a primeira nota: "); //escreva primeira nota
	scanf("%f", &n1); //leia a primeira nota
	printf("\ndigite a segunda nota: "); //escreva segunda nota
	scanf("%f", &n2); //leia a segunda nota
	media = (n1*3.5 + n2*7.5)/11; //calcular a media
	printf("\nsua media: %f", media); // mostrar media
	
	return 0;
} // fim
