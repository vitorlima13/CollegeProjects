#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int linha, coluna, tamL, tamC, maior, menor, posicaoM[2], posicaoP[2];
	
	cout << "Insira o tamanho da matriz.\n";
	cout << "Linhas: ";
	cin >> tamL;
	cout << "Colunas: ";
	cin >> tamC;
	
	int mat[tamL][tamC];
	
	for (linha=0; linha<tamL; linha++){
		for (coluna=0; coluna<tamC; coluna++){
			cout << "Posição [" << linha << "," << coluna << "]  ";
			cin >> mat[linha][coluna];
		}
	}
	
	cout << "\n";
	cout << "\n";
	
	maior=mat[0][0];
	menor=mat[0][0];
	
	cout <<"====================MATRIZ================\n";
	
	for (linha=0; linha<tamL; linha++){
		for (coluna=0; coluna<tamC; coluna++){
			if (mat[linha][coluna]>maior){
				maior=mat[linha][coluna];
				posicaoM[0]=linha;
				posicaoM[1]=coluna;
			}
			if (mat[linha][coluna]<menor){
				menor=mat[linha][coluna];
				posicaoP[0]=linha;
				posicaoP[1]=coluna;
			}
			cout << "       " << mat[linha][coluna] << "  ";	
		}
	cout << "\n";
	}
	cout << "\n";
	cout << "\n";
	
	cout << "O maior numero inserido foi: " << maior << " e sua posição foi; [" << posicaoM[0] << "," << posicaoM[1] << "]\n";
	cout << "O menor numero inserido foi: " << menor << " e sua posição foi; [" << posicaoP[0] << "," << posicaoP[1] << "]\n"; 
	return 0;
}
