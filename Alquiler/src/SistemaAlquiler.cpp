#include <iostream>
#include "SistemaAlquiler.h"
using namespace std;

void SistemaAlquiler::registrarVehiculo() {
    int tipo;
    cout << "\n1. Registrar Auto\n2. Registrar Bicicleta\nSeleccione: ";
    cin >> tipo;
    cin.ignore();

    string marca, modelo, placa;
    cout << "Marca: ";
    getline(cin, marca);
    cout << "Modelo: ";
    getline(cin, modelo);
    cout << "Placa: ";
    getline(cin, placa);

    if (tipo == 1) {
        int capacidad;
        cout << "Capacidad de pasajeros: ";
        cin >> capacidad;
        cin.ignore();
        vehiculos.push_back(new Auto(marca, modelo, placa, capacidad));
        cout << "Auto registrado correctamente.\n";
    } else if (tipo == 2) {
        string tipoBici;
        cout << "Tipo de bicicleta (Montaña/Urbana): ";
        getline(cin, tipoBici);
        vehiculos.push_back(new Bicicleta(marca, modelo, placa, tipoBici));
        cout << "Bicicleta registrada correctamente.\n";
    } else {
        cout << "Opcion no valida.\n";
    }
}

void SistemaAlquiler::mostrarDisponibles() const {
    cout << "\nVehiculos disponibles:\n";
    if (vehiculos.empty()) {
        cout << "No hay vehiculos registrados.\n";
        return;
    }
    for (auto v : vehiculos) {
        if (v->getDisponible())
            v->mostrarInformacion();
    }
}

void SistemaAlquiler::alquilarVehiculo() {
    string placa;
    cout << "Ingrese la placa del vehiculo a alquilar: ";
    getline(cin, placa);
    for (auto v : vehiculos) {
        if (v->getPlaca() == placa) {
            if (v->getDisponible()) {
                v->setDisponible(false);
                cout << "Vehiculo alquilado correctamente.\n";
            } else {
                cout << "El vehiculo ya esta alquilado.\n";
            }
            return;
        }
    }
    cout << "No se encontro ningun vehiculo con esa placa.\n";
}

void SistemaAlquiler::devolverVehiculo() {
    string placa;
    cout << "Ingrese la placa del vehiculo a devolver: ";
    getline(cin, placa);
    for (auto v : vehiculos) {
        if (v->getPlaca() == placa) {
            if (!v->getDisponible()) {
                v->setDisponible(true);
                cout << "Vehiculo devuelto correctamente.\n";
            } else {
                cout << "El vehiculo ya estaba disponible.\n";
            }
            return;
        }
    }
    cout << "No se encontro ningun vehiculo con esa placa.\n";
}

SistemaAlquiler::~SistemaAlquiler() {
    for (auto v : vehiculos)
        delete v;
}
