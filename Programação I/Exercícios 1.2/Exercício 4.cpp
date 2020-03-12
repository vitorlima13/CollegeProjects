#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int idade[15], i, cont1, cont2, cont3, cont4, cont5, porcent1, porcent5;
	string nome[15];
	
	for (i=0; i<=14; i++){
		cout << "Insira um nome: ";
		cin >> nome[i];	
		cout << "Insira sua idade: ";
		cin >> idade[i];
	}
	cont1 = 1;
	cont2 = 1;
	cont3 = 1;
	cont4 = 1;
	cont5 = 1;
	for (i=0; i<=14; i++){
		if (idade[i]<= 15){
			cont1 = cont1+1;
		}else if (idade[i]>=16 && idade[i]<=30){
			cont2 = cont2+1;
			}else if (idade[i]>=31 && idade[i]<=45){
			cont3 = cont3+1;
				}else if (idade[i]>=46 && idade[i]<=60){
				cont4 = cont4+1;
					}else if (idade[i]>=61){
					cont5 = cont5+1;
						}
	}
	system ("cls");
	porcent1 = (cont1*100)/15;
	porcent5 = (cont5*100)/15;
	
	cout<< "1 Faixa: " << cont1 << " pessoas.\n";
	cout<< "2 Faixa: " << cont2 << " pessoas.\n";
	cout<< "3 Faixa: " << cont3 << " pessoas.\n";
	cout<< "4 Faixa: " << cont4 << " pessoas.\n";
	cout<< "5 Faixa: " << cont5 << " pessoas.\n";
	cout << "\n";
	
	cout << "Como temos " << cont1 << " pessoas na primeira faixa etária.\n";
	cout << "Isso corresponde a " << porcent1 << "% do total.\n";
	cout << "As pessoas dentro dessa faixa são: \n";
	for (i=0; i<=14; i++){
		if (idade[i]<= 15){
			cout << nome[i] << "|";
		}
	}
	cout << "\n";
	cout << "Como temos " << cont5 << " pessoas na quinta faixa etária.\n";
	cout << "Isso corresponde a " << porcent5 << "% do total.\n";
	cout << "As pessoas dentro dessa faixa são: \n";
	for (i=0; i<=14; i++){
		if (idade[i]<= 15){
			cout << nome[i] << "|";
		}
	}
	return 0;
}
	
