#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <string>
#include <stdexcept>

class Prioridade{
    private:
        std::string valor;
        void validar(std::string valor);

    public:
        void setValor(std::string valor);
        std::string getValor() const;
};

class Codigo{
    private:
        std::string valor;
        void validar(std::string valor);
    
    public:
        void setValor(std::string valor);
        std::string getValor() const;
};

class Nome{
    private:
        std::string valor;
        void validar(std::string valor);
    
    public:
        void setValor(std::string valor);
        std::string getValor() const;
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
        std::string valor;
        void validar(std::string valor);

    public:
        void setValor(std::string valor);
        std::string getValor() const;
};

#endif // CODIGO_H_INCLUDED