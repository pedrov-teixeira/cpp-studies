#include "dominios.hpp"
#include <cctype> // Para isalpha, isdigit, isupper
#include <string>
using namespace std;

//Class Prioridade
void Prioridade::validar(string valor){
    if (valor != "ALTA" && valor != "MEDIA" && valor != "BAIXA"){
        throw invalid_argument("Prioridade invalida. Use ALTA, MEDIA ou BAIXA.");
    }
}

void Prioridade::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

string Prioridade::getValor() const {
    return valor;
}

//Class Codigo
void Codigo::validar(string valor){
    if (valor.length() != 5) {
        throw invalid_argument("Código deve ter 5 caracteres.");
    }

    for (int i = 0; i < 2; i++) {
        if (!isupper(valor[i])) {
            throw invalid_argument("Os dois primeiros caracteres devem ser letras maiuscular");
        }
    }

    for (int i = 2; i < 5; i++) {
        if (!isdigit(valor[i])) {
            throw invalid_argument("Os tres ultimos caracteres devem ser numeros.");
        }
    }
}

void Codigo::setValor( string valor) {
    validar(valor);
    this->valor = valor;
}

string Codigo::getValor() const {
    return valor;
}

//Class Nome
void Nome::validar(string valor){
    if (valor.length() == 0 || valor.length() > 10) {
        throw invalid_argument("O nome deve ter entre 1 e 10 caracteres.");
    }

    if (valor[0] == ' ') {
        throw invalid_argument("O primeiro digito nao pode ser espaco.");
    }

    if (valor[valor.length() - 1] == ' ') {
        throw invalid_argument("O ultimo caractere nao pode ser espaco");
    }

    for (size_t i = 0; i < valor.length(); i++) {
        if (!isalpha(valor[i]) && valor[i] != ' ') {
            throw invalid_argument("Caracter pode ser letra maiuscula (A-Z), letra minuscula (a-z) ou espaco em branco");
        }

        if (valor[i] == ' ') {
            if (i < valor.length() - 1){
                if (!isalpha(valor[i + 1])) {
                    throw invalid_argument("Espaco em branco deve ser seguido por letra.");
                }
            }
        }
    }
}

void Nome::setValor( string valor) {
    validar(valor);
    this->valor = valor;
}

string Nome::getValor() const {
    return valor;
}

//CLASS TEMPO
void Tempo::validar(int valor) {
    if (valor < 1 || valor > 365) {
        throw invalid_argument("O valor deve ser entre 1 a 365.");
    }
}

void Tempo::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}

int Tempo::getValor() const {
    return valor;
}

//CLASS TEXTO
void Texto::validar(string valor) {
    if (valor.length() == 0 || valor.length() > 40) {
        throw invalid_argument("O texto deve ter entre 1 a 40 caracteres.");
    }

    if (valor[0] == ',' || valor[0] =='.' || valor[0] == ' ') {
        throw invalid_argument("Primeiro caracter nao pode ser virgula, ponto ou espaco em branco.");
    }

    if (valor[valor.length() - 1] == ',' || valor[valor.length() - 1] == '.' || valor[valor.length() - 1] == ' ') {
        throw invalid_argument("Ultimo caracter nao pode ser virgula, ponto ou espaco em branco.");
    }   

    for (size_t i = 0; i < valor.length(); i++) {
        if (!isalnum(valor[i]) && valor[i] != ',' && valor[i] != '.' && valor[i] != ' ') {
            throw invalid_argument("Caracter pode ser letra (a-z ou A-Z), digito(0-9), virgula, ponto ou espaco em branco.");
        }

        if (i < valor.length() - 1){
            if (valor[i] == ',' || valor[i] == '.') {
                if(valor[i + 1] == ',' || valor[i + 1] == '.') {
                    throw invalid_argument("Vírgula não pode ser seguida por vírgula ou ponto e ponto não pode ser seguido por vírgula ou ponto.");
                }
            }

            if (valor[i] == ' ') {
                if (!isalnum(valor[i + 1])) {
                    throw invalid_argument("Espaco em branco deve ser seguido por letra ou digito.");
                }
            }
        }   
    }
}

void Texto::setValor(string valor) {
    validar(valor);
    this->valor = valor;
}

string Texto::getValor() const {
    return valor;
}