#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hora, vdh, salario;
char nome[20], sexo[20], matricula;

int main(){
    printf("escreva seu nome: ");
    scanf("%s" , &nome);                            
    printf("escreva seu sexo (m) ou (f): ");
    scanf("%s", &sexo);                            
    printf("escreva sua matricula: ");
    scanf("%d", &matricula);                       
    printf("escreva o seu total de horas de trabalho: ");
    scanf("%f", &hora);                            
    printf("escreva o quanto recebe por hora: ");
    scanf("%f", &vdh);                      
	salario = hora * vdh;                    
	printf("\nNome: %s", nome);                  
    printf("\nSexo: %s", sexo);
    printf("\nMatricula: %i", matricula);
    printf("\nSalario: R$ %.2f", salario);
    
    return 0;                               
} // fim
