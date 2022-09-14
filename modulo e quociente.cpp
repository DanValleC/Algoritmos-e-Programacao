#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() //inicio
{
    int primeiro, segundo, quociente, modulo;
    
    cout << "escreva o primeiro numero a ser calculado: "; //escreva numero um
    cin >> primeiro;
    cout << "\nescreva o segundo numero: "; //escreva numero dois
    cin >> segundo;
    quociente = (primeiro/segundo); //resultado media 
    modulo = abs(quociente); // resultado modulo
	printf("\nQuociente: %i", quociente); //mostre media
	printf("\nModulo: %i", modulo);
    
	return 0;
} //fim
