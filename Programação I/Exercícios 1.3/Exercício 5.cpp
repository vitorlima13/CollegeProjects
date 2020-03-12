#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int cont=1, ladoQ;
	do{
		cout << "Insira o tamanho do lado do quadrado... [SOMENTE VALORES DE 5 A 10]";
		cin >> ladoQ;
	}while(!(ladoQ>= 5) && (ladoQ<=10));
	
	
			while (cont<=ladoQ*ladoQ){
					if (cont%ladoQ==0){
						cout << "[]\n";
					}else{
						cout << "[]";
					}
					cont++;
			}
	return 0;
}
