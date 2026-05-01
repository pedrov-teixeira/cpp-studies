#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

class Prioridade{
    private:
        string valor;
        void validar(string valor);

    public:
        void setValor(string valor);
        string getValor() const;
};

class Codigo{
    private:
        string valor;
        void validar(string valor);
    
    public:
        void setValor(string valor);
        string getValor() const;
};

class Nome{
    private:
        string valor;
        void validar(string valor);
    
    public:
        void setValor(string valor);
        string getValor() const;
};

class Tempo{
    private:
        int valor;
        void validar(int valor);

    public:
        void setValor(int valor);
        int getValor() const;
};

class Texto{
    private:
        string valor;
        void validar(string valor);

    public:
        void setValor(string valor);
        string getValor() const;
};

#endif // CODIGO_H_INCLUDED