#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int matriz[5][5], lin, col,  maior=0, menor, pl, pc;
	
	cout << "==========MATIZ==========\n";
	for(lin=0; lin<5; lin++){
		for(col=0; col<5; col++){
			cout << "Posição [" << lin << "," << col << "]: ";
			cin >> matriz[lin][col];			
			if (matriz[lin][col]>maior){
				maior = matriz[lin][col];
				pl = lin;
			}
		}
	}
	menor=maior;
	
	for(col=0; col<5; col++){
		if(matriz[pl][col]<menor){
			menor=matriz[pl][col];
			pc = col;
		}
	}
	for(lin=0; lin<5; lin++){
		for(col=0; col<5; col++){
			cout << matriz[lin][col] << " ";
		}
		cout << "\n";
	}
	
	cout << "O elemento minimax é " << menor << "\n";
	cout << "E sua posição é: [" << pl << "," << pc << "]\n";
	return 0;		
}
