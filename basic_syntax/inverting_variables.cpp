#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Digite um numero: ";
    cin >> num;
    cout << "\n";

    cout << num << "\n\n";

    //num = num * -1;
    //cout << -num << "\n\n";
    num =- num;
    num -= num;

    cout << num << "\n\n";

    return 0;
}