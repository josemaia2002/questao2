#include <iostream>
#include <string>

using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {

private:
    string nome;
    string especie;
    int idade;

public:
    Animal();
    Animal(string nome, string especie, int idade);    
    friend ostream &operator<<(ostream &output, const Animal &F);
    friend istream &operator>>(istream  &input, Animal &F);

    string getNome();
    void setNome(string nome);

    string getEspecie();
    void setEspecie(string especie);

    int getIdade();
    void setIdade(int idade);
};

#endif