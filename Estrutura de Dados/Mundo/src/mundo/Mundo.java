/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mundo;

/**
 *
 * @author JJJ
 */

import javax.swing.JOptionPane;

public class Mundo {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       String nome;
//ENTRADA
nome = JOptionPane.showInputDialog("Digite o nome");       
//SAIDA
JOptionPane.showMessageDialog(null,"Olá "+ nome +", Parabéns" );

// TODO code application logic here
    }
    
}
