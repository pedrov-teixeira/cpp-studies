#include <iostream>
#include <string>

using namespace std;

class Conta {
private:
    // --- Início dos Atributos ---
    // Estes atributos representam os dados/estado da Conta
    int numeroConta;
    string titular;
    double saldo;
    // --- Fim dos Atributos ---

public:
    // Construtor para inicializar os atributos do objeto
    Conta(int numero, const string& nome, double valorInicial) {
        numeroConta = numero;
        titular = nome;
        saldo = valorInicial;
    }

    void exibirEstado() const {
        cout << "Conta: " << numeroConta 
             << " | Titular: " << titular 
             << " | Saldo: " << saldo << " EUR" << endl;
    }
};

int main() {
    // Ao instanciar os objetos, os seus atributos recebem valores distintos
    Conta conta1(1001, "Carlos Silva", 500.0);
    Conta conta2(1002, "Maria João", 1250.50);

    conta1.exibirEstado();
    conta2.exibirEstado();

    return 0;
}