#include <iostream>
#include <stdexcept>

using namespace std;

// Declarações de classes.
class Codigo {
private:
    int valor;
    void validar(int valor);
public:
    void set(int valor);
    int get() const;
};

class Preco {
private:
    int valor;
    void validar(int valor);
public:
    void set(int valor);
    int get() const;
};

class Pedido {
private:
    Codigo codigo;
    Preco preco;
public:
    void setCodigo(const Codigo& codigo);
    void setPreco(const Preco& preco);
    Codigo getCodigo() const;
    Preco getPreco() const;
};

// Implementações de métodos.

void Codigo::validar(int valor) {
    if (valor > 100) {
        throw invalid_argument("Valor invalido. O codigo deve ser menor ou igual a 100.");
    }
}

void Codigo::set(int valor) {
    validar(valor);
    this->valor = valor;
}

int Codigo::get() const {
    return valor;
}

void Preco::validar(int valor) {
    if (valor > 200) {
        throw invalid_argument("Valor invalido. O preco deve ser menor ou igual a 200.");
    }
}

void Preco::set(int valor) {
    validar(valor);
    this->valor = valor;
}

int Preco::get() const {
    return valor;
}

void Pedido::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
}

void Pedido::setPreco(const Preco& preco) {
    this->preco = preco;
}

Codigo Pedido::getCodigo() const {
    return codigo;
}

Preco Pedido::getPreco() const {
    return preco;
}



// Função main.

int main(){  

    int dadoA, dadoB;

    cin >> dadoA;

    cin >> dadoB;

    Codigo codigo;

    Preco preco;

    try{

        codigo.set(dadoA);

        preco.set(dadoB);

    }

    catch(invalid_argument &excecao){

        cout << "FALHA";

        return 0;

    }

    Pedido pedido;

    pedido.setCodigo(codigo);

    pedido.setPreco(preco);

    cout << pedido.getCodigo().get();

    cout << pedido.getPreco().get();

    return 0;

}

/*
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código declarando e implementando a classe Codigo.

3. Classe Codigo armazena valor se o mesmo for menor ou igual a 100.

4. Complemente o código declarando e implementando a classe Preco.

5. Classe Preco armazena valor se o mesmo for menor ou igual a 200.

6. Complemente o código declarando e implementando a classe Pedido.

7. Classe Pedido é composta por atributos que são instâncias de Codigo e Preco.

CÓDIGO

#include <iostream>

using namespace std;

// Declarações de classes.



// Implementações de métodos.



// Função main.

int main(){  

    int dadoA, dadoB;

    cin >> dadoA;

    cin >> dadoB;

    Codigo codigo;

    Preco preco;

    try{

        codigo.set(dadoA);

        preco.set(dadoB);

    }

    catch(invalid_argument &excecao){

        cout << "FALHA";

        return 0;

    }

    Pedido pedido;

    pedido.setCodigo(codigo);

    pedido.setPreco(preco);

    cout << pedido.getCodigo().get();

    cout << pedido.getPreco().get();

    return 0;

}


*/