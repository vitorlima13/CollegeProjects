#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int combustivel;
	float litros, valorbruto, valorfinal;
	
	cout << "=================TABELA DE PREÇOS==================\n";
	cout << "[1] GASOLINA COMUM: R$4,30\n";
	cout << "[2] GASOLINA ADITIVADA: R$4,70\n";
	cout << "[3] ETANOL: R$3,79\n";
	cout << "PROMOÇÃO!!!\n";
	cout << "Na compra de 10 a 20 litros há um desconto de 2% nas compras de gasolina comum, 3% nas compras de gasolina aditivada, e de 4% nas compras de etanol.\n";
	cout << "Na compra acima de 20 litros há um desconto de 5% para gasolina comum, 6% para gasolina aditivada, 7% para etanol\n";
	cout << "===================================================";
	cout << "\n";
	cout << "\n";
	cout << "Qual o tipo de combustível? [1,2,3] ";
	cin >> combustivel;
	cout << "E a quantidade de litros? ";
	cin >> litros;
	
	switch(combustivel){
		case 1:
			if ((litros>=10) && (litros<=20)){
				valorbruto = (4.30*litros);
				valorfinal = valorbruto-((valorbruto*2)/100);
				cout << "O valor final da sua compra é: R$" << valorfinal;
				break;	
			}
			if (litros>20){
				valorbruto = (4.30*litros);
				valorfinal = valorbruto-((valorbruto*5)/100);
				cout << "O valor final da sua compra é: R$" << valorfinal;
				break;	
			}
		case 2:
			if ((litros>=10) && (litros<=20)){
				valorbruto = (4.70*litros);
				valorfinal = valorbruto-((valorbruto*3)/100);
				cout << "O valor final da sua compra é: R$" << valorfinal;
				break;	
			}
			if (litros>20){
				valorbruto = (4.70*litros);
				valorfinal = valorbruto-((valorbruto*6)/100);
				cout << "O valor final da sua compra é: R$" << valorfinal;
				break;	
			}
		case 3:
			if ((litros>=10) && (litros<=20)){
				valorbruto = (3.79*litros);
				valorfinal = valorbruto-((valorbruto*4)/100);
				cout << "O valor final da sua compra é: R$" << valorfinal;
				break;	
			}
			if (litros>20){
				valorbruto = (4.30*litros);
				valorfinal = valorbruto-((valorbruto*7)/100);
				cout << "O valor final da sua compra é: R$" << valorfinal;
				break;	
			}
	}
	return 0;
}
