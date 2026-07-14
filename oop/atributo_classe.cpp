#include <iostream>
#include <string>

using namespace std;

class Projeto {
private:
    // Atributo de Instância (cada projeto tem o seu próprio nome)
    string nome;

    // --- Atributo de Classe ---
    // (Partilhado por TODOS os projetos instanciados)
    static int totalProjetos;

public:
    // Construtor
    Projeto(const string& n) {
        nome = n;
        totalProjetos++; // Incrementa a contagem global sempre que um objeto é criado
    }

    // Método de classe para aceder ao atributo de classe
    static int getTotalProjetos() {
        return totalProjetos;
    }

    string getNome() const {
        return nome;
    }
};

// Em C++, os atributos de classe não constantes precisam de ser inicializados globalmente fora da classe
int Projeto::totalProjetos = 0;

int main() {
    // Podemos aceder ao atributo de classe mesmo sem ter criado qualquer objeto!
    cout << "Total de projetos inicial: " << Projeto::getTotalProjetos() << endl;

    // Instanciamos dois objetos
    Projeto p1("Modulo de Autenticacao");
    Projeto p2("Modulo de Dados");

    // Ambos partilharam e alteraram a mesma variável global da classe
    cout << "Total de projetos atual: " << Projeto::getTotalProjetos() << endl; 
    // Saída será 2

    return 0;
}