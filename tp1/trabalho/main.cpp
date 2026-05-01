#include <iostream>
#include "dominios.hpp"
using namespace std;

int main(){
    Prioridade prioridade;
    Codigo codigo;
    Nome nome;
    Tempo tempo;
    Texto texto;

    string minhaPrioridade;
    string meuCodigo;
    string meuNome;
    int meuTempo;
    string meuTexto;

    cout << "Digite sua prioridade: ";
    cin >> minhaPrioridade;

    cout << "Digite seu codigo: ";
    cin >> meuCodigo;

    cout << "Digite seu nome: ";
    getline(cin >> ws, meuNome);

    cout << "Digite seu tempo: ";
    cin >> meuTempo;

    cout << "Digite seu texto: ";
    getline(cin >> ws, meuTexto);

    //CLASS PRIORIDADE - TESTE UNITARIO
    try {
        prioridade.setValor(minhaPrioridade);
        cout << "Sucesso: " << prioridade.getValor() << endl;
    }
    catch (const  invalid_argument& e) {
        cerr << "Erro de validacao: " << e.what() << endl;
    }

    //CLASS CODIGO - TESTE UNITARIO
    try {
        codigo.setValor(meuCodigo);
        cout << "Sucesso: " << codigo.getValor() << endl;
    }
    catch (const  invalid_argument& e) {
        cerr << "Erro de validacao: " << e.what() << endl;
    }

    //CLASS NOME - TESTE UNITARIO
    try {
        nome.setValor(meuNome);
        cout << "Sucesso: " << nome.getValor() << endl;
    }
    catch (const  invalid_argument& e) {
        cerr << "Erro de validacao: " << e.what() << endl;
    }

    //CLASS TEMPO - TESTE UNITARIO
        try {
            tempo.setValor(meuTempo);
            cout << "Sucesso: " << tempo.getValor() << endl;
        }
        catch (const  invalid_argument& e) {
            cerr << "Erro de validacao: " << e.what() << endl;
        }

    //CLASS TEXTO - TESTE UNITARIO
        try {
            texto.setValor(meuTexto);
            cout << "Sucesso: " << texto.getValor() << endl;
        }
        catch (const  invalid_argument& e) {
            cerr << "Erro de validacao: " << e.what() << endl;
        }

    return 0;
}