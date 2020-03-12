/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ufpa.bdII.modelo;
import javax.persistence.*;
import java.util.List;
/**
 *
 * @author Vitor Lima
 */
@Entity
public class Local {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    
    private long id;
    
    private String nome;
    @OneToMany(mappedBy = "local")
    List<Alerta> alertalist;
    
    @OneToMany(mappedBy = "local")
    List<Sensor> sensorlist;
    
    @OneToMany(mappedBy = "local")
    List<Autorizacao> autorizacaolist;
    
    public long getId() {
        return id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    
}
