#include <iostream>
#include "Vehiculo.h"
using namespace std;

Vehiculo::Vehiculo(string m, string mo, string p, bool d) {
    marca = m;
    modelo = mo;
    placa = p;
    disponible = d;
}

string Vehiculo::getPlaca() const { return placa; }
bool Vehiculo::getDisponible() const { return disponible; }
void Vehiculo::setDisponible(bool estado) { disponible = estado; }

void Vehiculo::mostrarInformacion() const {
    cout << "Marca: " << marca << ", Modelo: " << modelo << ", Placa: " << placa;
}
