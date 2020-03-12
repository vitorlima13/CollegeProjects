#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale (LC_ALL, "Portuguese");
	float primeiroValor, segundoValor, resultado;
	int escolha;
	cout << "Entre com o primeiro número: " << "\n";
	cin >> primeiroValor;
	cout << "Agora o segundo" << "\n";
	cin >> segundoValor;
	cout << "Digite [1] para somar" << "\n";
	cout << "Digite [2] para subtrair" <<"\n";
	cout << "Digite [3] para multiplicar" <<"\n";
	cout << "Digite [4] para dividir" <<"\n";
	cin >> escolha;
	system ("cls");
	
	if (escolha==1){
		resultado = primeiroValor+segundoValor;
	}
	if (escolha==2){
		resultado = primeiroValor-segundoValor;
	}
	if (escolha==3){
		resultado = primeiroValor*segundoValor;
	}
	if (escolha==4){
		resultado = primeiroValor/segundoValor;
	}
	cout << "O resultado é: " << resultado << "\n";
	if (resultado<=0){
		cout << "O resultado é inferior ou igual a zero";
	}else if ((resultado>0)&&(resultado<=50)){
		cout << "O resultado está ente 0 e 50";
	}else if ((resultado>50)&&(resultado<=100)){
		cout << "O resultado está ente 50 e 100";
	}else if ((resultado>100)&&(resultado<=200)){
		cout << "O resultado está ente 100 e 200";
	}else{
		cout <<  "O resultado é maior que 200";
	}
	return 0;
}
