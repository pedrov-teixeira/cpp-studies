#include <iostream>
using namespace std;

int main(){
    int n1, n2, media;
    char opc;

    inicio:

    cout << "\nDigite as notas das provas 1 e 2: \n";
    cin >> n1 >> n2;

    media = (n1 + n2) / 2;

    if(media >= 5){
        cout << "Parabens, Você foi aprovado!\n";
    }else{
        cout << "Reprovado!\n";
    }

    cout << "Calcular outra media?[s/n]: ";
    cin >> opc;

    if(opc == 's'){
        goto inicio;
    }

    return 0;    
}