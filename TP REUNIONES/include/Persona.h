#ifndef PERSONA_H
#define PERSONA_H
#include <string>
class Persona
{
    public:
        Persona();
        Persona(std::string nombre , std::string Persona);

        void setnombre( std::string nombre);
        void setapellido(std::string apellido);
        std::string getapellido();
        std::string getnombre();

    //protected:

    private:
        std::string _nombre;
        std::string _apellido;

};

#endif // PERSONA_H
