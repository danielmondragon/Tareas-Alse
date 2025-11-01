#include "Producto.h"
using namespace std;

Producto::Producto(string n, float p, int s) {
    nombre = n;
    precio = p;
    stock = s;
}

string Producto::getNombre() const { return nombre; }
float Producto::getPrecio() const { return precio; }
int Producto::getStock() const { return stock; }

void Producto::reducirStock(int cantidad) {
    if (cantidad <= stock) stock -= cantidad;
    else cout << "No hay suficiente stock." << endl;
}

void Producto::mostrarInfo() const {
    cout << nombre << " - $" << precio << " (" << stock << " disponibles)" << endl;
}
