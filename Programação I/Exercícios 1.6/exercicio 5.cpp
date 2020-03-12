#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, vetor[16], vetor2[16], j, l;
	
	cout << "Insira 16 números...\n";
	for(i=0; i<16; i++){
		cin >> vetor[i];
	}
	j=8;
	l=0;
	for(i=0; i<16; i++){
		if(i<=7){
			vetor2[i]=vetor[j];
			j++;
		}
		if(i>=8){
			vetor2[i]=vetor[l];
			l++;
		}
	}
	
	cout << "Novo vetor...\n";
	for(i=0; i<16; i++){
		cout << vetor2[i] << " | ";
	}
	
	return 0;	
}
