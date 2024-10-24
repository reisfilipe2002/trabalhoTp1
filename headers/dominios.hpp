#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED
#include <string>

class Nome {
    private:
        std::string nome;
        bool validar(const std::string& nome);

    public:
        bool setNome(const std::string& nome);
        std::string getNome() const;
};

// Implementação do método getNome
inline std::string Nome::getNome() const {
    return nome;
}
#endif DOMINIOS_HPP_INCLUDED
