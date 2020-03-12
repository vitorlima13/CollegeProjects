package ufpa.bdII.repositorio;

import org.springframework.data.repository.CrudRepository;
import ufpa.bdII.modelo.Usuario;
import java.util.List;

public interface UsuarioRepository extends CrudRepository<Usuario, Long> {
   /*listagem de todos os automoveis da marca x
    List<Automovel> findAllByMarcaId(Long id);

    Listagem de automoveis com "Fiesta" no nome e que a marca
    tenha o nome igual a "Ford"
    List<Automovel> findAllByNomeContainingAndMarcaNomeContaining(String nomeAuto, String nomeMarca);*/
    
}
