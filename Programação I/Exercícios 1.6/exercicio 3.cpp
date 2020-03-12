#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float pessoas, v1, v2, v3, v4, ingrePop, ingreVip, ingrePrem, ingreCamar, final;
	
	cout << "Insira a quantidade de pessoas que foram ao estádio Samara assistir ao jogo de Brasil e México: ";
	cin >> pessoas;
	
	ingrePop = (pessoas*23)/100;
	ingreVip = (pessoas*41)/100;
	ingrePrem = (pessoas*27)/100;
	ingreCamar = (pessoas*9)/100;
	
	v1 = ingrePop*100;
	v2 = ingreVip*250;
	v3 = ingrePrem*600;
	v4 = ingreCamar*2.000;
	
	final = v1+v2+v3+v4;
	
	cout.precision(2);
	cout.setf(ios::fixed);
	
	cout << "O arrecadamento final do jogo foi: R$" << final << "\n";
	cout << "Sendo...\n";
	cout << "Ingresso popular (23% do publico): R$" << v1 << "\n";
	cout << "Ingresso vip (41% do publico): R$" << v2 << "\n";
	cout << "Ingresso premium (27% do publico): R$" << v3 << "\n";
	cout << "Ingresso camarote (9% do publico): R$" << v4 << "\n";
	
	return 0;
}
