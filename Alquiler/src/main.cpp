#include <iostream>
#include "SistemaAlquiler.h"
using namespace std;

int main() {
    SistemaAlquiler sistema;
    int opcion;

    do {
        cout << "\n==== MENU SISTEMA DE ALQUILER ====" << endl;
        cout << "1. Registrar vehiculo" << endl;
        cout << "2. Mostrar vehiculos disponibles" << endl;
        cout << "3. Alquilar vehiculo" << endl;
        cout << "4. Devolver vehiculo" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: sistema.registrarVehiculo(); break;
            case 2: sistema.mostrarDisponibles(); break;
            case 3: sistema.alquilarVehiculo(); break;
            case 4: sistema.devolverVehiculo(); break;
            case 5: cout << "Saliendo del sistema..." << endl; break;
            default: cout << "Opcion no valida." << endl;
        }
    } while (opcion != 5);

    return 0;
}
