#include <iostream>
using namespace std;

int main() {
    double precio1, precio2, precio3;
    int cant1, cant2, cant3;

    cout << "Ingrese precio y cantidad del producto 1: ";
    cin >> precio1 >> cant1;
    cout << "Ingrese precio y cantidad del producto 2: ";
    cin >> precio2 >> cant2;
    cout << "Ingrese precio y cantidad del producto 3: ";
    cin >> precio3 >> cant3;

    double subtotal = (precio1 * cant1) + (precio2 * cant2) + (precio3 * cant3);
    double impuesto = subtotal * 0.08;
    double total = subtotal + impuesto;

    if (total > 100) {
        total = total * 0.90; 
    }

    cout << "El costo total es: $" << total << endl;

    return 0;
}