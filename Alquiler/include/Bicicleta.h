#ifndef BICICLETA_H
#define BICICLETA_H

#include "Vehiculo.h"

class Bicicleta : public Vehiculo {
private:
    string tipo;

public:
    Bicicleta(string m, string mo, string p, string t);
    void mostrarInformacion() const override;
};

#endif
