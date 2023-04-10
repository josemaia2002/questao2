#include <iostream>
#include "Animal.h"
#include <string>

using namespace std;

Animal::Animal() {
    this->idade = 0;
}

Animal::Animal(string nome, string especie, int idade) {
    this->nome = nome;
    this->especie = especie;
    this->idade = idade;
}

ostream &operator<<( ostream &output, const Animal &F ) { 
    output << "Nome: " << F.nome << "; Especie: " << F.especie << "; Idade: " << F.idade;
    return output;            
}

istream &operator>>( istream  &input, Animal &F ) { 
    input >> F.nome >> F.especie >> F.idade;
    return input;            
}

string Animal::getNome() {
    return this->nome;
}

void Animal::setNome(string nome) {
    this->nome = nome;
}

string Animal::getEspecie() {
    return this->especie;
}

void Animal::setEspecie(string especie) {
    this->especie = especie;
}

int Animal::getIdade() {
    return this->idade;
}

void Animal::setIdade(int idade) {
    this->idade = idade;
}