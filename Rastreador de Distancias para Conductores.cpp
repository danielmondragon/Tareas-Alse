#include <iostream>
using namespace std;

int main() {
    double distancias[10];
    double suma = 0;
    double promedio;
    double mayor = 0;
    int conductorMayor = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la distancia del conductor " << i + 1 << ": ";
        cin >> distancias[i];
        suma = suma + distancias[i];

        if (distancias[i] > mayor) {
            mayor = distancias[i];
            conductorMayor = i + 1;
        }
    }

    promedio = suma / 10;

    cout << "Distancia total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Conductor con mayor distancia: #" << conductorMayor << " con " << mayor << endl;

    return 0;
}