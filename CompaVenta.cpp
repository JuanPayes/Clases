#include <iostream>
#include <windows.h>
#include<stdlib.h>
using namespace std;

struct Mercado
{
    float compra;
    float venta;
    string nombreEmpresa;
}Merca;

void LeerMercaActual(float &actual);
void RegistrarMerca(struct Mercado &t);

int main()
{
    
    Merca.compra = 100;
    Merca.venta = 200;
    while (true)
    {
        RegistrarMerca(Merca);
        cout<< "Mercado: "<< Merca.venta << " - "<< Merca.compra <<endl;
        Sleep(5000);
    }
    
    return 0;
}

void LeerMercaActual(float &actual)
{

    int t = time(NULL);
    srand(t);
    cout<< " - tiempo: "<<t<<endl;
    actual = rand() % (200 + 1 );
}
void RegistrarMerca (struct Mercado &t)
{
    float actual = 0;
    LeerMercaActual(actual);
    cout<< " -> Lectura actual: "<< actual <<endl;
    if(actual > t.compra)
    {
        t.compra = actual;
    }
}