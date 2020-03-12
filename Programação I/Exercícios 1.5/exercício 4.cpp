#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float vetorA[10], vetorB[10];
	int i, cont=1, j=0;
	
	cout << "INSIRA 10 NÚMEROS PARA O VETOR A...\n";
	for(i=0; i<10; i++){
		cin >> vetorA[i];
	}
	
	cout << "INSIRA 10 NÚMEROS PARA O VETOR B...\n";
	for(i=0; i<10; i++){
		cin >> vetorB[i];
	}
	
	system("cls");
	
	for(i=0; i<10; i++){
		for(int m=0; m<10; m++){
			if(vetorA[i]==vetorB[m]){
				cont++;
			}
		}
	}
	float vetorC[cont];
	
	for(i=0; i<cont; i++){
		for(int m=0; m<10; m++){
			if(vetorA[i]==vetorB[m]){
				vetorC[j]=vetorA[i];
				j++;
			}
		}	
	}
	
	cout << "Vetor A: ";
	for(i=0; i<10; i++){
		cout << vetorA[i] << "  ";
	}
	
	cout << "\n";
	
	cout << "Vetor B: ";
	for(i=0; i<10; i++){
		cout << vetorB[i] << "  ";
	}
	
	cout << "\n";
	
	cout << "Vetor C: ";
	for(i=0; i<cont; i++){
		cout << vetorC[i] << "  ";
	}
	return 0;
}
