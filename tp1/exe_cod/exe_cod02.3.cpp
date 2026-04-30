#include <iostream>
#include <cmath>

using namespace std;

class Cilindro {
private:
    double raio;
    double altura;
    const double PI = acos(-1.0);

public:
    Cilindro(double r = 1.0, double a = 1.0) : raio(r), altura(a) {}
    double getRaio() const;
    double getAltura() const;
    double calcularVolume() const;
    double calcularAreaLateral() const;
    double calcularAreaSuperficieTotal() const;
};

double Cilindro::getRaio() const{
    return raio;
}

double Cilindro::getAltura() const{
    return altura;  
}

double Cilindro::calcularVolume() const{
    return PI * raio * raio * altura;
}

double Cilindro::calcularAreaLateral() const{
    return 2 * PI * raio * altura;
}

inline double Cilindro::calcularAreaSuperficieTotal() const {
    return calcularAreaLateral() + (2 * PI * pow(raio, 2));
}

int main() {
    double raio, altura;

    cin >> raio;
    cin >> altura;

    Cilindro cilindro(raio, altura);

    cout << cilindro.getRaio();
    cout << cilindro.getAltura();
    cout << cilindro.calcularVolume();
    cout << cilindro.calcularAreaLateral();
    cout << cilindro.calcularAreaSuperficieTotal();

    return 0;
}

/*
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código de modo a ser possível a sua compilação e execução com sucesso.

3. Volume de um cilindro é igual a PI x raio x raio x altura.

4. Área lateral de um cilindro é igual a 2 x PI x raio x altura.

CÓDIGO

#include <iostream>
#include <cmath>

using namespace std;

class Cilindro {
private:
    double raio;
    double altura;
    const double PI = acos(-1.0);

public:
    Cilindro(double r = 1.0, double a = 1.0) : raio(r), altura(a) {}
    double getRaio() const;
    double getAltura() const;
    double calcularVolume() const;
    double calcularAreaLateral() const;
};

inline double Cilindro::calcularAreaSuperficieTotal() const {
    return calcularAreaLateral() + (2 * PI * pow(raio, 2));
}

int main() {

    cin >> raio;
    cin >> altura;

    Cilindro cilindro(raio, altura);

    cout << cilindro.getRaio();
    cout << cilindro.getAltura();
    cout << cilindro.calcularVolume();
    cout << cilindro.calcularAreaLateral();
    cout << cilindro.calcularAreaSuperficieTotal();

    return 0;
}
*/