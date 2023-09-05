#include <iostream>
using namespace std;

struct Producto
{
    string nombre;
    float precio;
    string catergoria[2];
} producto[3];
void tienda();
int main()
{
    tienda();
    //ptr->nombre = "Cuaderno";
    //ptr->precio = 1.25;
    //cout<< ptr->nombre << " "<< ptr->precio;
    return 0;
}

void tienda(){
    struct Producto *ptr;
    ptr = producto;
    for(int i = 0; i < 3; i++){
        cout<<"Ingrese el nombre del producto "<<endl;
        cin>>ptr[i].nombre;
        for (int j = 0; j < 2; j++)
        {
            cout<< "Ingrese la categoria: "<<endl;
            cin>> ptr[i].catergoria[j];
        }
        
        cout<<"Ingrese el precio del producto "<<endl;
        cin>>ptr[i].precio;
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<ptr[i].nombre<<endl;
        for (int j = 0; j < 2; j++)
        {
            cout<< ptr[i].catergoria[j]<<endl;
        }
        cout<<ptr[i].precio<<endl;
    }
}