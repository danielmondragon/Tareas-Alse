#ifndef ITEMCARRITO_H
#define ITEMCARRITO_H

#include "Producto.h"

/**
 * @class ItemCarrito
 * @brief Representa un producto agregado al carrito con su cantidad.
 */
class ItemCarrito {
private:
    Producto producto;
    int cantidad;

public:
    ItemCarrito(Producto p, int c);
    float calcularSubtotal() const;
    std::string getNombreProducto() const;
    int getCantidad() const;
    void mostrarItem() const;
};

#endif
