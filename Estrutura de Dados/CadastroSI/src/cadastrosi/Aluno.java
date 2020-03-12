/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cadastrosi;

/**
 *
 * @author JJJ
 */

import javax.swing.JOptionPane;
public class Aluno {
String nome, curso;
int matricula;
String mat;

public void inserir_nome(){
nome = JOptionPane.showInputDialog("Digite o nome");
} // FIM DO INSERIR NOME

public void inserir_curso(){
curso=JOptionPane.showInputDialog("Digite o curso");    
} // FIM DO INSERIR CURSO

public void inserir_matricula(){
mat=JOptionPane.showInputDialog("Digite matricula");
matricula = Integer.parseInt(mat);    
} // FIM INSERIR MATRICULA

public void exibir_aluno(){
JOptionPane.showMessageDialog(null,"Nome: "+ nome +
"\n Curso: " + curso + "\n Matrícula: "+matricula); 
}// FIM EXIBIR ALUNO


    
}
