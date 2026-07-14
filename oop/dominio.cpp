#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

// Classe de Domínio
class Senha {
private:
    string valor; // Dado primitivo encapsulado

    // Método privado de validação (regra de negócio)
    void validar(const string& valorProposto) {
        if (valorProposto.length() != 6) {
            throw invalid_argument("A senha deve conter exatamente 6 caracteres.");
        }
    }

public:
    // O construtor ou método de atribuição sempre valida o dado antes de salvar
    void setValor(const string& novoValor) {
        validar(novoValor); // Se for inválido, lança a exceção e aborta a atribuição
        this->valor = novoValor;
    }

    string getValor() const {
        return valor;
    }
};

int main() {
    Senha minhaSenha;
    
    try {
        minhaSenha.setValor("123456"); // Válido
        cout << "Senha configurada com sucesso!" << endl;
        
        minhaSenha.setValor("123"); // Inválido: lançará uma exceção
    } catch (invalid_argument &e) {
        cout << "Erro ao configurar senha: " << e.what() << endl;
    }

    return 0;
}