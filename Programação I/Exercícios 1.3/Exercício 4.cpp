#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	float maior, numeros;
	int cont;
	
	cout << "Insira oito n�meros...\n";
	
	maior=-99999999999;
	
	while(cont <= 8){
		cin >> numeros;
		if (numeros>maior){
			maior = numeros;
		}
	cont++;
	}
	cout << "O maior n�mero inserido foi: " << maior;
	return 0;
}
