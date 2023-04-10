#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"
#include "Zoo.h"

using namespace std;

void filter_especie(vector<Animal> v, vector<Animal>::iterator it, string especie){
    for(it = v.begin(); it != v.end(); it++)
        if(it->getEspecie() == especie)
            cout << *it << endl;
}

int main(){    
    vector<Animal>::iterator it;
    Animal a1, a2, a3, a4, a5, a6;

    a1.setNome("Francisco");
    a1.setEspecie("Ornitorrinco");
    a1.setIdade(2);

    a2.setNome("Foca");
    a2.setEspecie("Babaleia");
    a2.setIdade(5);

    a3.setNome("Catatau");
    a3.setEspecie("Urso");
    a3.setIdade(7);

    a4.setNome("Totuga");
    a4.setEspecie("Tarataruga");
    a4.setIdade(17);

    a5.setNome("Smilimguido");
    a5.setEspecie("Chumiga");
    a5.setIdade(2);
    cin >> a6;

    Zoo z1;
    z1.v.push_back(a1);
    z1.v.push_back(a2);
    z1.v.push_back(a3);
    z1.v.push_back(a4);
    z1.v.push_back(a5);
    z1.v.push_back(a6);

    for(auto it = z1.v.begin(); it != z1.v.end(); it++)
        cout << *it << endl;

    cout << endl;

    filter_especie(z1.v, it, "Urso");

    cout << endl;

    for(int i = 0; i < z1.v.size(); i++){
        if(z1.v[i].getIdade() > 10){
            it = z1.v.begin();
            z1.v.erase(it+i);
        }
    }

    for(auto it = z1.v.begin(); it != z1.v.end(); it++)
        cout << *it << endl;

    return 0;
}