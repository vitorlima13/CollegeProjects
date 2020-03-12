#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numeros[10], numerofinal, vetor2[9], j=0;
	int v=0;
	
	cout << "Insira 10 números.\n";
	
	for (int i=0; i<10; i++){
	cin >> numeros[i]; 
	}
	
	cout << "Insira um último número: ";
	cin >> numerofinal;
	
	for (int i=0; i<10; i++){
		if (numerofinal==numeros[i]){
			i=9;
			v=1;
		}
	}
	if (v==1){
		cout << "O último número está dentro dos dez.\n";
		for (int i=0; i<10; i++){
			if (numerofinal!=numeros[i]){
				vetor2[j]=numeros[i];
				j++;
			}
		}
	}
	cout << "Novo vetor...\n";
	for (int i=0; i<9; i++){
		cout << vetor2[i] << "  ";
	}
	return 0;
}
