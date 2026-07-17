#include <iostream>
using namespace std;

int main(){
    float n1, n2, n3;
    float nota_testes = 0, qtd_testes, nota, soma = 0, media;
    char opc;

    cout << "Calcular mencao de aluno[s/n]: ";
    cin >> opc;
    
    while(opc == 's'){
        cout << "\nDigite o número de testes realizados: \n";
        cin >> qtd_testes;

        if(qtd_testes <= 0){
            cout << "\nQuantidade de testes invalidos!\n";
            return 1;
        }

        for (int i = 1; i <= qtd_testes; i++){
            cout << "\nDigite a nota do teste: ";
            cin >> nota;

            soma += nota;
        }

        nota_testes = soma / qtd_testes;

        cout << "\nDigite as notas das 3 provas realizadas, consecutivamente: \n";
        cin >> n1 >> n2 >> n3;

        media = ((nota_testes*2)+(n1*2)+(n2*3)+(n3*3)) / 10;

        if(media >= 9){
            cout << "Parabens, voce foi aprovado, sua mencao foi SS!\n";
        }else if (media >= 7 && media < 9){
            cout << "Parabens, voce foi aprovado, sua mencao foi MS!\n";
        }else if (media >= 5 && media < 7){
            cout << "Parabens, voce foi aprovado, sua mencao foi MM!\n";
        }else if (media >= 3 && media < 5){
            cout << "Voce foi reprovado, sua mencao foi MI!\n";
        }else{
            cout << "Voce foi reprovado, sua mencao foi II!\n";
        }

        soma = 0;
        nota_testes = 0;

        cout << "Calcular outra mencao?[s/n]: ";
        cin >> opc;
        }

    return 0;
}