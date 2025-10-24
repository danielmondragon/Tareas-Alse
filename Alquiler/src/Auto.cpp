#include <iostream>
#include "Auto.h"
using namespace std;

Auto::Auto(string m, string mo, string p, int c) : Vehiculo(m, mo, p) {
    capacidadPasajeros = c;
}

void Auto::mostrarInformacion() const {
    cout << "[AUTO] ";
    Vehiculo::mostrarInformacion();
    cout << ", Capacidad: " << capacidadPasajeros
         << ", Disponible: " << (disponible ? "Si" : "No") << endl;
}
