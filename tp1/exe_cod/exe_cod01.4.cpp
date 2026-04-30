#include <iostream>

using namespace std;

class Estudante {
     private:
     // Declarações de atributos.
     string nome;
     static int contador;
     public:    
          Estudante(string);
          static int getContador();
          string getNome();

};

// Implementações de métodos.
Estudante::Estudante(string n) {
    nome = n;
    contador++;
}


int Estudante::getContador(){
    return contador;
}

string Estudante::getNome() {
    return nome;
}


int Estudante::contador = 0;

int main(){
     string nomeA, nomeB;   

     cin >> nomeA;
     cin >> nomeB;
     cout << Estudante::getContador();

     Estudante estudanteA(nomeA);

     cout << Estudante::getContador();
     cout << estudanteA.getNome();  

     Estudante estudanteB(nomeB);    

     cout << Estudante::getContador();
     cout << estudanteB.getNome();  

     return 0;
}

/* INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código declarando os atributos.

3. Complemente o código implementando o método construtor necessário.

4. Complemente o código implementando método get que retorne o valor do atributo nome.

5. Complemente o código implementando método get que retorne o número de instâncias criadas de Estudante.

6. Em tempo de execução, o valor do atributo contador deve ser igual ao número de instâncias de Estudante.

CÓDIGO

#include <iostream>

using namespace std;

class Estudante {

     private:

     // Declarações de atributos.



     public:    

          Estudante(string);

          static int getContador();

          string getNome();

};

// Implementações de métodos.



int Estudante::contador = 0;

int main(){

     string nomeA, nomeB;   

     cin >> nomeA;

     cin >> nomeB;

     cout << Estudante::getContador();

     Estudante estudanteA(nomeA);

     cout << Estudante::getContador();

     cout << estudanteA.getNome();  

     Estudante estudanteB(nomeB);    

     cout << Estudante::getContador();

     cout << estudanteB.getNome();  

     return 0;

} */