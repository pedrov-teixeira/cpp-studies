#include <iostream>

using namespace std;

class Ponto {
private:
    double x, y;
public:
    Ponto(double x, double y) : x(x), y(y){}
    bool operator == (const Ponto&) const;
    double getX() const;
    double getY() const;
};

bool Ponto::operator==(const Ponto& outro) const {
    return (this->x == outro.x && this->y == outro.y);
}

double Ponto::getX() const {
    return x;
}

double Ponto::getY() const {
    return y;
}

ostream& operator<<(std::ostream& os, const Ponto& ponto) {
    os << ponto.getX() ;
    os << ponto.getY() ;
    return os;
}

int main() {

    double x, y;

    cin >> x;
    cin >> y;

    Ponto pontoA(x,y);

    cin >> x;
    cin >> y;

    Ponto pontoB(x,y);

    cout << pontoA;
    cout << pontoB;

    if (pontoA == pontoB){
        cout << "iguais" ;
    }
    else {
        cout << "diferentes" ;
    }

    return 0;
}

/*
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código de modo a ser possível a sua compilação e execução com sucesso.

CÓDIGO

#include <iostream>

using namespace std;

class Ponto {
private:
    double x, y;
public:
    Ponto(double x, double y) : x(x), y(y){}
    bool operator == (const Ponto&) const;
    double getX() const;
    double getY() const;
};

ostream& operator<<(std::ostream& os, const Ponto& ponto) {
    os << ponto.getX() ;
    os << ponto.getY() ;
    return os;
}

int main() {

    double x, y;

    cin >> x;
    cin >> y;

    Ponto pontoA(x,y);

    cin >> x;
    cin >> y;

    Ponto pontoB(x,y);

    cout << pontoA;
    cout << pontoB;

    if (pontoA == pontoB){
        cout << "iguais" ;
    }
    else {
        cout << "diferentes" ;
    }

    return 0;
}
*/