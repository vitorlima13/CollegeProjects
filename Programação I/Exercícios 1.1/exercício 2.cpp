#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float primeiroValor, segundoValor, resultado;
	int escolha;
	cout << "Entre com o primeiro n�mero: " << "\n";
	cin >> primeiroValor;
	cout << "Agora o segundo" << "\n";
	cin >> segundoValor;
	cout << "Digite [1] para somar" << "\n";
	cout << "Digite [2] para subtrair" <<"\n";
	cout << "Digite [3] para multiplicar" <<"\n";
	cout << "Digite [4] para dividir" <<"\n";
	cin >> escolha;
	system ("cls");
	
	switch(escolha){
		case 1:
			resultado = primeiroValor + segundoValor;
			cout<<"O resultado da soma �: " << resultado << "\n";
			break;
		case 2:
			resultado = primeiroValor - segundoValor;
			cout<<"O resultado da subtra��o �: " << resultado << "\n";
			break;
		case 3:
			resultado = primeiroValor * segundoValor;
			cout<<"O resultado da multiplica��o �: " << resultado << "\n";
			break;
		case 4:
			resultado = primeiroValor / segundoValor;
			cout<<"O resultado da divis�o �: " << resultado << "\n";
			break;
		default:
			cout<<"Voc� escolheu uma op��o inv�lida!!!!!!\n";
			break;	
	}
	if (resultado<=0){
		cout << "O resultado � inferior ou igual a zero";
	}else if ((resultado>0)&&(resultado<=50)){
		cout << "O resultado est� ente 0 e 50";
	}else if ((resultado>50)&&(resultado<=100)){
		cout << "O resultado est� ente 50 e 100";
	}else if ((resultado>100)&&(resultado<=200)){
		cout << "O resultado est� ente 100 e 200";
	}else{
		cout <<  "O resultado � maior que 200";
	}
	
	return 0;
}
