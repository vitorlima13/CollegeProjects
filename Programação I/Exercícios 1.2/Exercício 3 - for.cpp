#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int idade[10], i, contIdade;
	string nome[10];
	
	for (i=0; i<=9; i++){
		cout << "Insira um nome: ";
		cin >> nome[i];	
		cout << "Insira sua idade: ";
		cin >> idade[i];
	}
	contIdade = 1;
	for (i=0; i<=9; i++){
	
		if (idade[i]>=18){
			contIdade = contIdade+1;
		}
	}
	
	cout << "Um total de " << contIdade << " pessoas tem 18 anos ou mais\n";
	cout << "E são elas...\n";
	
	for (i=0; i<=9; i++){
		if (idade[i]>=18){
			cout << nome[i] << "\n";
		}
	}
	return 0;
}
