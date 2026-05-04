#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED
#include "../dominios/dominios.hpp"

class Pessoa {
    private:
        Email email;
        Nome nome;
        Senha senha;
        Papel papel;
    public:
        //Set
        void setEmail(const Email& email) {
            this->email = email;
        }

        void setNome(const Nome& nome) {
            this->nome = nome;
        }

        void setSenha(const Senha& senha) {
            this->senha = senha;
        }

        void setPapel(const Papel& papel) {
            this->papel = papel;
        }

        //Get
        Email getEmail() const {
            return email;
        }

        Nome getNome() const {
            return nome;
        }

        Senha getSenha() const {
            return senha;
        }

        Papel getPapel() const {
            return papel;
        }

};

class PlanoDeSprint {
    private:
        Codigo codigo;
        Texto objetivo;
        Tempo capacidade;
    public:
        //Set
        void setCodigo(const Codigo& codigo) {
            this->codigo = codigo;
        }
        
        void setTexto(const Texto& objetivo) {
            this->objetivo = objetivo;
        }

        void setcapacidade(const Tempo& capacidade) {
            this->capacidade = capacidade;
        }

        //Get
        Codigo getCodigo() const {
            return codigo;
        }

        Texto getTexto() const {
            return objetivo;
        }

        Tempo getCapacidade() const {
            return capacidade;
        }
};


#endif // ENTIDADES_HPP_INCLUDED
