#include <iostream>

using namespace std;

class Rectangulo {
private:
    double largura;
    double altura;
public:
    void setLargura(double l);
    void setAltura(double a);

    double getLargura() const;
    double getAltura() const;
    double calcularArea() const;
    double calcularPerimetro() const;
};

inline void Rectangulo::setLargura(double l){
    largura = (l > 0) ? l : 1.0;
}

inline void Rectangulo::setAltura(double a){
    this->altura = (a > 0) ? a : 1.0;
}

double Rectangulo::getLargura() const{
    return largura;
}

double Rectangulo::getAltura() const{
    return altura;
}

double Rectangulo::calcularArea() const{
    return largura * altura;
}

double Rectangulo::calcularPerimetro() const{
    return 2 * (largura + altura);
}

int main() {
    Rectangulo a;
    double largura, altura;

    cin >> largura;
    cin >> altura;

    a.setLargura(largura);
    a.setAltura(altura);

    cout << a.getLargura();
    cout << a.getAltura();
    cout << a.calcularArea();
    cout << a.calcularPerimetro();

    return 0;
}

/*
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código de modo a ser possível a sua compilação e execução com sucesso.

3. Área de retângulo é igual a largura x altura.

4. Perímetro de retângulo é igual a 2 x (largura + altura).

CÓDIGO

#include <iostream>

using namespace std;

class Rectangulo {
private:
    double largura;
    double altura;
public:
    double getLargura() const;
    double getAltura() const;
    double calcularArea() const;
    double calcularPerimetro() const;
};

inline void Rectangulo::setLargura(double l){
    largura = (l > 0) ? l : 1.0;
}

inline void Rectangulo::setAltura(double a){
    this->altura = (a > 0) ? a : 1.0;
}

int main() {

    double largura, altura;

    cin >> largura;
    cin >> altura;

    a.setLargura(largura);
    a.setAltura(altura);

    cout << a.getLargura();
    cout << a.getAltura();
    cout << a.calcularArea();
    cout << a.calcularPerimetro();

    return 0;
}
*/