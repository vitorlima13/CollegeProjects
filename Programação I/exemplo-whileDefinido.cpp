#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int controle=0, continua=1;
	
	while (continua == 1){
		cout << "Esta frase se repetirá enquanto a variavél continua seja igual a 1\n";
		cout << "tecle 1 se desejar continuar: ";
		cin >> continua;
		controle++;
	}
	
	if (controle==0){
		cout << "\n\nO laço de while não foi repetido nem uma vez.";
	}else{
		cout << "O laço de while foi repetido " << controle << " vezes.";	
	}
	
	return 0;
}
