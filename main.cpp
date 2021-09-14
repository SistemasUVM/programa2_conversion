#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // declaracion variables
    float x,r;

    // cout para impresion
    cout << "ingresa el numero a convertir"<< endl;

    // cin para input
    cin >> x;

    // operacion
    r=x*.3937;

    cout << "el numero "<< x << " en pulgadas es " << r << endl;


    return 0;
}
