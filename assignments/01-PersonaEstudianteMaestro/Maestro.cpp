#include <iostream>
#include "Maestro.hpp"

Maestro::Maestro() {
    
}

Maestro::Maestro(std::string nombre, int edad, std::string departamento) : Persona(nombre, edad) {
    this->departamento = departamento;
    this->nombre = nombre;
    this->edad = edad;
}

std::string Maestro::getDepartamento() {
    return departamento;
}

void Maestro::muestraDatos() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Departamento: " << departamento << std::endl;
}
