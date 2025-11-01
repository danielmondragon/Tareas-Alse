#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include <vector>
#include "ItemCarrito.h"

/**
 * @class CarritoCompras
 * @brief Permite agregar, eliminar productos y calcular el total.
 */
class CarritoCompras {
private:
    std::vector<ItemCarrito> items;

public:
    void agregarProducto(Producto p, int cantidad);
    void eliminarProducto(std::string nombre);
    float calcularTotal() const;
    void mostrarCarrito() const;
    std::vector<ItemCarrito> getItems() const;
};

#endif
