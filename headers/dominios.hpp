#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED
class Nome{
    private:
        char nome;
        bool validar(char);
    public:
        bool setNome(char);
        char getNome()const;
};

inline char Nome::getNome()const{
    return nome;
}

#endif DOMINIOS_HPP_INCLUDED
