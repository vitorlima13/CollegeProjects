<?php
    $conexao = mysqli_connect("localhost","root",""); //correspondente a servidor, login e senha

    if(!$conexao){//testando a conexão
        die("Erro de conexão".mysqli_conect_error());
    } else {
        echo "BD conectado" . "<br>";
    }
    /*$bd = mysqli_select_db("localhost","root","");*///mesmo que a próxima linha
    //Parametros: Servidor, login, senha, nome do banco de dados
    $bd = mysqli_select_db($conexao, "BDAula");//diz se o banco de dados existe;
    if(empty ($bd)){
        echo "Banco de dados não encontrado" . "<br>";

        //criação do banco de dados(bd recebe cadeia de string)
        $bd = "CREATE DATABASE BDAula DEFAULT CHARSET=utf8";

        $Criabd = mysqli_query($conexao, $bd);
        //query é um comando no bando de dados, 
        //no caso herda a string db, pra poder executar.

        if(!$Criabd){
            echo "Erro ao criar banco de dados" . "<br>";
        } else {
            echo "Banco de dados criado com sucesso" . "<br>";
        }
        
    } else {

        echo "Banco de dados encontrado" . "<br>";
        //select *informação que quer achar* from e de onde vai trazer, nesse caso a tabela
        $tabela = "SELECT * FROM usuarios_ray_contact";
        $BuscaTabela = mysqli_query($conexao,$tabela);

        if(!$BuscaTabela){
            echo "Tabela não encontrada" . "<br>";

            $MinhaTabela = " CREATE TABLE usuarios_ray_contact(
                id int (100) NOT NULL AUTO_INCREMENT,
                nome varchar (40) NOT NULL,
                email varchar (40) NOT NULL,
                telefone varchar (20) NOT NULL,
                mensagem varchar (200) NOT NULL,
                PRIMARY KEY(id)
            ) DEFAULT CHARSET=utf8";

            $CriaTabela = mysqli_query($conexao,$MinhaTabela);

            if(!$CriaTabela){
                echo "Erro durante a criação da tabela" . "<br>";
            } else {
                echo "Tabela criada com sucesso" . "<br>";
            }
        }

    }

    mysqli_close($conexao);
?>