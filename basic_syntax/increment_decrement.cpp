#include <iostream>
using namespace std;

int main(){
    //n1 = n1 + 5;   //n1 += 5;
    //n1++;          //Adiciona 1.  //n1--  //Remove 1
    //n1 = n1 * 2;   //n1 *= 2;
    //n1 = n1 / 2;   //n1 /= 2;
    //n1++;(pós-fixado)    //++n1(pré-fixado)
    //n1--;          //--n1; 

    int n1;
    n1 = 10;

    cout << n1++ << "\n\n";
    cout << ++n1 << "\n\n";
    cout << n1-- << "\n\n"; //pós-fixado - usa o valor, depois incrementa
    cout << --n1 << "\n\n"; //pré-fixado - incrementa, depois usa o valor

    return 0;
}