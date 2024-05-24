#include "./Pessoa/Pessoa.hpp"
#include "./Aluno/Aluno.hpp"
#include "./Professor/Professor.hpp"

int main(){
    Pessoa *ps = new Pessoa("Antonio","(92)77844565","456.198.111-52");
    ps->exibir();
    delete ps;
    Professor *pf = new Professor("Everton","(84)991544065","126.456.445-99",8,"TI");
    pf->exibir();
    delete pf;
    Aluno *al = new Aluno("Antonio","(92)77844565","456.198.111-52",7.1,5);
    al->exibir();
    delete al;
    return 0;
}