#include <iostream>
using namespace std;
//Operador ternario é mais rapido e simples que o if padrão, tendo em vista que o retorno também é mais simples
//então se o programa tiver retornos simples, talvez cogitar operador ternario
//if simplificado

int main(){
    //(teste lógico) ? valor1 : valor2;
    int n1, n2, media, qtd_aprovados = 0, qtd_reprovados = 0;
    string res;
    char opc = 's';

    while(opc == 's'){
        cout << "Digite a nota das provas 1 e 2: ";
        cin >> n1 >> n2;

        media = (n1+n2)/2;

        (media >= 5) ? res="Aprovado" : res="Reprovado";
        (media >= 5) ? qtd_aprovados++ : qtd_reprovados++;

        cout << "Situacao do aluno: " << res << "\n";
        cout << "Alunos aprovados: " << qtd_aprovados << "\nAlunos reprovados: " << qtd_reprovados << "\n";

        cout << "Continuar contando situação dos alunos: ";
        cin >> opc;
    }
    
    return 0;
}