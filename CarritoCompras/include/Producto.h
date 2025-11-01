#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

/**
 * @class Producto
 * @brief Representa un producto disponible en la tienda.
 */
class Producto {
private:
    std::string nombre;
    float precio;
    int stock;

public:
    Producto(std::string n, float p, int s);
    std::string getNombre() const;
    float getPrecio() const;
    int getStock() const;
    void reducirStock(int cantidad);
    void mostrarInfo() const;
};

#endif
