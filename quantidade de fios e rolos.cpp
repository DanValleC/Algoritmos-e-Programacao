#include <math.h>
#include <stdio.h>
#include <iostream> 
using namespace std;

int main() //inicio
{
    float metros; int rolos, quantidader;
    
    cout << "escreva a quantidade de metros desejados: "; //leia metros
    cin >> metros; //leia metros
    rolos = (50); //rolos 
    if (50 < metros){
    	quantidader = metros/50;
	}
	cout << "\nquantidade de rolos: " << quantidader; // mostra rolos
    cout << "\nquantidade de metros de fios: " << metros; //mostra fios avulsos
    
	return 0;
} //fim
