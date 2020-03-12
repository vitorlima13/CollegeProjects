<?php
    $conexao = mysqli_connect("localhost", "root","","bdaula") or die ("Erro de conecção: ".mysqli_error());

    $nome = $_POST['Your-Name'];
    $email = $_POST['Your-Email'];
    $senha = $_POST['password'];

    $qtd_usuarios = "SELECT * FROM usuarios_ray WHERE email = '$email'";
    $busca = mysqli_query($conexao, $qtd_usuarios);
    $num_linhas = mysqli_num_rows($busca);

    if($num_linhas==0){
        $inserir = "INSERT INTO usuarios_ray (nome, email, senha) VALUES ('$nome', '$email', '$senha')";
        $resultado_usuarios = mysqli_query($conexao,$inserir);
        header('Location: index.html');
        "<script>window.alert('Usuário cadastrado com sucesso!')</script>";
    } else { 
        header('Location: site_compra_errocadastro.html');
    }

    if(mysqli_insert_id($conexao)){
            echo "<span style='color:green'>Usuário cadastrado com sucesso!</span>";
    } else {
        "<span style='color:red'>Erro no cadastro do usuário!</span>";
    }
    mysqli_close($conexao);

?>
