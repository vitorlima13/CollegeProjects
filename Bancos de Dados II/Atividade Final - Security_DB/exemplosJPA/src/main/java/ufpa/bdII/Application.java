package ufpa.bdII;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;
import ufpa.bdII.modelo.Alerta;
import ufpa.bdII.modelo.Autorizacao;
import ufpa.bdII.modelo.Incidente;
import ufpa.bdII.modelo.Local;
import ufpa.bdII.modelo.Sensor;
import ufpa.bdII.modelo.Usuario;
import ufpa.bdII.modelo.Cargo;
import ufpa.bdII.repositorio.AlertaRepository;
import ufpa.bdII.repositorio.AutorizacaoRepository;
import ufpa.bdII.repositorio.IncidenteRepository;
import ufpa.bdII.repositorio.LocalRepository;
import ufpa.bdII.repositorio.SensorRepository;
import ufpa.bdII.repositorio.UsuarioRepository;

import java.util.Date;
import java.time.ZonedDateTime;
import java.util.List;
import javax.activation.DataSource;
import org.springframework.jdbc.datasource.DriverManagerDataSource;
import ufpa.bdII.modelo.TipoAlerta;
import ufpa.bdII.modelo.TipoSensor;



@SpringBootApplication
public class Application {

    private static final Logger log = LoggerFactory.getLogger(Application.class);

    public static void main(String[] args) {
        SpringApplication.run(Application.class);
    }

    @Bean
    public CommandLineRunner bancoSecurity(
            AlertaRepository alertaRepositorio,
            AutorizacaoRepository autorizacaoRepositorio,
            IncidenteRepository incidenteRepositorio,
            LocalRepository localRepositorio,
            SensorRepository sensorRepositorio,
            UsuarioRepository usuarioRepositorio
    ) {
        return (args) -> {
            //Cadastro de Usuários - Segurancas - Vigias
            Usuario seg1 = new Usuario();
            seg1.setNome("Francisco");
            seg1.setCargo(Cargo.VIGIA);
            seg1.setRg("123456780");
            seg1.setCpf("000.000.000.00");
            seg1.setEndereco("Travessa X, 105, Centro");
            seg1.setLogin("user1");
            seg1.setSenha("123");
            seg1 = usuarioRepositorio.save(seg1);
            
            Usuario seg2 = new Usuario();
            seg2.setNome("Luiz");
            seg2.setCargo(Cargo.VIGIA);
            seg2.setRg("123456781");
            seg2.setCpf("000.000.000.00");
            seg2.setEndereco("Travessa X, 105, Centro");
            seg2.setLogin("user2");
            seg2.setSenha("123");
            seg2 = usuarioRepositorio.save(seg2);
            
            Usuario seg3 = new Usuario();
            seg3.setNome("Luiza");
            seg3.setCargo(Cargo.VIGIA);
            seg3.setRg("123456783");
            seg3.setCpf("000.000.000.00");
            seg3.setEndereco("Travessa X, 105, Centro");
            seg3.setLogin("user3");
            seg3.setSenha("123");
            seg3 = usuarioRepositorio.save(seg3);
            
            //Cadastro de usuario - tecnico - gerente
            Usuario geren1 = new Usuario();
            geren1.setNome("Marcos");
            geren1.setCargo(Cargo.TECNICO);
            geren1.setRg("123456789");
            geren1.setCpf("000.000.000.00");
            geren1.setEndereco("Travessa X, 105, Centro");
            geren1.setLogin("user2");
            geren1.setSenha("123");
            geren1 = usuarioRepositorio.save(geren1);
            
            //Locais da UFPA
            Local loc1 =  new Local();
            loc1.setNome("Predio 1");
            loc1 = localRepositorio.save(loc1);
            
            Local loc2 =  new Local();
            loc2.setNome("Predio 2");
            loc2 = localRepositorio.save(loc2);
            
            Local loc3 =  new Local();
            loc3.setNome("Predio 3");
            loc3 = localRepositorio.save(loc3);
            
            //Autorizacoes
            Autorizacao auto1 = new Autorizacao();
            auto1.setLocal(loc1);
            auto1.setUsuario(seg1);
            auto1.setHora_inicio(new Date(2019-10-02));
            auto1.setHora_fim(new Date(2019-10-03));
            auto1 = autorizacaoRepositorio.save(auto1);
            
            Autorizacao auto2 = new Autorizacao();
            auto2.setLocal(loc2);
            auto2.setUsuario(seg2);
            auto2.setHora_inicio(new Date(2019-10-04));
            auto2.setHora_fim(new Date(2019-10-05));
            auto2 = autorizacaoRepositorio.save(auto2);
            
            
            Autorizacao auto3 = new Autorizacao();
            auto3.setLocal(loc3);
            auto3.setUsuario(seg3);
            auto3.setHora_inicio(new Date(2019-10-02));
            auto3.setHora_fim(new Date(2019-10-03));
            auto3 = autorizacaoRepositorio.save(auto3);
            
            Autorizacao auto4 = new Autorizacao();
            auto4.setLocal(loc1);
            auto4.setUsuario(seg3);
            auto4.setHora_inicio(new Date(2019-10-06));
            auto4.setHora_fim(new Date(2019-10-07));
            auto4 = autorizacaoRepositorio.save(auto4);
            
            Autorizacao auto5 = new Autorizacao();
            auto5.setLocal(loc2);
            auto5.setUsuario(seg1);
            auto5.setHora_inicio(new Date(2019-10-8));
            auto5.setHora_fim(new Date(2019-10-10));
            auto5 = autorizacaoRepositorio.save(auto5);
            
            Autorizacao auto6 = new Autorizacao();
            auto6.setLocal(loc3);
            auto6.setUsuario(seg2);
            auto6.setHora_inicio(new Date(2019-10-02));
            auto6.setHora_fim(new Date(2019-10-06));
            auto6 = autorizacaoRepositorio.save(auto6);
            
            //Sensores
            Sensor sen1 = new Sensor();
            sen1.setNome("Camera1");
            sen1.setTipoSensor(TipoSensor.CAMERA);
            sen1.setLocal(loc1);
            sen1 = sensorRepositorio.save(sen1);
            
            Sensor sen2 = new Sensor();
            sen2.setNome("Camera2");
            sen2.setTipoSensor(TipoSensor.CAMERA);
            sen1.setLocal(loc1);
            sen2 = sensorRepositorio.save(sen2);
            
            Sensor sen3 = new Sensor();
            sen3.setNome("Camera3");
            sen3.setTipoSensor(TipoSensor.CAMERA);
            sen1.setLocal(loc2);
            sen3 = sensorRepositorio.save(sen3);
            
            Sensor sen4 = new Sensor();
            sen4.setNome("Camera4");
            sen4.setTipoSensor(TipoSensor.CAMERA);
            sen1.setLocal(loc3);
            sen4 = sensorRepositorio.save(sen4);
            
            Sensor sen5 = new Sensor();
            sen5.setNome("Infravermelho1");
            sen5.setTipoSensor(TipoSensor.INFRAVERMELHO);
            sen1.setLocal(loc2);
            sen5 = sensorRepositorio.save(sen5);
            
            Sensor sen6 = new Sensor();
            sen6.setNome("Movimento1");
            sen6.setTipoSensor(TipoSensor.MOVIMENTO);
            sen1.setLocal(loc3);
            sen6 = sensorRepositorio.save(sen6);
            
            Sensor sen7 = new Sensor();
            sen7.setNome("Velocidade1");
            sen7.setTipoSensor(TipoSensor.VELOCIDADE);
            sen1.setLocal(loc1);
            sen7 = sensorRepositorio.save(sen7);
            
            //Alertas
            Alerta alert1 = new Alerta();
            alert1.setDescricao("Entrada no prédio");
            alert1.setLocal(loc1);
            alert1.setTipoAlerta(TipoAlerta.EMAIL);
            alert1 = alertaRepositorio.save(alert1);
            
            Alerta alert2 = new Alerta();
            alert2.setDescricao("Entrada no prédio");
            alert2.setLocal(loc2);
            alert2.setTipoAlerta(TipoAlerta.SMS);
            alert2 = alertaRepositorio.save(alert2);
            
            Alerta alert3 = new Alerta();
            alert3.setDescricao("Entrada no prédio");
            alert3.setLocal(loc3);
            alert3.setTipoAlerta(TipoAlerta.NOTIFICACAO);
            alert3 = alertaRepositorio.save(alert1);
            
            //Incidentes
            Incidente inci1 = new Incidente();
            inci1.setDescricao("Entrada Inesperada");
            inci1.setHora(new Date(2019-10-07));
            inci1.setAvisou(false);
            inci1 = incidenteRepositorio.save(inci1);
            
            Incidente inci2 = new Incidente();
            inci2.setDescricao("Entrada Inesperada");
            inci2.setHora(new Date(2019-10-04));
            inci2.setAvisou(true);
            inci2 = incidenteRepositorio.save(inci2);
            
            Incidente inci3 = new Incidente();
            inci3.setDescricao("Entrada Inesperada");
            inci3.setHora(new Date(2019-10-9));
            inci3.setAvisou(false);
            inci3 = incidenteRepositorio.save(inci3);
            
            //Atualizações
            inci1.setAvisou(true);
            inci3.setAvisou(true);
            
            inci1 = incidenteRepositorio.save(inci1);
            inci3 = incidenteRepositorio.save(inci3);
            
            //Buscas Simples
            
            //Todos os locais cadastrados
            for (Local localInc: localRepositorio.findAll()){
            System.out.println ("Id do usuario:"+ localInc.getId());
            System.out.println ("Nome do Local:"+ localInc.getNome());
            }
            
            //Busca todos os sensores cadastrados
            for (Sensor sensorLocal: sensorRepositorio.findAll()){
            System.out.println ("Id:"+ sensorLocal.getId());
            System.out.println ("Nome do sensor"+ sensorLocal.getNome());
            System.out.println("Tipo de sensor:"+ sensorLocal.getTipoSensor());
            System.out.println("Chave estrangeira, Id do Local:"+ sensorLocal.getLocal());
            }
            
            //Busca todos os Alertas cadastrados
            for (Alerta alertaS: alertaRepositorio.findAll()){
            System.out.println("Id:"+ alertaS.getId());
            System.out.println("Descrição:"+ alertaS.getDescricao());
            System.out.println("Tipo:"+ alertaS.getTipoAlerta());
            System.out.println("Id do sensor:"+ alertaS.getLocal());
            }
            
            //Listagem de todos os Sensores de cada Local
            //Listagem de todos os Sensores de cada Local
            for (Local locall: localRepositorio.findAll()){
                System.out.println("LOCAL : "+locall.getNome());
                List<Sensor> sensor = sensorRepositorio.findAllByLocalId(locall.getId());
                for (Sensor sens: sensor){
                    System.out.println("NOME DO SENSOR "+sens.getNome());
               }
            }
                
            //Listagem de todos os incidentes de cada sensor
            for (Sensor sensorr: sensorRepositorio.findAll()){
                System.out.println("SENSOR = "+sensorr.getNome());
                List<Incidente> incidente = incidenteRepositorio.findAllBySensorId(sensorr.getId());
                for (Incidente incid: incidente){
                    System.out.println("DESCRICAO DO INCIDENTE "+incid.getDescricao());
                }
            }
                
            //Listagem de todos os Alertas de cada Sensor
            for (Sensor sensorrr: sensorRepositorio.findAll()){
                System.out.println("SENSOR = "+sensorrr.getNome());
                List<Alerta> alertas = alertaRepositorio.findAllBySensorId(sensorrr.getId());
                for (Alerta alert: alertas){
                    System.out.println("DESCRICAO DO ALERTA "+alert.getDescricao());
                }
            }
        };
    }

}
