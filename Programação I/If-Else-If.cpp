#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	cout << "Entre com um número: ";
	cin >> x;
	cout << "\n";
	system ("cls");
	
	if ((x>=1)&&(x<=5)){
		cout << "O valor está entre 1 e 5";
	}else if ((x>=6)&&(x<=10)){
		cout << "O número está entre 6 e 10";
	}else {
		cout << "O valor é maior que 10";
	}
	return 0;
	
}
