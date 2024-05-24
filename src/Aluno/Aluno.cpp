#include <iostream>
#include "Aluno.hpp"

Aluno::Aluno(std::string n,std::string t,std::string c,float cra,int s):Pessoa(n,t,c),CRA(cra),semestre(s){};
void Aluno::exibir()const{
    std::cout << "------------------------------\n";
    std::cout << "\tAluno: " << nome << '\n';
    std::cout << "\tTelefone: " << telefone << '\n';
    std::cout << "\tCPF: " << cpf << '\n';
    std::cout << "\tCRA: " << CRA << '\n';
    std::cout << "\tSemestre: " << semestre << '\n';
    std::cout << "------------------------------\n";
}