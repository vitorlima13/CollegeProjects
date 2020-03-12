/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ufpa.bdII.modelo;
import javax.persistence.*;

/**
 *
 * @author Vitor Lima
 */
public enum TipoSensor {
    CAMERA("Camera", 0),
    MOVIMENTO("Movimento", 1),
    VELOCIDADE("Velocidade", 2),
    INFRAVERMELHO("Infra-vermelho", 3);
    
    private String nome;
    private int codigo;
    
    private TipoSensor (String nome, int codigo){
		this.nome = nome;
		this.codigo = codigo;
	}
    public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public int getCodigo() {
		return codigo;
	}

	public void setCodigo(int codigo) {
		this.codigo = codigo;
	}
	
	public static TipoSensor getTipoSensor(int codigo){
		for(TipoSensor c : values()){
			if(c.codigo == codigo){
				return c;
			}
		}
		throw new IllegalArgumentException("Sensor Inválido");
	}
}
