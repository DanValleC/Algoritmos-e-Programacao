#include <stdio.h> //biblioteca para os comandos (funções) printf e scanf
#include <math.h> //utilizado para comandos matemáticos 
int main(){ //inicio calcula area circulo

    float area, raio; //inteiro area, raio;
    printf("Digite o valor do raio: "); //escreva("Digite o valor do raio");
    scanf("%f", &raio); //leia(raio);
    area = 3.14 * pow(raio,2); // area = 3.14 * (raio * raio);
    printf("area: %f \n", area); //escreva(area do circulo);
    
}//fim
