#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int codProduto, quantidade;
	float valorFinal;
	cout<< "Coxinha. Cod: 100. Pre�o R$ 3.35\n";
	cout<< "Queijunto. Cod: 101. Pre�o R$ 2.10\n";
	cout<< "P�o com ovo. Cod: 102. Pre�o R$ 1.50\n";
	cout<< "Hamb�rguer. Cod: 103. Pre�o R$ 4.78\n";
	cout<< "Cheeseburguer. Cod: 104. Pre�o R$ 5.31\n";
	cout<< "Refrigerante. Cod: 105. Pre�o R$ 3.75\n";
	cout<< "\n";
	cout<< "INSIRA O C�DIGO DO PRODUTO: ";
	cin>> codProduto;
	cout<< "INSIRA A QUANTIDADE: ";
	cin>> quantidade;
	
	switch(codProduto){
		case 100:
			valorFinal = 3.35*quantidade;
			cout<< "O VALOR FINAL DA COMPRA � R$ " << valorFinal;
			break;
		case 101:
			valorFinal = 2.10*quantidade;
			cout<< "O VALOR FINAL DA COMPRA � R$ " << valorFinal;
			break;
		case 102:
			valorFinal = 1.50*quantidade;
			cout<< "O VALOR FINAL DA COMPRA � R$ " << valorFinal;
			break;
		case 103:
			valorFinal = 4.78*quantidade;
			cout<< "O VALOR FINAL DA COMPRA � R$ " << valorFinal;
			break;
		case 104:
			valorFinal = 5.31*quantidade;
			cout<< "O VALOR FINAL DA COMPRA � R$ " << valorFinal;
			break;
		case 105:
			valorFinal = 3.75*quantidade;
			cout<< "O VALOR FINAL DA COMPRA � R$ " << valorFinal;
			break;
		default:
			cout<< "OP��O INV�LIDA";
			break;
	}
	return 0;
}
