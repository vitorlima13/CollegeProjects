#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int controle;
	for (controle = 1; controle <= 10;){
		cout << "Esta frase se repetir� at� que a vari�vel controle seja igual a 30\n";
		cout << "Controle = " << controle << "\n";
		Sleep(500);
		controle++;
	}
	return 0;
}
