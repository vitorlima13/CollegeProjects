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
	float mat[10][3], somaN[10], media[10], mediaF, somaF;
	
	for (linha=0; linha<10; linha++){
		for (coluna=0; coluna<3; coluna++){
			if(coluna==0){
				cout << "N�mero de matr�cula do " << linha << " aluno: ";
				cin >> mat[linha][coluna];
			}else if(coluna==1){
				cout << "Nota na primeira Avalia��o: ";
				cin >> mat[linha][coluna];	
			}else if(coluna==2){
				cout << "Nota na segunda Avalia��o: ";
				cin >> mat[linha][coluna];	
			}
		}
		system("cls");
	}
	
	for (linha=0; linha<10; linha++){
		for (coluna=0; coluna<3; coluna++){
			if(coluna==1){
				somaN[linha] = mat[linha][coluna];
			}else if(coluna==2){
				somaN[linha] = somaN[linha]+mat[linha][coluna];
			}
		}
	}
	
	for (linha=0; linha<10; linha++){
		media[linha]=somaN[linha]/2;
		somaF = somaF+media[linha];
	}
	mediaF=somaF/10;
	
	cout << "\n";
	cout << "\n";
	for (linha=0; linha<10; linha++){
		for (coluna=0; coluna<3; coluna++){
			if(coluna==0){
				cout << "N� de matr�cula: ";
				cout << mat[linha][coluna];
			}else if(coluna==1){
				cout << "| Nota 1� Av.: ";
				cout << mat[linha][coluna];	
			}else if((coluna==2)&&(media[linha]>=8)){
				cout << "| Nota 2� Av.: ";
				cout << mat[linha][coluna];	
				cout << " | M�dia: " << media[linha];
				cout << " | Aprovado!";
			}else if((coluna==2)&&(media[linha]<8)){
				cout << "| Nota 2� Av.: ";
				cout << mat[linha][coluna];	
				cout << " | M�dia: " << media[linha];
				cout << " | Reprovado!";
			}
		}
	cout << "\n";
	}
	cout << "\n";
	cout << "A m�dia das medias finais �: " << mediaF;
	return 0;
}
