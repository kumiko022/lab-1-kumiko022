#include <iostream>
using namespace std;

int main () {
    float kilometros;
    float millas;

    cout << "Ingrese los kilometros que quiere convertir a millas: " << endl;
    cin >> kilometros;

    millas = kilometros * 0.621;

    cout << kilometros << "kilometros son: " << millas << " millas." << endl;
    
    return 0;
}