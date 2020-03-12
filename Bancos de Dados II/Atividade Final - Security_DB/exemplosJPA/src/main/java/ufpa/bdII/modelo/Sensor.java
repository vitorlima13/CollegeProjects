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
public class Sensor {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    
    private long id;
    
    private String nome;
    
    @Column(name = "TipoSensor")
    private int tipoSensor;
    
    @ManyToOne
    @JoinColumn(name = "local_id")
    private Local local;
    
    @OneToMany(mappedBy = "sensor")
    List<Incidente> incidentelist;
    
    
    
    public Local getLocal() {
        return local;
    }

    public void setLocal(Local local) {
        this.local = local;
    }
    public TipoSensor getTipoSensor() {
		return TipoSensor.getTipoSensor(tipoSensor);
	}
	public void setTipoSensor(TipoSensor tipoSensor) {
		this.tipoSensor = tipoSensor.getCodigo();
	}

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
