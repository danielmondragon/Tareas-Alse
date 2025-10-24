#ifndef SISTEMA_ALQUILER_H
#define SISTEMA_ALQUILER_H

#include <vector>
#include "Vehiculo.h"
#include "Auto.h"
#include "Bicicleta.h"
using namespace std;

class SistemaAlquiler {
private:
    vector<Vehiculo*> vehiculos;

public:
    void registrarVehiculo();
    void mostrarDisponibles() const;
    void alquilarVehiculo();
    void devolverVehiculo();
    ~SistemaAlquiler();
};

#endif
