#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	string nomeFuncionario;
	float salarioFuncionario, novoSalario;
	char planoFuncionario;
	cout<< "=========PLANO DE TRABALHO==========\n";
	cout<< "Nome: ";
	cin>>nomeFuncionario;
	cout<< "Sal�rio: ";
	cin>> salarioFuncionario;
	cout<< "Insira seu plano de trabalho [A,B,C]: ";
	cin>> planoFuncionario;
	system ("cls");
	
	switch(planoFuncionario){
		case 'A':
			novoSalario = salarioFuncionario+((salarioFuncionario*10)/100);
			cout<< "Seu novo sal�rio �: " << novoSalario;
			break;
		case 'B':
			novoSalario = salarioFuncionario+((salarioFuncionario*15)/100);
			cout<< "Seu novo sal�rio �: " << novoSalario;
			break;
		case 'C':
			novoSalario = salarioFuncionario+((salarioFuncionario*20)/100);
			cout<< "Seu novo sal�rio �: " << novoSalario;
			break;
		default	:
			cout<< "Op��o inv�lida";
			break;
	}
	return 0;
}
