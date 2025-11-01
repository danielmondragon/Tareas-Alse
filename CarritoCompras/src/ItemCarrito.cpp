#include "ItemCarrito.h"
using namespace std;

ItemCarrito::ItemCarrito(Producto p, int c) : producto(p), cantidad(c) {}

float ItemCarrito::calcularSubtotal() const {
    return producto.getPrecio() * cantidad;
}

string ItemCarrito::getNombreProducto() const { return producto.getNombre(); }
int ItemCarrito::getCantidad() const { return cantidad; }

void ItemCarrito::mostrarItem() const {
    cout << producto.getNombre() << " x" << cantidad
         << " = $" << calcularSubtotal() << endl;
}
