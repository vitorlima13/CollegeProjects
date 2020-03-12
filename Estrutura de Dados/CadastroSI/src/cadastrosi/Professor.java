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
public class Professor {
String nome, disciplina;

public void inserir_prof(){
nome = JOptionPane.showInputDialog("Digite o Profº");
} // FIM INSERIR

public void inserir_disciplina(){
disciplina=JOptionPane.showInputDialog("Digite disc");
}// FIM DISCIPLINA

public void exibir_prof(){
JOptionPane.showMessageDialog(null,"Professor: "+ nome +
"\n Disciplina: " + disciplina);
}// FIM EXIBIR


}
