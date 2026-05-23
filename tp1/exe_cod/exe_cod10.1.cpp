#include <iostream>
using namespace std;

class Ponto {
private:
    double x, y;
public:
    Ponto(double x, double y) : x(x), y(y) {}
    double getX() const;
    double getY() const;
    bool operator == (const Ponto&) const;
};

inline double Ponto::getX() const {
    return x;
}

inline double Ponto::getY() const {
    return y;
}

bool Ponto::operator == (const Ponto& outro) const {
    return (this->x == outro.x && this->y == outro.y);
}

class Linha {
private:
    Ponto origem, destino;
public:
    Linha(Ponto origem, Ponto destino) : origem(origem), destino(destino) {}
    Ponto getOrigem() const;
    Ponto getDestino() const;
    bool operator == (const Linha&) const;
};

inline Ponto Linha::getOrigem() const {
    return origem;
}

inline Ponto Linha::getDestino() const {
    return destino;
}

bool Linha::operator == (const Linha& outra) const {
    return (this->origem == outra.origem && this->destino == outra.destino);
}

int main() {
    double x, y;
    
    cin >> x;
    cin >> y;
    Ponto pontoA(x,y);
    
    cin >> x;
    cin >> y;
    Ponto pontoB(x,y);
    
    cin >> x;
    cin >> y;
    Ponto pontoC(x,y);
    
    cin >> x;
    cin >> y;
    Ponto pontoD(x,y);
    
    if (pontoA == pontoB) {
        cout << "Pontos iguais";
    } else {
        cout << "Pontos diferentes";
    }
    
    if (pontoC == pontoD) {
        cout << "Pontos iguais";
    } else {
        cout << "Pontos diferentes";
    }
    
    Linha linhaA(pontoA, pontoB), linhaB(pontoC, pontoD);
    
    if (linhaA == linhaB) {
        cout << "Linhas iguais";
    } else {
        cout << "Linhas diferentes";
    }
    
    return 0;
}

/*
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código de modo a ser possível a sua compilação e execução com sucesso.

3. As classes Ponto e Linha estão codificadas como objeto valor (value object).

CÓDIGO

#include <iostream>

using namespace std;

class Ponto {
private:
    double x, y;
public:
    Ponto(double x, double y) : x(x), y(y) {}
    bool operator == (const Ponto&) const;
};

inline double Ponto::getX() const {
    return x;
}

inline double Ponto::getY() const {
    return y;
}

class Linha {
private:
    Ponto origem, destino;

public:
    Linha(Ponto origem, Ponto destino) : origem(origem), destino(destino) {}
    bool operator == (const Linha&) const;
};

inline Ponto Linha::getOrigem() const {
    return origem;
}

inline Ponto Linha::getDestino() const {
    return destino;
}

int main() {

    double x, y;

    cin >> x;
    cin >> y;

    Ponto pontoA(x,y);

    cin >> x;
    cin >> y;

    Ponto pontoB(x,y);

    cin >> x;
    cin >> y;

    Ponto pontoC(x,y);

    cin >> x;
    cin >> y;

    Ponto pontoD(x,y);

    if (pontoA == pontoB) {
        cout << "Pontos iguais";
    }else {
        cout << "Pontos diferentes";
    }

    if (pontoC == pontoD) {
        cout << "Pontos iguais";
    }else {
        cout << "Pontos diferentes";
    }

    Linha linhaA(pontoA, pontoB), linhaB(pontoC, pontoD);

    if (linhaA == linhaB) {
        cout << "Linhas iguais";
    }else {
        cout << "Linhas diferentes";
    }

    return 0;
}
*/