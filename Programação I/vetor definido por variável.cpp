#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int x=0;
	cout << "Qual o tamanho do vetor? ";
	cin >> x;
	
	string nome[x];
	
	for (int i=0; i<x; i++){
		cout << "Nome: ";
		cin >> nome[i];
	}
	
	return 0;
}
