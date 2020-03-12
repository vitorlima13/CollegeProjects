#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	string nome[5]; //Os vetores SEMPRE COMEÇAM EM ZEROOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
	int contador;
	contador = 1;
	
	for (int i=0; i<=4; i++)
	{
		cout << "Insira o " << contador << " nome: ";
		cin >> nome[i];
		contador = contador+1;
	}
	
	contador = 1;
	system("cls");
	cout << "RESUMO\n";
	
	for (int i=4; i>=0; i--)
	{
		cout << "Nome " << contador << ": " << nome[i] << "\n" ;
		contador = contador+1;
	}
	return 0;	
}
