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
public class CadastroSI {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      int opcao;
      String op;
      
      for(    ;   ;   ){
 op = JOptionPane.showInputDialog(" 1- Aluno " +
  "\n 2 - Professor  \n 3 - Sair"        );
 opcao = Integer.parseInt(op);
 
 if( opcao == 1){
 Aluno aluno1 = new Aluno();
 aluno1.inserir_nome();
 aluno1.inserir_curso();
 aluno1.inserir_matricula();
 aluno1.exibir_aluno();
 } // FIM OPCAO 1111111111111111111111111111111
          
 if(opcao == 2){
 Professor prof1 = new Professor();
 prof1.inserir_prof();
 prof1.inserir_disciplina();
 prof1.exibir_prof();
 } // FIM OPCAO 222222222222222222222222222222222222
 
 if(opcao == 3){
JOptionPane.showMessageDialog(null," Muito Obrigado!");
 break;
 } // OPCAO 3333333333333333333333333333333333
 
 if(opcao!=1 && opcao!=2 && opcao!=3){
 JOptionPane.showMessageDialog(null,"Opção Inválida");
   } // OPCAOOOOOOOOOOOO
 
      } // FIM DO FORRRRRRRRRRRRRRRRRRRRRRRRRRR
        


// TODO code application logic here
    }
    
}
