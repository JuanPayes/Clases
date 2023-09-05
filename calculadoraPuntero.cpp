#include <iostream>
using namespace std;

void calculadora(int, int, int &, int &, int &);

int main()
{   

    int suma =0;
    int resta = 0;
    int multiplicacion =0;
    
    calculadora(5, 2, suma, resta, multiplicacion);
    cout<<"suma "<< suma<< endl;
    cout<<"resta "<< resta<< endl;
    cout<<"multiplicacion "<<multiplicacion<< endl;
    return 0;
}
void calculadora(int n, int m, int &suma, int &resta, int &multiplicacion)
{
    suma = n + m;
    resta = n - m;
    multiplicacion = n * m;
}