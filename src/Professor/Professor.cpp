#include <iostream>
#include "Professor.hpp"

Professor::Professor(std::string n,std::string t,std::string c,int qD,std::string d):Pessoa(n,t,c),qtdDisciplinas(qD),departamento(d){};
void Professor::exibir()const{
    std::cout << "------------------------------\n";
    std::cout << "\tProfessor: " << nome << '\n';
    std::cout << "\tTelefone: " << telefone << '\n';
    std::cout << "\tCPF: " << cpf << '\n';
    std::cout << "\tQuantidade de Disciplinas: " << qtdDisciplinas << '\n';
    std::cout << "\tDepartamento: " << departamento << '\n';
    std::cout << "------------------------------\n";
}