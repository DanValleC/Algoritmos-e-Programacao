#include <stdio.h> //biblioteca para os comandos (funções) printf e scanf

int main(){ //inicio calcula Hora

    int horas, minutos; //inteiro horas, minutos;
    printf("Digite a quantidade de horas: "); //escreva("Digite a quantidade de horas");
    scanf("%i", &horas); //leia(horas);
    minutos = horas * 60; //minutos = horas * 60;
    printf("minutos: %i", minutos); //escreva(minutos);
    
    return 0;
}//fim
