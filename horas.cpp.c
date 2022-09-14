#include <stdio.h> //biblioteca para os comandos (fun��es) printf e scanf

int main(){ //inicio calcula Hora

    int horas, minutos, segundos; //inteiro horas, minutos;
    printf("Digite a quantidade de horas: "); //escreva("Digite a quantidade de horas");
    scanf("%i", &horas); //leia(horas);
    minutos = horas * 60; //minutos = horas * 60;
    segundos = minutos * 60; //segundos = minutos * 60;
    printf("\nMinutos: %i", minutos); //escreva(minutos);
    printf("\nSegundos: %i", segundos); //escreva(segundos);
    
    return 0;
}//fim
