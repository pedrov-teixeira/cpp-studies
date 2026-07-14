#include <iostream>
#include <string>

using namespace std;

class Estudante {
private:
    // --- Atributos de Instância ---
    // Cada objeto da classe Estudante terá a sua própria cópia destas variáveis
    int matricula;
    string nome;

public:
    // Construtor
    Estudante(int mat, const string& n) {
        matricula = mat;
        nome = n;
    }

    void exibir() const {
        cout << "Matricula: " << matricula << " | Nome: " << nome << endl;
    }
};

int main() {
    // Instanciamos dois objetos diferentes
    Estudante aluno1(101, "Ana Silva");
    Estudante aluno2(102, "Bruno Costa");

    // Como são atributos de instância, os dados de aluno1 não afetam o aluno2
    aluno1.exibir(); // Saída: Matricula: 101 | Nome: Ana Silva
    aluno2.exibir(); // Saída: Matricula: 102 | Nome: Bruno Costa

    return 0;
}