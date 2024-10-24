#include "dominios.hpp"
bool Nome::validar(const std::string& nome) {
    // Verifica se o nome tem entre 1 e 30 caracteres
    if (nome.length() > 0 && nome.length() <= 30) {
        return true;
    }
    return false;
}

// Implementação do método setNome
bool Nome::setNome(const std::string& nome) {
    if (validar(nome)) {
        this->nome = nome;
        return true;
    }
    return false;
}
