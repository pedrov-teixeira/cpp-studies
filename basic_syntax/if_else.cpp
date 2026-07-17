#include <iostream>
using namespace std;

int main(){
    int n1, n2;

    cout << "Digite dois valores, um para n1 e outro para n2: ";
    cin >> n1 >> n2;

    if(n1 > n2){
        cout << "n1 eh maior que n2\n";
    }else{  
        cout << "n2 eh maior que n1\n";
    }

    return 0;
}

/*
    se(uma condição for cumprida){
        realiza uma ação
    }se não{
        realiza outra ação
    }
    */

    //teste lógico
    // >, <, >=, <=, ==, !=
    // 10 < 5 = false
    // 100 >= (50 * 2) = true