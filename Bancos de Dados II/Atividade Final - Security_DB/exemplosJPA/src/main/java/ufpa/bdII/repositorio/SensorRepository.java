/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ufpa.bdII.repositorio;

import java.util.List;
import org.springframework.data.repository.CrudRepository;
import ufpa.bdII.modelo.Sensor;

/**
 *
 * @author Vitor Lima
 */
public interface SensorRepository extends CrudRepository<Sensor, Long>{

    public List<Sensor> findAllByLocalId(long id);
    
}
