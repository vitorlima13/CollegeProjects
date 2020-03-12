/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package poo_si;

/**
 *
 * @author JJJ
 */
import javax.swing.JOptionPane;

public class Corrente {
    double saldo = 0;
    String sd;

  public void depositar (){
sd = JOptionPane.showInputDialog("Digite o valor");
saldo = Double.parseDouble(sd);
  }  // FIM DO DEPOSITAR
  
  public void extrato(){
JOptionPane.showMessageDialog(null,"Valor: "+saldo);
  }//FIM DO EXTRATO
    
    
}





