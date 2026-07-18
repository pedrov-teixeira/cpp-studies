#include <iostream>
using namespace std;
//&&, (or / ||), !

int main(){
    int num;

    cout << "Digite um valor: ";
    cin >> num;

    if( (num >= 2 && num <= 5) || (num >= 9 && num <= 12) && !(num == 10) ){
        cout << "Valor aceito!";
    }else{
        cout << "Valor negado! (Fora do intervalo ou eh o numero 10!)";
    }

    return 0;
}