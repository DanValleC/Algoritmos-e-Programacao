#include <stdio.h>
#include <iostream>
using namespace std;

int main() //inicio
{
    float primeiro, segundo, terceiro, media;
    
    cout << "escreva o primeiro numero a ser calculado: "; //escreva numero um
    cin >> primeiro;
    cout << "\nescreva o segundo numero: "; //escreva numero dois
    cin >> segundo;
    cout << "\nescreva o terceiro numero: "; //escreva numero tres
    cin >> terceiro;
    media = (primeiro+segundo+terceiro)/3; //resultado media 
    printf("%f\n", media); //mostre media
    
	return 0;
} //fim
