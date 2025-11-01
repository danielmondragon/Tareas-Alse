#include <iostream>
#include "Producto.h"
#include "CarritoCompras.h"
#include "Usuario.h"
using namespace std;

int main() {
    Producto p1("Laptop", 3500000, 10);
    Producto p2("Mouse", 80000, 30);
    Producto p3("Teclado", 150000, 20);

    CarritoCompras carrito;
    carrito.agregarProducto(p1, 2);
    carrito.agregarProducto(p2, 3);
    carrito.agregarProducto(p3, 1);

    carrito.mostrarCarrito();

    Usuario user("Daniel");
    user.comprar(carrito);
    user.mostrarHistorial();

    return 0;
}
