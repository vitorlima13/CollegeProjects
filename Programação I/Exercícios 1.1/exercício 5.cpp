#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int codProduto, quantidade;
	float valorFinal;
	cout<< "Coxinha. Cod: 100. Preço R$ 3.35\n";
	cout<< "Queijunto. Cod: 101. Preço R$ 2.10\n";
	cout<< "Pão com ovo. Cod: 102. Preço R$ 1.50\n";
	cout<< "Hambúrguer. Cod: 103. Preço R$ 4.78\n";
	cout<< "Cheeseburguer. Cod: 104. Preço R$ 5.31\n";
	cout<< "Refrigerante. Cod: 105. Preço R$ 3.75\n";
	cout<< "\n";
	cout<< "INSIRA O CÓDIGO DO PRODUTO: ";
	cin>> codProduto;
	cout<< "INSIRA A QUANTIDADE: ";
	cin>> quantidade;
	
	switch(codProduto){
		case 100:
			valorFinal = 3.35*quantidade;
			cout<< "O VALOR FINAL DA COMPRA É R$ " << valorFinal;
			break;
		case 101:
			valorFinal = 2.10*quantidade;
			cout<< "O VALOR FINAL DA COMPRA É R$ " << valorFinal;
			break;
		case 102:
			valorFinal = 1.50*quantidade;
			cout<< "O VALOR FINAL DA COMPRA É R$ " << valorFinal;
			break;
		case 103:
			valorFinal = 4.78*quantidade;
			cout<< "O VALOR FINAL DA COMPRA É R$ " << valorFinal;
			break;
		case 104:
			valorFinal = 5.31*quantidade;
			cout<< "O VALOR FINAL DA COMPRA É R$ " << valorFinal;
			break;
		case 105:
			valorFinal = 3.75*quantidade;
			cout<< "O VALOR FINAL DA COMPRA É R$ " << valorFinal;
			break;
		default:
			cout<< "OPÇÃO INVÁLIDA";
			break;
	}
	return 0;
}
