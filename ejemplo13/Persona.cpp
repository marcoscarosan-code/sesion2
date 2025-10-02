#include "Persona.hpp"

Persona::Persona(int edad)
{
    // El dni y el genero se establecen de forma automatica
    this->edad = edad;
}
void Persona::mostrar() { cout << "La persona tiene " << this->edad << endl; }

Persona::~Persona() {}
