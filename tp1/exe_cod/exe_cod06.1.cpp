#include <iostream>
#include <stdexcept>

using namespace std;

class Matriz {
private:
    unsigned int linhas, colunas;
    double** dados;
public:
    Matriz(unsigned int linhas, unsigned int colunas);
    ~Matriz();

    Matriz(const Matriz& other);

    Matriz operator+(const Matriz&) const;
    Matriz operator-(const Matriz&) const;

    Matriz operator*(const Matriz& matriz) const;
    double& operator()(unsigned int l, unsigned int c) const;
    friend ostream& operator<<(ostream& os, const Matriz& matriz);
};

Matriz::Matriz(unsigned int linhas, unsigned int colunas) : linhas(linhas), colunas(colunas) {
    dados = new double*[linhas];
    for (unsigned int i = 0; i < linhas; i++) {
        dados[i] = new double[colunas];
        for (unsigned int j = 0; j < colunas; j++) {
            dados[i][j] = 0;
        }
    }
}

Matriz::~Matriz() {
    if (dados != nullptr) {
        for (unsigned int i = 0; i < linhas; ++i) {
            delete[] dados[i];
        }
        delete[] dados;
    }
}

double& Matriz::operator()(unsigned int l, unsigned int c) const {
    return dados[l][c];
}

Matriz Matriz::operator+(const Matriz& matriz) const {
    if (linhas != matriz.linhas || colunas != matriz.colunas) {
        throw invalid_argument("Tamanho incompativel.");
    }
    
    Matriz resultado(linhas, colunas);
    for (unsigned int i = 0; i < linhas; ++i) {
        for (unsigned int j = 0; j < colunas; ++j) {
            resultado.dados[i][j] = dados[i][j] + matriz.dados[i][j];
        }
    }
    return resultado;
}

Matriz Matriz::operator-(const Matriz& matriz) const {
    if (linhas != matriz.linhas || colunas != matriz.colunas) {
        throw invalid_argument("Tamanho incompativel.");
    }
    
    Matriz resultado(linhas, colunas);
    for (unsigned int i = 0; i < linhas; ++i) {
        for (unsigned int j = 0; j < colunas; ++j) {
            resultado.dados[i][j] = dados[i][j] - matriz.dados[i][j];
        }
    }
    return resultado;
}

Matriz Matriz::operator*(const Matriz& matriz) const {
    if (colunas != matriz.linhas)
        throw invalid_argument("Tamanho incompativel.");

    Matriz resultado(linhas, matriz.colunas);

    for (unsigned int i = 0; i < linhas; ++i) {
        for (unsigned int j = 0; j < matriz.colunas; ++j) {
            for (unsigned int k = 0; k < colunas; ++k) {
                    resultado.dados[i][j] += dados[i][k] * matriz.dados[k][j];
            }
        }
    }
    return resultado;
}

ostream& operator<<(ostream& os, const Matriz& matriz) {
    for (unsigned int i = 0; i < matriz.linhas; ++i) {
        for (unsigned int j = 0; j < matriz.colunas; ++j) {
            os << matriz.dados[i][j] << " ";
        }
    }
    return os;
}

int main() {
    try {
        Matriz m1(2, 2), m2(2,2);

        cin >> m1(0,0) >> m1(0,1) >> m1(1,0) >> m1(1,1);
        cin >> m2(0,0) >> m2(0,1) >> m2(1,0) >> m2(1,1);

        cout << (m1 + m2);
        cout << (m1 - m2);
        cout << (m1 * m2);

    } catch (const exception& e) {
        cerr << "Erro: " << e.what() << endl;
    }
    return 0;
}

/*
INSTRUÇÕES

1. Copie o código para a área de resposta.

2. Complemente o código de modo a ser possível a sua compilação e execução com sucesso.

3. Para somar duas matrizes A e B, cada elemento de A é somado ao elemento na mesma posição em B.

4. A seguinte fórmula descreve a soma de duas matrizes: C(i,j) = A(i,j) + B(i,j)

5. Para subtrair duas matrizes A e B, cada elemento de A é subtraído do elemento na mesma posição em B.

6. A seguinte fórmula descreve a subtração de duas matrizes: C(i,j) = A(i,j) - B(i,j)

7. Para somar duas matrizes, as duas matrizes devem ter o mesmo número de linhas e colunas.

8. Para subtrair duas matrizes, as duas matrizes devem ter o mesmo número de linhas e colunas.

9. Deve ser lançada a exceção invalid_argument se matrizes forem de tamanhos incompatíveis à operação solicitada.

CÓDIGO

#include <iostream>
#include <stdexcept>

using namespace std;

class Matriz {
private:
    unsigned int linhas, colunas;
    double** dados;
public:
    Matriz operator+(const Matriz&) const;
    Matriz operator-(const Matriz&) const;
};

Matriz::Matriz(unsigned int linhas, unsigned int colunas) : linhas(linhas), colunas(colunas) {
    dados = new double*[linhas];
    for (unsigned int i = 0; i < linhas; i++) {
        dados[i] = new double[colunas];
        for (unsigned int j = 0; j < colunas; j++) {
            dados[i][j] = 0;
        }
    }
}

Matriz::~Matriz() {
    if (dados != nullptr) {
        for (unsigned int i = 0; i < linhas; ++i) {
            delete[] dados[i];
        }
        delete[] dados;
    }
}

double& Matriz::operator()(unsigned int l, unsigned int c) const {
    return dados[l][c];
}

Matriz Matriz::operator*(const Matriz& matriz) const {
    if (colunas != matriz.linhas)
        throw invalid_argument("Tamanho incompativel.");

    Matriz resultado(linhas, matriz.colunas);

    for (unsigned int i = 0; i < linhas; ++i) {
        for (unsigned int j = 0; j < matriz.colunas; ++j) {
            for (unsigned int k = 0; k < colunas; ++k) {
                    resultado.dados[i][j] += dados[i][k] * matriz.dados[k][j];
            }
        }
    }
    return resultado;
}

ostream& operator<<(ostream& os, const Matriz& matriz) {
    for (unsigned int i = 0; i < matriz.linhas; ++i) {
        for (unsigned int j = 0; j < matriz.colunas; ++j) {
            os << matriz.dados[i][j] << " ";
        }
    }
    return os;
}

int main() {
    try {
        Matriz m1(2, 2), m2(2,2);

        cin >> m1(0,0) >> m1(0,1) >> m1(1,0) >> m1(1,1);
        cin >> m2(0,0) >> m2(0,1) >> m2(1,0) >> m2(1,1);

        cout << (m1 + m2);
        cout << (m1 - m2);
        cout << (m1 * m2);

    } catch (const exception& e) {
        cerr << "Erro: " << e.what() << endl;
    }
    return 0;
}
*/