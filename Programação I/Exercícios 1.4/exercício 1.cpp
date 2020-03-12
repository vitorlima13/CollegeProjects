#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int linha, coluna,cont;
	int matriz[3][3];
	
	cout << "==========MATRIZ===========\n";
	for (linha=0; linha<3; linha++){
		for (coluna=0; coluna<3; coluna++){
			cout << "Posição [" << linha << "," << coluna << "]: ";
			cin >> matriz[linha][coluna];
		}
	}	
	
	cout << "\n";
	cout << "\n";
	
	for (linha=2; linha>=0; linha--){
		for (coluna=2; coluna>=0; coluna--){
			cout << "  "<< matriz[linha][coluna] << "  ";
		}
	cout<<"\n";
	}	
	return 0;	
}
