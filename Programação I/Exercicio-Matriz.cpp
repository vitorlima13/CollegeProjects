#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int lin, col;
	int mat[5][6];
	
	cout << "======INSIRA OS VALORES DA MATRIZ=====\n";
	
	for (lin=0; lin<5; lin++){
		for (col=0; col<6; col++){
			cout << "Posição [" << lin << "," << col << "]  ";
			cin >> mat[lin][col];
		}
	}
	system("cls");
	
	cout << "\n";
	cout << "\n";
	cout << "                              =====IMPRESSÃO DA MATRIZ=====";
	cout << "\n";
	cout << "\n";
	
	lin=0;
	col=0;
	
	cout << "                                  C  O  L  U  N  A \n";
	for (lin=0; lin<5; lin++){
			if(lin==0){
	    		cout <<	"                               L ";
			}
			if(lin==1){
	    		cout << "                               I ";
			}
			if(lin==2){
	    		cout << "                               N ";
			}
			if(lin==3){
	    		cout <<	"                               H ";
			}
			if(lin==4){
	    		cout << "                               A ";
			}
		for (col=0; col<6; col++){
		cout << " " << mat[lin][col] << " ";
		}
	cout << "\n";
	}
	return 0;
}

