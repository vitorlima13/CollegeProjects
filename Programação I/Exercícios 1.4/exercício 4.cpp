#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int linha, coluna;
	int matriz[4][4], cont1=1, cont2=1, i=0, j=0;
	
	for (linha=0; linha<4; linha++){
		for (coluna=0; coluna<4; coluna++){
			cout << "Posição [" << linha << "," << coluna << "]  ";
			cin >> matriz[linha][coluna];
			if (matriz[linha][coluna]%2==0){
				cont1++;
			}else{
				cont2++;
			}
		}
	}
	
	int vetorPar[cont1], vetorImpar[cont2];
	
	for (linha=0; linha<4; linha++){
		for (coluna=0; coluna<4; coluna++){
			if (matriz[linha][coluna]%2==0){
				vetorPar[i]=matriz[linha][coluna];
				i++;
			}else{
				vetorImpar[i]=matriz[linha][coluna];
				j++;
			}
		}
	}
	
	cout << "\n";
	cout << "\n";
	for (linha=0; linha<4; linha++){
		for (coluna=0; coluna<4; coluna++){
			cout << matriz[linha][coluna];	
		}
	cout << "\n";
	}
	
	cout << "Números pares..."; 
	for (int a=0; a<cont1; a++){
		cout << vetorPar[a] << " ";
	}
	cout << "Números impares..." ;
	for (int b=0; b<cont2; b++){
		cout << vetorImpar[b] << " ";
	}
	return 0;
}
