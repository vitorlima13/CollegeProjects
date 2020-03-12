#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int contador = 1, numero;
	
	cout << "Insira um número: ";
	cin >> numero;
	
	cout << "Impar        Par\n";
	
	while (contador <= numero){
		if(contador%2==1){
			cout << contador;
		}else{
			cout << "           " << contador << "\n";
		}
	contador++;
	}
	return 0;
}
