#include <iostream>
#include <string>

using namespace std;

// Definição da classe
class Pessoa {
private:
    // Atributos (estado / dados da classe)
    string nome;

public:
    // Métodos (comportamento / operações da classe)
    void setNome(const string& novoNome) {
        nome = novoNome;
    }

    string getNome() const {
        return nome;
    }
};

int main() {
    // Instanciando um objeto a partir da classe Pessoa
    Pessoa estudante; 
    estudante.setNome("João");
    
    cout << "Nome do estudante: " << estudante.getNome() << endl;
    
    return 0;
}