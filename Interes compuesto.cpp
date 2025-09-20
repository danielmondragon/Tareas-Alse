#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double P, r, A;
    int n, t;

    cout << "Ingrese el capital inicial: ";
    cin >> P;
    cout << "Ingrese la tasa de interes anual: ";
    cin >> r;
    cout << "Ingrese el numero de veces que se aplica el interes al a;o: ";
    cin >> n;
    cout << "Ingrese el numero de a;os (t): ";
    cin >> t;

    A = P * pow((1 + r / n), n * t);

    cout << "El monto final es: " << A << endl;

    return 0;
}
