#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	cout << "Entre com um n�mero: ";
	cin >> x;
	cout << "\n";
	system ("cls");
	
	if ((x>=1)&&(x<=5)){
		cout << "O valor est� entre 1 e 5";
	}else if ((x>=6)&&(x<=10)){
		cout << "O n�mero est� entre 6 e 10";
	}else {
		cout << "O valor � maior que 10";
	}
	return 0;
	
}
