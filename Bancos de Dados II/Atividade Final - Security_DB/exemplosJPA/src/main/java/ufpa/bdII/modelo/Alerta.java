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
@Entity
public class Alerta {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    
    private long id;
    private String descricao;
    @Column(name = "TipoAlerta")
    private int tipoAlerta;

    @ManyToOne
    @JoinColumn(name = "local_id")
    private Local local;
    
    
    public TipoAlerta getTipoAlerta() {
		return TipoAlerta.getTipoAlerta(tipoAlerta);
	}
	public void setTipoAlerta(TipoAlerta tipoAlerta) {
		this.tipoAlerta = tipoAlerta.getCodigo();
	}
        
        
    public Local getLocal() {
        return local;
    }

    public void setLocal(Local local) {
        this.local = local;
    }
    
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

    
    
    
}
