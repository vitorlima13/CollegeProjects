#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int voto, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0, total, porcNulo, porcBran;
	
	do{
		cout << "================ELEIÇÕES==============\n";
		cout << "PARA CANDIDATO: LADRÃO 1, TECLE[1]\n";
		cout << "PARA CANDIDATO: LADRÃO 2, TECLE[2]\n";
		cout << "PARA CANDIDATO: LADRÃO 3, TECLE[3]\n";
		cout << "PARA CANDIDATO: LADRÃO 4, TECLE[4]\n";
		cout << "TECLE [5] PARA VOTO NULO\n";
		cout << "TECLE [6] PARA VOTO EM BRANCO\n";
		cout << "TECLE [0] PARA SAIR\n";
		cin >> voto;
		if(voto==1){
			cont1++;
		}else if(voto==2){
			cont2++;
		}else if(voto==3){
			cont3++;
		}else if(voto==4){
			cont4++;
		}else if(voto==5){
			cont5++;
		}else if(voto==6){
			cont6++;
		}else{
			cout << "Opção inválida.";
		}
		system("cls");
	}while(voto!=0);
	total=cont1+cont2+cont3+cont4+cont5+cont6;
	porcNulo = (cont5*100)/total;
	porcBran = (cont6*100)/total;
	
	cout << "Total de votos: " << total << "\n" << "\n";
	cout << "Votos para ladrão 1: " << cont1 << "\n";
	cout << "Votos para ladrão 2: " << cont2 << "\n";
	cout << "Votos para ladrão 3: " << cont3 << "\n";
	cout << "Votos para ladrão 4: " << cont4 << "\n";
	cout << "Porcentagem dos votos nulos: " << porcNulo << "%\n";
	cout << "Porcentagem dos votos em branco: " << porcBran << "%\n";	
	
	return 0;	
}
