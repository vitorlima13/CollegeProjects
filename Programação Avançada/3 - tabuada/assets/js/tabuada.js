function calculaTabuada(){

    let tabuada = document.querySelector("#tabuada tbody");
    let valorA = parseInt(document.querySelector("#valorA").value);
    tabuada.innerHTML = '';

    let operation = document.querySelector("#operacao").value;

    if (operation=="+"){
        for (let valorB = 0; valorB <= 10; valorB++) {

            let resultado = valorA + valorB;

            let conteudoLinhasinhas = `
                    <td>${valorA}</td>
                    <td>+</td>
                    <td>${valorB}</td>
                    <td>=</td>
                    <td>${resultado}</td>
                `;

            let tr = document.createElement('tr');     
            tr.innerHTML = conteudoLinhasinhas;
            tabuada.append(tr);

     } 
    }else if(operation=="-"){
        for (let valorB = 0; valorB <= 10; valorB++) {

            let resultado = valorA - valorB;

            let conteudoLinhasinhas = `
                    <td>${valorA}</td>
                    <td>-</td>
                    <td>${valorB}</td>
                    <td>=</td>
                    <td>${resultado}</td>
                `;

            let tr = document.createElement('tr');     
            tr.innerHTML = conteudoLinhasinhas;
            tabuada.append(tr);

     } 
    }else if(operation=="/"){
        for (let valorB = 0; valorB <= 10; valorB++) {

            let resultado = valorA / valorB;

            let conteudoLinhasinhas = `
                    <td>${valorA}</td>
                    <td>/</td>
                    <td>${valorB}</td>
                    <td>=</td>
                    <td>${resultado}</td>
                `;

            let tr = document.createElement('tr');     
            tr.innerHTML = conteudoLinhasinhas;
            tabuada.append(tr);

     } 
    }else if(operation=="*"){
        for (let valorB = 0; valorB <= 10; valorB++) {

            let resultado = valorA * valorB;

            let conteudoLinhasinhas = `
                    <td>${valorA}</td>
                    <td>x</td>
                    <td>${valorB}</td>
                    <td>=</td>
                    <td>${resultado}</td>
                `;

            let tr = document.createElement('tr');     
            tr.innerHTML = conteudoLinhasinhas;
            tabuada.append(tr);

     } 
    }

}

calculaTabuada();

document.querySelector("#valorA").addEventListener('change', calculaTabuada);
document.querySelector("#operacao").addEventListener('change', calculaTabuada)