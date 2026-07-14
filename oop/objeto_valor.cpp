#include <iostream>
#include <string>

using namespace std;

// Classe que representa um Objeto Valor
class Data {
private:
    string valor;

public:
    Data(const string& v) : valor(v) {}

    string getValor() const {
        return valor;
    }

    // A igualdade de um objeto valor baseia-se exclusivamente no seu conteúdo
    bool operator==(const Data& outro) const {
        return this->valor == outro.getValor();
    }
};

int main() {
    // Instanciamos dois objetos diferentes na memória
    Data inicioProjeto("15/10/2023");
    Data fimFaseUm("15/10/2023");

    // Como são objetos valor, se o conteúdo for igual, eles são idênticos para a lógica do negócio
    if (inicioProjeto == fimFaseUm) {
        cout << "As datas sao exatamente iguais! O que importa e o valor armazenado." << endl;
    }

    return 0;
}