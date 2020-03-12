#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	cout<< "INSIRA UM NÚMERO: ";
	cin>> numero;
	
	switch (numero){
		case 1:
			cout<< "UM";
			break;
		case 2:
			cout<< "DOIS";
			break;
		case 3:
			cout<< "TRÊS";
			break;
		case 4:
			cout<< "QUATRO";
			break;
		case 5:
			cout<< "CINCO";
			break;
		case 6:
			cout<< "SEIS";
			break;
		case 7:
			cout<< "SETE";
			break;
		case 8:
			cout<< "OITO";
			break;
		case 9:
			cout<< "NOVE";
			break;
		case 10:
			cout<< "DEZ";
			break;
	}
	
	return 0;
}
