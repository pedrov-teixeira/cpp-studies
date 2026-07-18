#include <iostream>
using namespace std;

int main(){
    int opc;

    cout << "\n========================================\n";
    cout << "\n     SELECIONE O TIPO DO PERSONAGEM     \n";
    cout << "\n========================================\n";
    cout << "\n[1] = Guerreiro [2] = Mago [3] = Bardo [4] = Curandeiro\n";
    
    cout << "Selecione o personagem: ";
    cin >> opc;

    switch(opc){
        case 1:
            cout << "Personagem selecionado: Guerreiro\n";
            break;
        case 2:
            cout << "Personagem selecionado: Mago\n";
            break;
        case 3:
            cout << "Personagem selecionado: Bardo\n";
            break;
        case 4: 
            cout << "Personagem selecionado: Curandeiro\n";
            break;
        default:
            cout << "Opcao invalida\n";
    }

    cout << "\nPrograma Finalizado\n";

    return 0;
}

/*
switch(expressão){
    case constante 1:
        comandos;
        break;
    case constante 2:
        comandos2;
        break;
    default;
        comandos;
}
*/