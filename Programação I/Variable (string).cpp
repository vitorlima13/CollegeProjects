#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string nome, nome2, nome3;
	//E o tipo char? - Só lê um caractere por vez.
	cout << "Insira o primeiro nome " <<"\n";
	cin >> nome;
	
	cout << "Insira o segundo nome " <<"\n";
	cin >> nome2;
	
	cout << "Insira o terceiro nome " <<"\n";
	cin >> nome3;
	
	cout << "Os nomes inserido foram" << "\n" << nome << "\n" << nome2 << "\n" << nome3 << "\n";
	
	return 0;
}
