<?php
    $conexao = mysqli_connect("localhost", "root","","bdaula") or die ("Erro de conecção: ".mysqli_error());

    $nome = $_POST['nome'];
    $email = $_POST['email'];
    $telefone = $_POST['tell'];
    $mensagem = $_POST['mensagem'];

    $qtd_usuarios = "SELECT * FROM usuarios_ray_contact WHERE email = '$email'";
    $busca = mysqli_query($conexao, $qtd_usuarios);
    $num_linhas = mysqli_num_rows($busca);

        $inserir = "INSERT INTO usuarios_ray_contact (nome, email, telefone, mensagem) VALUES ('$nome', '$email', '$telefone', '$mensagem')";
        $resultado_usuarios = mysqli_query($conexao,$inserir);
        header('Location: index.html');
        "<script>window.alert('Usuário cadastrado com sucesso!')</script>";

    if(mysqli_insert_id($conexao)){
            echo "<span style='color:green'>Usuário cadastrado com sucesso!</span>";
    } else {
        "<span style='color:red'>Erro no cadastro do usuário!</span>";
    }
    mysqli_close($conexao);

?>
