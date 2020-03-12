#include <iostream>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int totAlunos, cont;
	float notaAluno, total, media;
	
	cout << "Insira o total de alunos da turma de programação: ";
	cin >> totAlunos;
	
	cont = 1;
	while(cont <= totAlunos){
		cout << "Insira a nota do aluno " << cont << ": ";
		cin >> notaAluno;
		total = total+notaAluno;
		cont++;
	}
	media = total/totAlunos	;
	cout << "A média dos alunos da turma é: " << media;
	return 0;
}
