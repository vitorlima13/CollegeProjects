#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	string nomes[10], nomefinal;
	int v;
	
	cout << "Insira 10 nomes.\n";
	
	for (int i=0; i<10; i++){
	cout << "Nome " << i << ": ";
	cin >> nomes[i]; 
	}
	
	cout << "Insira um �ltimo nome: ";
	cin >> nomefinal;
	
	for (int i=0; i<10; i++){
		if (nomefinal==nomes[i]){
			cout << nomefinal << " Est� no vetor.";
			i=9;
			v=1;
		}
	}
	if (v!=1){
		cout << nomefinal << " N�o est� no vetor. ";
	}
	return 0;
}
