#include <iostream>
using namespace std;
int num1, num2;

int main()
{
    cout<<"Que numeros quieres sumar?"<<endl;
    cin>>num1>>num2;
    int result = num1 + num2;
    cout<<"Ese es la suma de sus numeros "<< result;
    return 0;
}
