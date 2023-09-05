#include <iostream>

using namespace std;

int main()
{
    /*int *ptr;
    ptr = (int*)malloc(100*sizeof(int));
    
    free(ptr); 

    int *ptr;
    int tam;
    ptr = new int [tam];
    delete ptr; */

    /* int *ptr;
    ptr = new int

    if (ptr == NULL)
    {
        cout<<"Error de asignacion de memoria";
    }else{
        cout<<"Direccion de memoria "<< ptr;
    }
    delete ptr; */

    int *edad, numEdad;

    cout<<"Cuantas edad se vana a registrar? "<<endl;
    cin>>numEdad;
    edad = new int[numEdad];
    for (int i = 0; i < numEdad; i++)
    {
        cout<<"Ingrese la edad";
        cin>> edad[i];
    }
    

    delete [] edad;



    return 0;
}
