#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include "CarritoCompras.h"

/**
 * @class Usuario
 * @brief Representa un usuario con historial de compras.
 */
class Usuario {
private:
    std::string nombre;
    std::vector<CarritoCompras> historial;

public:
    Usuario(std::string n);
    void comprar(CarritoCompras carrito);
    void mostrarHistorial() const;
};

#endif
