#include <iostream>
#include <string>
#include <stdexcept>
#include "dominios.hpp"

using namespace std;

int main()
{
    // Teste de Estado
    Estado *estado = new Estado();
    string estadoDigitado;

    cout << "\nDigite o estado para verificacao: ";
    getline(cin, estadoDigitado);

    try{
        estado->setEstado(estadoDigitado);
        cout << "Deu bom! O valor do estado foi armazenado: " << estado->getEstado() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what();
    }

    delete estado;

    // Teste de Papel
    Papel *papel = new Papel();
    string papelDigitado;

    cout << "\nDigite o papel para verificacao: ";
    getline(cin, papelDigitado);

    try{
        papel->setPapel(papelDigitado);
        cout << "Deu bom! O valor do papel foi armazenado: " << papel->getPapel() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what();
    }

    delete papel;

    // Teste de Data
    Data *data = new Data();
    string dataDigitada;

    cout << "\nDigite a data para verificacao (DD/MM/ANO): ";
    getline(cin, dataDigitada);

    try{
        data->setData(dataDigitada);
        cout << "Deu bom! O valor da data foi armazenado: " << data->getData() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what() << endl;
    }

    delete data;

    // Teste de Email
    Email *email = new Email();
    string emailDigitado;

    cout << "\nDigite o email para verificacao (parte-local@domínio): ";
    getline(cin, emailDigitado);

    try{
        email->setEmail(emailDigitado);
        cout << "Deu bom! O valor do email foi armazenado: " << email->getEmail() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what() << endl;
    }

    delete email;

    // Teste de Senha
    Senha *senha = new Senha();
    string senhaDigitada;

    cout << "\nDigite a senha para verificacao: ";
    getline(cin, senhaDigitada);

    try{
        senha->setSenha(senhaDigitada);
        cout << "Deu bom! O valor da senha foi armazenado: " << senha->getSenha() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what() << endl;
    }

    delete senha;
    
    //Teste de Prioridade
    Prioridade *prioridade = new Prioridade();
    string prioridadeDigitada;

    cout << "\nDigite a prioridade para verificacao: ";
    getline(cin, prioridadeDigitada);

    try{
        prioridade->setPrioridade(prioridadeDigitada);
        cout << "Deu bom! O valor de prioridade foi armazenado: " << prioridade->getPrioridade() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what();
    }

    delete prioridade;

    //Teste de Codigo
    Codigo *codigo = new Codigo();
    string codigoDigitado;

    cout << "\nDigite o codigo para verificacao: ";
    getline(cin, codigoDigitado);

    try{
        codigo->setCodigo(codigoDigitado);
        cout << "Deu bom! O valor de codigo foi armazenado: " << codigo->getCodigo() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what();
    }

    delete codigo;

    //Teste de Nome
    Nome *nome = new Nome();
    string nomeDigitado;

    cout << "\nDigite o nome para verificacao: ";
    getline(cin, nomeDigitado);

    try{
        nome->setNome(nomeDigitado);
        cout << "Deu bom! O valor de nome foi armazenado: " << nome->getNome() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what();
    }

    delete nome;

    //Teste de tempo
    Tempo *tempo = new Tempo();
    int tempoDigitado;

    cout << "\nDigite o tempo para verificacao: ";
    cin >> tempoDigitado;

    try{
        tempo->setTempo(tempoDigitado);
        cout << "Deu bom! O valor de tempo foi armazenado: " << tempo->getTempo() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what();
    }

    delete tempo;

    //Teste de texto
    Texto *texto = new Texto();
    string textoDigitado;

    cout << "\nDigite o texto para verificacao: ";
    getline(cin, textoDigitado);

    try{
        texto->setTexto(textoDigitado);
        cout << "Deu bom! O valor de texto foi armazenado: " << texto->getTexto() << "!!" << endl;
    }
    catch(invalid_argument &ex){
        cout << ex.what();
    }

    delete texto;

    return 0;
}
