#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.
class Poligono {
    protected:
        int numero_lados;
    public:
        int getNumeroLados() const;
};

int Poligono::getNumeroLados() const{
    return numero_lados;
}

// Declaração e implementação da classe Retangulo.
class Retangulo : public Poligono{
    private:
        float base;
        float altura;
    public:
        Retangulo(float base, float altura){
            this->base = base;
            this->altura = altura;
            this->numero_lados = 4;
        }

    float calcularArea() const{
        return base * altura;
    }

    float calcularPerimetro() const{
        return 2 * (base + altura);
    }
};


// Implementação de método main.

int main() {

     float base, altura;   

     cin >> base;
     cin >> altura;

     Retangulo retangulo(base, altura);

     cout << retangulo.getNumeroLados();
     cout << retangulo.calcularArea();
     cout << retangulo.calcularPerimetro();

     return 0;
}

/*
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Implemente o método da classe Poligono.

3. Declare a classe Retangulo e implemente os seus métodos.

4. Retângulo consiste de polígono com quatro lados.

5. A área de um retângulo é calculada pela fórmula: Area = base × altura

6. O perímetro de um retângulo é calculado pela fórmula: Perimetro = 2 x (base + altura)

CÓDIGO

#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.

class Poligono {

protected:

     int numero_lados;

public:

     int getNumeroLados() const;

};

// Declaração e implementação da classe Retangulo.



// Implementação de método main.

int main() {

     float base, altura;   

     cin >> base;

     cin >> altura;

     Retangulo retangulo(base, altura);

     cout << retangulo.getNumeroLados();

     cout << retangulo.calcularArea();

     cout << retangulo.calcularPerimetro();

     return 0;

}
*/