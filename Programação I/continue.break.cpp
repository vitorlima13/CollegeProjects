#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int controle=0, opcao;
	
	while(opcao!=5){
		cout << "Escolha uma op��o entre 1 e 4, escolha 5 para sair do programa...\n";
		cin >> opcao;
		if((opcao<1)||(opcao>5)){
			continue; 
		}
	controle++;
	cout << "Controle: " << controle << "\n";
		switch (opcao) {
		case 1:
			cout << "Op��o 1 foi escolhida\n";
			break;
		case 2:
			cout << "Op��o 2 foi escolhida\n";
			break;
		case 3:
			cout << "Op��o 3 foi escolhida\n";
			break;
		case 4:
			cout << "Op��o 4 foi escolhida\n";
			break;
		case 5:
			cout << "Voc� saiu do programa\n";
			break;
		}
	}
	return 0;
}
