#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    string placa;
    bool disponible;

public:
    Vehiculo(string m, string mo, string p, bool d = true);
    string getPlaca() const;
    bool getDisponible() const;
    void setDisponible(bool estado);
    virtual void mostrarInformacion() const;
    virtual ~Vehiculo() {}
};

#endif
