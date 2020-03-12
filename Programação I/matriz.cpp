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
	int mat[3][3];
	
	for (linha=0; linha<3; linha++){
		for (coluna=0; coluna<3; coluna++){
			cout << "Posição [" << linha << "," << coluna << "]  ";
			cin >> mat[linha][coluna];
		}
	}
	cout << "\n";
	cout << "\n";
	for (linha=0; linha<3; linha++){
		for (coluna=0; coluna<3; coluna++){
			cout << mat[linha][coluna];	
		}
	cout << "\n";
	}
	return 0;
}
