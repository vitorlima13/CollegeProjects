#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int controle;
	
	while (controle <= 10){
		cout << "Esta frase se repetirá até que a variável controle seja igual a 10\n";
		cout << "controle = " << controle << "\n";
		Sleep (500);
		controle++;
	}
	return 0;
}
