#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float med1, med2, med3;
	
	cout << "Insira as 3 medidas de um triangulo.\n";
	cin >> med1;
	cin >> med2;
	cin	>> med3;
	
	if ((med1<(med2+med3))&&(med2<(med1+med3))&&(med3<(med2+med1))){
		cout << "Essas medidas representam um triangulo.\n";
	}else{
		cout << "Essas medidas não representam um triangulo.\n";
	}
	if ((med1==med2)&&(med2==med3)){
		cout << "E correspomdem a um triangulo equilátero.";
	}
	return 0;
}
