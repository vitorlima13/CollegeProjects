/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mediasi;

/**
 *
 * @author JJJ
 */

import javax.swing.JOptionPane;
public class MediaSI {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
     double n1, n2, media;
     String nota1, nota2;
nota1= JOptionPane.showInputDialog("Digite Nota 1");
n1 = Double.parseDouble(nota1);

nota2 = JOptionPane.showInputDialog("Digite Nota 2");
n2 = Double.parseDouble(nota2);

media = (n1 + n2) / 2;

if(media > 7){
JOptionPane.showMessageDialog(null,"APROVADO "+media);
}
else{
JOptionPane.showMessageDialog(null,"REPROVADO "+media);    
}
     
        
// TODO code application logic here
    }
    
}
