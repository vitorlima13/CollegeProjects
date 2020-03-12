/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package threadsjava;

import java.lang.Thread;
/**
 *
 * @author Vitor Lima
 */
public class ThreadsJava {

    public static void main(String[] args) {
        
        multThread thread = new multThread("Thread #1", 600);
        
        multThread thread2 = new multThread("Thread #2", 800);
    }
    
}
