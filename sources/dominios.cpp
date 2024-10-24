#include "dominios.hpp"

bool Nome::validar(char nome) {
    if(nome > 0 && nome < 30){
        return true;
    }
};
bool Nome::setNome(char nome){
    if(validar(nome)){
        this->nome = nome;
        return true;
    }
    return false;
};
