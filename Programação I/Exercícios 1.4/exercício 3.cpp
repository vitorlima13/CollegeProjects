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
	float matriz[5][5], soma3linha=0, soma4coluna=0, multiplicacao=0, somadiag=0, somaSegunda=0, multiplicacaoSegunda=0, divisao, vetor[5];
	
	for (linha=0; linha<5; linha++){
		for (coluna=0; coluna<5; coluna++){
			cout << "Posição [" << linha << "," << coluna << "]  ";
			cin >> matriz[linha][coluna];
		}
	}
	cout << "\n";
	cout << "\n";
	for (linha=0; linha<5; linha++){
		for (coluna=0; coluna<5; coluna++){
			cout << "   " << matriz[linha][coluna] << "   ";	
		}
	cout << "\n";
	}
	
	cout << "\n";
	cout << "\n";
	
	for (coluna=0; coluna<5; coluna++){
		soma3linha = soma3linha+matriz[2][coluna];
	}
	for (linha=0; linha<5; linha++){
		soma4coluna = soma4coluna+matriz[linha][3];
	}
	for (linha=0; linha<5; linha++){
		for (coluna=0; coluna<5; coluna++){
			if(coluna==linha){
			vetor[linha]=(matriz[1][coluna]*matriz[linha][4]);
			}
		}
	}
	for (linha=0; linha<5; linha++){
		for (coluna=0; coluna<5; coluna++){
			if (linha==coluna){
			somadiag = somadiag+matriz[linha][coluna];
			}		
		}
	}
	divisao=somadiag/5;
	
	for (linha=0; linha<5; linha++){
		for (coluna=4; coluna>=0; coluna--){
			if (linha+coluna==4){
			somaSegunda=somaSegunda+matriz[linha][coluna];
			}
		}
	}
	multiplicacaoSegunda=somaSegunda*5;
	
	cout << "==============RESUMO============\n";
	cout << "Soma dos elementos da terceira linha: " << soma3linha << "\n";
	cout << "Soma dos elementos da quarta coluna: " << soma4coluna << "\n";
	cout << "Multiplicação dos elementos da segunda linha pela quinta coluna: [1,0]x[0,4]= " << vetor[0] << "[1,1]x[1,4]=" << vetor[1] << "[1,2]x[2,4]=" << vetor[2] << "[1,3]x[3,4]=" << vetor[3] << "[1,4]x[4,4]=" << vetor[4] << "\n";
	cout << "Divisão da soma os elementos da diagonal principal por 5: " << divisao << "\n";
	cout << "Multiplicação da soma dos elementos da diagonal secundária por 5: " << multiplicacaoSegunda << "\n";
	return 0;
}
