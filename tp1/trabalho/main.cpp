#include <iostream>
#include "dominios.hpp"

int main(){
    Prioridade prioridade;
    Codigo codigo;
    Nome nome;
    Tempo tempo;
    Texto texto;

    std::string minhaPrioridade;
    std::string meuCodigo;
    std::string meuNome;
    int meuTempo;
    std::string meuTexto;

    std::cout << "Digite sua prioridade: ";
    std::cin >> minhaPrioridade;

    std::cout << "Digite seu codigo: ";
    std::cin >> meuCodigo;

    std::cout << "Digite seu nome: ";
    std::cin >> meuNome;

    std::cout << "Digite seu tempo: ";
    std::cin >> meuTempo;

    std::cout << "Digite seu texto: ";
    std::cin >> meuTexto;

    //CLASS PRIORIDADE - TESTE UNITARIO
    try {
        prioridade.setValor(minhaPrioridade);
        std::cout << "Sucesso: " << prioridade.getValor() << std::endl;
    }
    catch (const std:: invalid_argument& e) {
        std::cerr << "Erro de validacao: " << e.what() << std::endl;
    }

    //CLASS CODIGO - TESTE UNITARIO
    try {
        codigo.setValor(meuCodigo);
        std::cout << "Sucesso: " << codigo.getValor() << std::endl;
    }
    catch (const std:: invalid_argument& e) {
        std::cerr << "Erro de validacao: " << e.what() << std::endl;
    }

    //CLASS NOME - TESTE UNITARIO
    try {
        nome.setValor(meuNome);
        std::cout << "Sucesso: " << nome.getValor() << std::endl;
    }
    catch (const std:: invalid_argument& e) {
        std::cerr << "Erro de validacao: " << e.what() << std::endl;
    }

    //CLASS TEMPO - TESTE UNITARIO
        try {
            tempo.setValor(meuTempo);
            std::cout << "Sucesso: " << tempo.getValor() << std::endl;
        }
        catch (const std:: invalid_argument& e) {
            std::cerr << "Erro de validacao: " << e.what() << std::endl;
        }

    //CLASS TEXTO - TESTE UNITARIO
        try {
            texto.setValor(meuTexto);
            std::cout << "Sucesso: " << texto.getValor() << std::endl;
        }
        catch (const std:: invalid_argument& e) {
            std::cerr << "Erro de validacao: " << e.what() << std::endl;
        }

    return 0;
}