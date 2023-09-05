#include <iostream>
using namespace std;

// made by Omar
void cambio(int *x, int *y);

int main()
{
    int x = 3, y =5;

    cout<< x <<" "<< y<< endl;
    cambio(&x,&y);
    cout << x << " " << y << endl;
    return 0;
}
void cambio(int *x, int *y)
{
 int cambio = *x;
    *x = *y;
    *y = cambio;
}
