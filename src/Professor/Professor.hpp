#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP
#include <iostream>
#include "../Pessoa/Pessoa.hpp"

class Professor:public Pessoa{
    private:
        int qtdDisciplinas;
        std::string departamento;
    public:
        Professor(std::string n,std::string t,std::string c,int qD,std::string d);
        ~Professor(){};
        void exibir()const;
};

#endif