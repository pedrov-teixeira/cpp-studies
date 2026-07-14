#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Codigo {
private:
    // O dado está encapsulado (oculto do exterior)
    string valor;

public:
    // Interface pública para acessar o dado
    string getValor() const {
        return valor;
    }

    // Interface pública para modificar o dado com segurança
    void setValor(const string& novoValor) {
        if (novoValor.length() != 5) {
            throw invalid_argument("O código deve ter exatamente 5 caracteres.");
        }
        valor = novoValor;
    }
};