#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int totalidade, media, contPeso,i, quant;	
	
	cout << "Quantas pessoas deseja cadastrar? ";
	cin >> quant;
	
	int idade[quant], peso[quant];
	string nome[quant];
	
	system("cls");
	
	contPeso=0;
	for (i=0; i<quant; i++){
		cout << "Insira um nome: ";
		cin >> nome[i];	
		cout << "Insira sua idade: ";
		cin >> idade[i];
		cout << "Insira seu peso: ";
		cin >> peso[i];
		if (peso[i]>65){
			contPeso++;
		}
	}
	
	totalidade = idade[0];
	
	for (i=1; i<quant; i++){
		totalidade = totalidade+idade[i];
	}
	media = totalidade/quant;
	cout << "Temos um total de " << contPeso << " com mais de 65 quilos.\n";
	cout << "E a média das idades das pessoas é de: " << media;
	
	return 0;
}
