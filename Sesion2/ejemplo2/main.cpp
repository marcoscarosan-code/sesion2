#include <iostream>
using namespace std;

// Ejemplos: paso de argumentos

// Pass by Value (returns the squared value, doesn't change the original)
int cuadPorValor (int a)
{
    return a = a * a;
}

// Pass by Pointer (changes the original variable through its memory address)
void cuadPorInd(int* b)
{
    *b = (*b) * (*b);
}

// Pass by Reference (changes the original variable through an alias)
void cuadPorRef (int& c)
{
    c = c * c;
}

int main(int argc, char** argv)
{
    int a = 5, b = 6, c = 7;

    cuadPorValor(a);  // a remains 5
    cuadPorInd(&b);   // b changes to 36
    cuadPorRef(c);    // c changes to 49

    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    return 0;
}
