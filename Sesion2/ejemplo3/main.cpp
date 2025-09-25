#include <iostream>
using namespace std;

// Pass by Pointer
void machaca1(int x, int* y)
{
    *y = x;
    return;
}

// Pass by Reference
void machaca2(int x, int& y)
{
    y = x;
    return;
}

int main(int argc, char** argv)
{
    int a, b;
    cout << "Escribe dos datos enteros:" << endl;
    cin >> a >> b;

    int copia = b;

    // machaca1 (Pass by Pointer)
    cout << "Antes de machaca1: " << a << " y " << b << endl;
    machaca1(a, &b);
    cout << "Despues de machaca1: " << a << " y " << b << endl << endl;

    b = copia; // restore b for the second method

    // machaca2 (Pass by Reference)
    cout << "Antes de machaca2: " << a << " y " << b << endl;
    machaca2(a, b);
    cout << "Despues de machaca2: " << a << " y " << b << endl;
    return 0;
}