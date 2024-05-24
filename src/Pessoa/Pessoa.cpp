#include <iostream>
#include "Pessoa.hpp"

Pessoa::Pessoa(std::string n,std::string t,std::string c):nome(n),telefone(t),cpf(c){}

void Pessoa::exibir()const{
    std::cout << "------------------------------\n";
    std::cout << "\tNome: " << nome << '\n';
    std::cout << "\tTelefone: " << telefone << '\n';
    std::cout << "\tCPF: " << cpf << '\n';
    std::cout << "------------------------------\n";
}