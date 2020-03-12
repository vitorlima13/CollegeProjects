/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ufpa.bdII.repositorio;

import java.util.List;
import org.springframework.data.repository.CrudRepository;
import ufpa.bdII.modelo.Incidente;

/**
 *
 * @author Vitor Lima
 */
public interface IncidenteRepository  extends CrudRepository<Incidente, Long>{

    public List<Incidente> findAllBySensorId(long id);
    
}
