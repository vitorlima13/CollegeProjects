/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ufpa.bdII.repositorio;
import org.springframework.data.repository.CrudRepository;
import ufpa.bdII.modelo.Autorizacao;
import java.util.List;
/**
 *
 * @author Vitor Lima
 */
public interface AutorizacaoRepository extends CrudRepository<Autorizacao, Long>{
    
}
