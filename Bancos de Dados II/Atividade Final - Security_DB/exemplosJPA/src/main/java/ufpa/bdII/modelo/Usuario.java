package ufpa.bdII.modelo;

import javax.persistence.*;
/**
 *
 * @author Vitor Lima
 */
@Entity
public class Usuario {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private long id;
    
    private String nome;
    
    @Column(name = "Cargo")
    private int cargo;
    
    private String login;
    
    private String senha;
    
    private String cpf;
    
    private String rg;
    
    private String endereco;
   
    @OneToMany(mappedBy = "usuario")
    java.util.List<Autorizacao> autorizacaolist;
        
    public Cargo getCargo() {
		return Cargo.getCargo(cargo);
	}
    public void setCargo(Cargo cargo) {
		this.cargo = cargo.getCodigo();
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

    public String getLogin() {
        return login;
    }

    public void setLogin(String login) {
        this.login = login;
    }

    public String getSenha() {
        return senha;
    }

    public void setSenha(String senha) {
        this.senha = senha;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }
    
}
