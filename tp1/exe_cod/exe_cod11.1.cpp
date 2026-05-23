#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Senha {
private:
    string valor;
    bool validar(const string&) const;
public:
    Senha(const string&);
    bool operator==(const Senha&) const;
    string getValor() const; 
};

Senha::Senha(const string& valor) {
    if (!validar(valor)) {
        throw invalid_argument("Senha invalida");
    }
    this->valor = valor;
}

// Implementação da validação
bool Senha::validar(const string& v) const {
    if (v.length() != 6) {
        return false;
    }
    
    bool digitosVistos[10] = {false};
    
    for (char c : v) {
        if (c < '1' || c > '9') {
            return false; 
        }
        
        int digito = c - '0';
        
        if (digitosVistos[digito]) {
            return false;
        }
        digitosVistos[digito] = true;
    }
    
    return true;
}

bool Senha::operator==(const Senha& outra) const {
    return this->valor == outra.valor;
}

inline string Senha::getValor() const {
    return valor;
}

int main() {
    string valorA, valorB;
    cin >> valorA;
    cin >> valorB;
    
    try {
        Senha senhaA(valorA);
        Senha senhaB(valorB);
        if(senhaA == senhaB){
            cout << "Senhas iguais";
        } else {
            cout << "Senhas diferentes";
        }
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    
    return 0;
}

/*
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código de modo a ser possível a sua compilação e execução com sucesso.

3. A classe Senha está codificada como objeto valor (value object).

Regras para validação de formato de senha:

Senha é composta por 6 dígitos
Não podem existir dígitos repetidos.
Não pode existir o dígito zero.
CÓDIGO

#include <iostream>
#include <string>
#include <stdexcept>


using namespace std;

class Senha {
private:
    string valor;
    bool validar(const string&) const;
public:
    Senha(const string&);
    bool operator==(const Senha&) const;
};

Senha::Senha(const string& valor) {
    if (!validar(valor)) {
        throw invalid_argument("Senha invalida");
    }
    this->valor = valor;
}

inline string Senha::getValor() const {
    return valor;
}

int main() {

    string valorA, valorB;

    cin >> valorA;
    cin >> valorB;

    try {

        Senha senhaA(valorA);
        Senha senhaB(valorB);

        if(senhaA == senhaB){
            cout << "Senhas iguais";
        } else {
            cout << "Senhas diferentes";
        }

    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
*/