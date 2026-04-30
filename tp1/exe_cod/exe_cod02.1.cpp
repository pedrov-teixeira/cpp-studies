#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Cubo {
private:
    double aresta;
public:
    void setAresta(double);
    double getAresta() const;
    double calcularVolume() const;
    double calcularAreaSuperficie() const;
    double calcularAreaSuperficieLateral() const;
    double calcularDiagonal() const;
};

void Cubo::setAresta(double a) {
    if (a <= 0) {
            aresta = 1.0;
    } else {
            aresta = a;
    }
}

double Cubo::getAresta() const{
    return aresta;
}

double Cubo::calcularVolume()const{
    return aresta * aresta * aresta;
}

double Cubo::calcularAreaSuperficie() const{
    return 6 * aresta * aresta;
}

double Cubo::calcularAreaSuperficieLateral() const {
    return 4 * pow(aresta, 2);
}

double Cubo::calcularDiagonal() const {
    return aresta * sqrt(3.0);
}

int main() {

    Cubo a;
    double arestaInput;

    cin >> arestaInput;

    a.setAresta(arestaInput);

    cout << a.getAresta();
    cout << a.calcularVolume();
    cout << a.calcularAreaSuperficie();
    cout << a.calcularAreaSuperficieLateral();
    cout << a.calcularDiagonal();

    return 0;
}

/*
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código de modo a ser possível a sua compilação e execução com sucesso.

3. Volume de um cubo é igual a aresta x aresta x aresta.

4. Área da superfície de um cubo é igual a 6 x aresta x aresta.

CÓDIGO

#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Cubo {
private:
    double aresta;
public:
    void setAresta(double);
    double getAresta() const;
    double calcularVolume() const;
    double calcularAreaSuperficie() const;
};

void Cubo::setAresta(double a) {
    if (a <= 0) {
            aresta = 1.0;
    } else {
            aresta = a;
    }
}

double Cubo::calcularAreaSuperficieLateral() const {
    return 4 * pow(aresta, 2);
}

double Cubo::calcularDiagonal() const {
    return aresta * sqrt(3.0);
}

int main() {

    Cubo a;

    cin >> aresta;

    a.setAresta(aresta);

    cout << a.getAresta();
    cout << a.calcularVolume();
    cout << a.calcularAreaSuperficie();
    cout << a.calcularAreaSuperficieLateral();
    cout << a.calcularDiagonal();

    return 0;
}
*/