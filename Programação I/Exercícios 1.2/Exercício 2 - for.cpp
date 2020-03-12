#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int numero, i, resultado[10];

	cout << "TABUADA DOS NUMEROS\n";
	cout << "Insira um numero: ";
	cin >> numero; 
	
	system ("cls");
	
	cout << "TABUADA\n";
	
	for (i=0; i<=10; i++)
	{
		resultado[i] = numero*i;
		cout << numero << " x " <<	i << ": " << resultado <<"\n";
	}
	return 0;
}
