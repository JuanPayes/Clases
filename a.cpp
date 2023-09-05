#include <iostream>
using namespace std;

struct Producto
{
    string nombre;
    float precio;
} producto;

int main()
{
    struct Producto *ptr;
    ptr = &producto;

    ptr->nombre = "Cuaderno";
    ptr->precio = 1.25;

    cout<< ptr->nombre << " "<< ptr->precio;
    return 0;
}
