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
	cout<< "Salário: ";
	cin>> salarioFuncionario;
	cout<< "Insira seu plano de trabalho [A,B,C]: ";
	cin>> planoFuncionario;
	system ("cls");
	
	switch(planoFuncionario){
		case 'A':
			novoSalario = salarioFuncionario+((salarioFuncionario*10)/100);
			cout<< "Seu novo salário é: " << novoSalario;
			break;
		case 'B':
			novoSalario = salarioFuncionario+((salarioFuncionario*15)/100);
			cout<< "Seu novo salário é: " << novoSalario;
			break;
		case 'C':
			novoSalario = salarioFuncionario+((salarioFuncionario*20)/100);
			cout<< "Seu novo salário é: " << novoSalario;
			break;
		default	:
			cout<< "Opção inválida";
			break;
	}
	return 0;
}
