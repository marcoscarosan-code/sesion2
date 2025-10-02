#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <cstdlib>
#include <iostream>
using namespace std;

class Persona
{
public:
    Persona(int edad)
    {
        edad = e;
        genero = rand() % 2; // 0 o 1
        generarDNI();
    }
    int getEadad() { return edad; }
    bool esMujer()
    {
        if(genero == 1) {
            return true;
        } else
            return false;
    }
    {
        ;
        void setEdad(int edad);
        void mostrar();
        ~Persona();

    private:
        int genero; // 1:mujer 0:hombre
        int edad;
        char dni[10];
    };

#endif // PERSONA_HPP
