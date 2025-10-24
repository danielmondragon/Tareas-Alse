#include <iostream>
#include "Bicicleta.h"
using namespace std;

Bicicleta::Bicicleta(string m, string mo, string p, string t) : Vehiculo(m, mo, p) {
    tipo = t;
}

void Bicicleta::mostrarInformacion() const {
    cout << "[BICICLETA] ";
    Vehiculo::mostrarInformacion();
    cout << ", Tipo: " << tipo
         << ", Disponible: " << (disponible ? "Si" : "No") << endl;
}
