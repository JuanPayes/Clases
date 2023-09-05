#include <iostream>
using namespace std;

//Arreglo

int main()
{
    string *nombre, *pais;
    int NumNom, NumPais;

    cout<< "Cuantos lugares turisticos quiere guardar?"<<endl;
    cin>> NumNom;

    nombre = new string[NumNom];
    for (int i = 0; i < NumNom; i++)
    {
        cout<<"Ingrese el nombre de el lugar turistico"<<endl;
        cin>> nombre[i];
    }
    delete []nombre;

    cout<< "Cuantos paises quiere guardar?"<<endl;
    cin>> NumPais;

    pais = new string[NumPais];
    for (int i = 0; i < NumPais; i++)
    {
        cout<<"Ingrese el nombre de el pais"<<endl;
        cin>> pais[i];
    }
    delete []pais; 
    
    return 0;
}
