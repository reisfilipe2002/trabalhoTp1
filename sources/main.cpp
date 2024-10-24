#include <iostream>
#include "dominios.hpp"
using namespace std;

int main() {
    Nome *ptr;
    ptr = new Nome();

    
    if (ptr->setNome("João da Silva Pereira")) {
        cout << "Nome=" << ptr->getNome() << endl;
    } else {
        cout << "Nome inválido" << endl;
    }

  
    if (ptr->setNome("João da Silva Pereira Borges Neto Primo")) {
        cout << "Nome=" << ptr->getNome() << endl;
    } else {
        cout << "Nome inválido" << endl;
    }

    delete ptr;

    return 0;
}



