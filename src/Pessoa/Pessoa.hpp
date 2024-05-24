#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <iostream>

class Pessoa{
    protected:
        std::string nome,telefone,cpf;
    public:
        Pessoa(std::string n,std::string t,std::string c);
        ~Pessoa(){};
        void exibir()const;
};

#endif