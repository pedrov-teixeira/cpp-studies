#include <iostream>

using namespace std;

class Endereco {
     private:
     // Declarações de atributos.
     string cidade;
     string estado;
     public:    

     // Declarações de métodos.  
    Endereco(string);
    Endereco(string, string);
    string getCidade();
    string getEstado();
};

// Implementações de métodos.
Endereco::Endereco(string c) {
    cidade = c;
}

Endereco::Endereco(string c, string e) {
    cidade = c;
    estado = e;
}

string Endereco::getCidade() {
    return cidade;
}

string Endereco::getEstado() {
    return estado;
}


int main(){

    string cidade, estado;

    cin >> cidade;
    cin >> estado;    

    Endereco enderecoA(cidade);
    Endereco enderecoB(cidade, estado);   

    cout << enderecoA.getCidade();
    cout << enderecoB.getCidade();
    cout << enderecoB.getEstado();

    return 0;
}

/*  
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código declarando os atributos necessários.

3. Complemente o código declarando e implementando os métodos construtores necessários.

4. Complemente o código declarando e implementando os métodos get necessários.

CÓDIGO

#include <iostream>

using namespace std;

class Endereco {

     private:

     // Declarações de atributos.



     public:    

     // Declarações de métodos.  



};

// Implementações de métodos.



int main(){

    string cidade, estado;

    cin >> cidade;

    cin >> estado;    

    Endereco enderecoA(cidade);

    Endereco enderecoB(cidade, estado);   

    cout << enderecoA.getCidade();

    cout << enderecoB.getCidade();

    cout << enderecoB.getEstado();

    return 0;

}
*/