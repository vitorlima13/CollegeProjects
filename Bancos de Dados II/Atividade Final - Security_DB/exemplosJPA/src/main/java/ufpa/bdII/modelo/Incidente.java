/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ufpa.bdII.modelo;
import java.util.Date;
import javax.persistence.*;

/**
 *
 * @author Vitor Lima
 */
@Entity
public class Incidente {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    
    private long id;
    
    private String descricao;
    
    private Date hora;
    
    private boolean avisou;
    
    @ManyToOne
    @JoinColumn(name = "sensor_id")
    private Sensor sensor;

    public long getId() {
        return id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public Date getHora() {
        return hora;
    }

    public void setHora(Date hora) {
        this.hora = hora;
    }

    public boolean getAvisou() {
        return avisou;
    }

    public void setAvisou(boolean avisou) {
        this.avisou = avisou;
    }

    public Sensor getSensor() {
        return sensor;
    }

    public void setSensor(Sensor sensor) {
        this.sensor = sensor;
    }

    
    
}
