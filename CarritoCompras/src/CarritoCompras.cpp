#include "CarritoCompras.h"
#include <iostream>
using namespace std;

void CarritoCompras::agregarProducto(Producto p, int cantidad) {
    items.push_back(ItemCarrito(p, cantidad));
    p.reducirStock(cantidad);
}

void CarritoCompras::eliminarProducto(string nombre) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getNombreProducto() == nombre) {
            items.erase(it);
            cout << "Producto eliminado: " << nombre << endl;
            return;
        }
    }
    cout << "Producto no encontrado en el carrito." << endl;
}

float CarritoCompras::calcularTotal() const {
    float total = 0;
    for (const auto &item : items)
        total += item.calcularSubtotal();
    return total;
}

void CarritoCompras::mostrarCarrito() const {
    cout << "\n--- Carrito de Compras ---\n";
    for (const auto &item : items)
        item.mostrarItem();
    cout << "Total: $" << calcularTotal() << endl;
}

vector<ItemCarrito> CarritoCompras::getItems() const {
    return items;
}
