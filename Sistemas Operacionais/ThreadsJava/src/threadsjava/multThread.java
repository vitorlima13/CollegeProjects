/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package threadsjava;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Vitor Lima
 */
public class multThread extends Thread {
    
    private String nome;
    private int tempo;
    
    public multThread (String nome, int tempo){
        this.nome = nome;
        this.tempo = tempo;
        start();
    }
    
    public void run(){
            try {
                for(int i=0; i<6; i++){
                System.out.println(nome + " contador " + i);
                Thread.sleep(tempo);
                }
                System.out.println(nome + " terminou a execução ");
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
    }
}
