#ifndef ALUNO_HPP
#define ALUNO_HPP
#include <iostream>
#include "../Pessoa/Pessoa.hpp"

class Aluno:public Pessoa{
    private:
        float CRA;
        int semestre;
    public:
        Aluno(std::string n,std::string t,std::string c,float cra,int s);
        ~Aluno(){};
        void exibir()const;
};

#endif