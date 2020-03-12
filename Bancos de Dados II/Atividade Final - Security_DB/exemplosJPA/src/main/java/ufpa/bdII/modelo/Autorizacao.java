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
public class Autorizacao {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private long id;
    
    @Temporal(TemporalType.TIMESTAMP)
    private Date hora_fim;

    @Temporal(TemporalType.TIMESTAMP)
    private Date hora_inicio;

    @ManyToOne
    @JoinColumn(name = "usuario_id")
    private Usuario usuario; 
    
    @ManyToOne
    @JoinColumn(name = "local_id")
    private Local local;

    public long getId() {
        return id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public Date getHora_fim() {
        return hora_fim;
    }

    public void setHora_fim(Date hora_fim) {
        this.hora_fim = hora_fim;
    }

    public Date getHora_inicio() {
        return hora_inicio;
    }

    public void setHora_inicio(Date hora_inicio) {
        this.hora_inicio = hora_inicio;
    }

    public Usuario getUsuario() {
        return usuario;
    }

    public void setUsuario(Usuario usuario) {
        this.usuario = usuario;
    }

    public Local getLocal() {
        return local;
    }

    public void setLocal(Local local) {
        this.local = local;
    }
    
    
    
}
