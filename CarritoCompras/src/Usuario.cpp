#include "Usuario.h"
#include <iostream>
using namespace std;

Usuario::Usuario(string n) {
    nombre = n;
}

void Usuario::comprar(CarritoCompras carrito) {
    historial.push_back(carrito);
    cout << nombre << " ha realizado una compra de $" << carrito.calcularTotal() << endl;
}

void Usuario::mostrarHistorial() const {
    cout << "\n--- Historial de Compras de " << nombre << " ---\n";
    for (size_t i = 0; i < historial.size(); ++i) {
        cout << "Compra #" << i + 1 << ": $" << historial[i].calcularTotal() << endl;
    }
}
