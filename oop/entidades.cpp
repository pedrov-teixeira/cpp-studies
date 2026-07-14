#include <iostream>
// Assuma que as classes de domínio Nome, Email e Senha 
// já foram definidas anteriormente com suas regras de validação.
#include "dominios.hpp" 

using namespace std;

// Classe Entidade
class Pessoa {
private:
    // A entidade agrega (é composta por) múltiplos objetos de domínio
    Nome nome;
    Email email; // Identificador único desta entidade
    Senha senha;

public:
    // Métodos para acessar e modificar os domínios
    void setNome(const Nome& novoNome) {
        this->nome = novoNome;
    }
    Nome getNome() const {
        return nome;
    }

    void setEmail(const Email& novoEmail) {
        this->email = novoEmail;
    }
    Email getEmail() const {
        return email;
    }

    void setSenha(const Senha& novaSenha) {
        this->senha = novaSenha;
    }
    Senha getSenha() const {
        return senha;
    }
};