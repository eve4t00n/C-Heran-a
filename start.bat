@echo off

REM Compilação e Execução
g++ ./src/main.cpp ./src/Pessoa/Pessoa.cpp ./src/Aluno/Aluno.cpp ./src/Professor/Professor.cpp -o main.exe
main.exe