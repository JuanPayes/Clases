#include <iostream>
#include <windows.h>
using namespace std;

struct Temperatura
{
    float alta;
    float baja;
}temp;

void LeerTempActual(float &actual);
void RegistrarTemp (struct Temperatura &t);

int main()
{
    temp.alta = 0;
    temp.baja = 100;
    while (true)
    {
        RegistrarTemp(temp);
        cout<< "Temperaturas: "<< temp.baja << " - "<< temp.alta <<endl;
        Sleep(2000);
    }
    
    return 0;
}

void LeerTempActual(float &actual)
{
    int t = time(NULL);
    srand(t);
    cout<< " - tiempo: "<<t<<endl;
    actual = rand() % (48 + 1 );
}
void RegistrarTemp (struct Temperatura &t)
{
    float actual = 0;
    LeerTempActual(actual);
    cout<< " -> Lectura actual: "<< actual <<endl;
    if(actual > t.alta)
    {
        t.alta = actual;
    }
}