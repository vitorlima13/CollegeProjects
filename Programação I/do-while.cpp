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
	
	do{
		cout << "Esta frase se repetir� at� que a vari�vel controle seja igual a 10\n";
		cout << "controle = " << controle << "\n";
		Sleep(500);
		controle++;
	}while(controle<=10);
	
	return 0;
}
