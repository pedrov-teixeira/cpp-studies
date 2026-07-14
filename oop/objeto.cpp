#include <iostream>
#include <string>

using namespace std;

// A Classe: é o modelo, o molde.
class Projeto {
private:
    string nome;

public:
    void setNome(const string& n) {
        nome = n;
    }
    string getNome() const {
        return nome;
    }
};

int main() {
    // Instanciação: criando objetos a partir da classe
    Projeto projetoFBD; // 'projetoFBD' é um objeto!
    Projeto projetoTP1; // 'projetoTP1' é outro objeto distinto!

    // Cada objeto tem seu próprio estado na memória
    projetoFBD.setNome("Sistema de Banco de Dados");
    projetoTP1.setNome("Sistema de Gestao");

    cout << "Objeto 1: " << projetoFBD.getNome() << endl;
    cout << "Objeto 2: " << projetoTP1.getNome() << endl;

    return 0;
}