#pragma once    
#include <string>
#include "Persona.hpp"


class Maestro : public Persona {
public:
    Maestro();
    Maestro(std::string nombre, int edad, std::string departamento);
    std::string getDepartamento();
    void muestraDatos();
private:
    std::string departamento;
};