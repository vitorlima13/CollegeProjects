/*package ufpa.bdII.repositorio;

import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;
import org.springframework.data.repository.query.Param;
import ufpa.bdII.modelo.Marca;
import ufpa.bdII.modelo.Problema;

import java.util.List;

public interface ProblemaRepository extends CrudRepository<Problema, Long> {

    @Query(value = "select * from problema where data BETWEEN :busca AND :buscafim ",nativeQuery = true)
    List<Problema> buscarProblemasHoje(@Param("busca") String dataHjinici,@Param("buscafim") String dataHjfim);

    List<Problema> findAllByAutomovelId(Long idAutomovel);

    Long countAllByDescricaoContaining(String descricao);
}*/
