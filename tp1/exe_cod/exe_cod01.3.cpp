#include <iostream>

using namespace std;

class Nome {
     private:
          // Declaração de atributo.
          string valor;
     public:
          void set(string);
          string get();

};

class Matricula {
     private:
          // Declaração de atributo.
          int valor;
     public:
          void set(int);
          int get();    
};

class Estudante {
     private:
          // Declarações de atributos.
          Nome nome;
          Matricula matricula;
     public:
          Estudante(Nome&, Matricula&);
          Nome getNome();
          Matricula getMatricula();
};

// Implementações de métodos.
void Nome::set(string n){
    valor = n;
}

string Nome::get(){
    return valor;
}

void Matricula::set(int m){
    valor = m;
}

int Matricula::get(){
    return valor;
}

Estudante::Estudante(Nome& n, Matricula& m){
    nome = n;
    matricula = m;
}

Nome Estudante::getNome(){
    return nome;
}

Matricula Estudante::getMatricula(){
    return matricula;
}

int main(){
     string dadoA;
     int dadoB;  

     cin >> dadoA;
     cin >> dadoB;

     Nome nome;
     Matricula matricula;

     nome.set(dadoA);
     matricula.set(dadoB);

     Estudante estudante(nome, matricula);

     cout << estudante.getNome().get();
     cout << estudante.getMatricula().get();

     return 0;
}

/*INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Para cada classe, complemente o código declarando os atributos necessários.

3. Para cada classe, complemente o código implementando os métodos necessários.

CÓDIGO

#include <iostream>

using namespace std;

class Nome {

     private:

          // Declaração de atributo.



     public:

          void set(string);

          string get();

};

class Matricula {

     private:

          // Declaração de atributo.



     public:

          void set(int);

          int get();    

};

class Estudante {

     private:

          // Declarações de atributos.



     public:

          Estudante(Nome&, Matricula&);

          Nome getNome();

          Matricula getMatricula();

};

// Implementações de métodos.



int main(){

     string dadoA;

     int dadoB;  

     cin >> dadoA;

     cin >> dadoB;

     Nome nome;

     Matricula matricula;

     nome.set(dadoA);

     matricula.set(dadoB);

     Estudante estudante(nome, matricula);

     cout << estudante.getNome().get();

     cout << estudante.getMatricula().get();

     return 0;

}*/