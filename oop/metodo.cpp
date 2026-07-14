#include <iostream>

using namespace std;

class Conta {
private:
    double saldo; // Atributo (estado)

public:
    // Construtor
    Conta(double saldoInicial) {
        saldo = saldoInicial;
    }

    // --- Início do Método ---
    // Método que define o comportamento "depositar"
    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor; // O método manipula o estado do objeto
            cout << "Deposito de " << valor << " efetuado com sucesso!" << endl;
        } else {
            cout << "Valor de deposito invalido." << endl;
        }
    }
    // --- Fim do Método ---

    // Outro método (neste caso, um método de acesso / getter)
    double getSaldo() const {
        return saldo;
    }
};

int main() {
    Conta minhaConta(100.0);
    cout << "Saldo inicial: " << minhaConta.getSaldo() << " EUR" << endl;
    
    // Invocando (chamando) o método a partir do objeto instanciado
    minhaConta.depositar(50.0);
    
    cout << "Saldo atual: " << minhaConta.getSaldo() << " EUR" << endl;
    
    return 0;
}