#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	string mat[3][3], jogada;
	int lin, col, r=0, l, c;

	for (lin=0; lin<3; lin++){
			for (col=0; col<3; col++){
				mat[lin][col]='-';
			}
		}

	do{
		cout << "====JOGO DA VELHA====\n";
		cout << "   1    2    3\n";
		for (lin=0; lin<3; lin++){
			if(lin==0){
				cout << "1";
			}else if(lin==1){
				cout << "2";
			}else if(lin==2){
				cout << "3";
			}
			for (col=0; col<3; col++){
				cout << "[ " << mat[lin][col] << " ]";
			}
			cout << "\n";
		}		
		
				
		if((mat[0][0]=="O")&&(mat[1][1]=="O")&&(mat[2][2]=="O")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][0]=="X")&&(mat[1][1]=="X")&&(mat[2][2]=="X")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][2]=="O")&&(mat[1][1]=="O")&&(mat[2][0]=="O")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][2]=="X")&&(mat[1][1]=="X")&&(mat[2][0]=="X")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][0]=="O")&&(mat[0][1]=="O")&&(mat[0][2]=="O")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][0]=="X")&&(mat[0][1]=="X")&&(mat[0][2]=="X")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[1][0]=="O")&&(mat[1][1]=="O")&&(mat[1][2]=="O")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[1][0]=="X")&&(mat[1][1]=="X")&&(mat[1][2]=="X")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[2][0]=="O")&&(mat[2][1]=="O")&&(mat[2][2]=="O")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[2][0]=="X")&&(mat[2][1]=="X")&&(mat[2][2]=="X")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][0]=="O")&&(mat[1][0]=="O")&&(mat[2][0]=="O")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][0]=="X")&&(mat[1][0]=="X")&&(mat[2][0]=="X")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][1]=="O")&&(mat[1][1]=="O")&&(mat[2][1]=="O")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][1]=="X")&&(mat[1][1]=="X")&&(mat[2][1]=="X")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][2]=="O")&&(mat[1][2]=="O")&&(mat[2][2]=="O")){
			cout << "Fim de jogo.";
			r=9;
		}else if((mat[0][2]=="X")&&(mat[1][2]=="X")&&(mat[2][2]=="X")){
			cout << "Fim de jogo.";
			r=9;
		}else{
			cout << "Insira a posição da jogada.\n";
			cout << "Linha: ";
			cin >> l;
			l=l-1;
			cout << "Coluna: ";
			cin >> c;
			c=c-1;
			cout << "O/X: ";
			cin >> jogada;
		
			if ((jogada=="O")||(jogada=="X")){
				mat[l][c]=jogada;
				r++;
			}else{
				cout << "Jogada inválida.";
			}
			system("cls");
		}	
	}while(r!=9);
	return 0;	
}
