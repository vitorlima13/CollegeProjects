#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int codProduto, quantidade;
	float valorAtual, valorFinal;
	char escolha;
	
	cout<< "===================MENU===================\n";
	cout<< "Coxinha.       |Cod: 100. |Preço R$ 3.35\n";
	cout<< "Queijunto.     |Cod: 101. |Preço R$ 2.10\n";
	cout<< "Pão com ovo.   |Cod: 102. |Preço R$ 1.50\n";
	cout<< "Hambúrguer.    |Cod: 103. |Preço R$ 4.78\n";
	cout<< "Cheeseburguer. |Cod: 104. |Preço R$ 5.31\n";
	cout<< "Refrigerante.  |Cod: 105. |Preço R$ 3.75\n";
	cout<< "\n";

	valorFinal = 0;
	do{
	cout<< "INSIRA O CÓDIGO DO PRODUTO ESCOLHIDO: ";
	cin>> codProduto;
	cout<< "INSIRA A QUANTIDADE: ";
	cin>> quantidade;
	cout << "\n";
		switch(codProduto){
			case 100:
				valorAtual = 3.35*quantidade;
				break;
			case 101:
				valorAtual = 2.10*quantidade;
				break;
			case 102:
				valorAtual = 1.50*quantidade;
				break;
			case 103:
				valorAtual = 4.78*quantidade;
				break;
			case 104:
				valorAtual = 5.31*quantidade;
				break;
			case 105:
				valorAtual = 3.75*quantidade;
				break;
			default:
				cout<< "OPÇÃO INVÁLIDA\n";
				break;
		}
	valorFinal = valorFinal+valorAtual;
	cout << "Saldo atual da conta: R$" << valorFinal << "\n";
	cout << "Deseja continuar comprando? [S/N] ";
	cin >> escolha;
	cout << "\n";
	}while(escolha=='S');
	cout << "Saldo final da sua compra: R$" << valorFinal;
	return 0;
}
