#include <iostream>
#include "taller.h"

using namespace std;

Taller::Taller(int capacidad)
{
    capacidadMaximaVehiculos = capacidad;
    cantidadActualVehiculos = 0;
}
Taller::~Taller()
{
    for(int i=0; i < vehiculos.size(); i++){
        delete vehiculos[i];
    }
}
void Taller::meter(Vehiculo *v)
{
    vehiculos.push_back(v);
    cantidadActualVehiculos++;
}
void Taller::arreglarVehiculos()
{
    //por cada vehículo de la lista invocar el método arrancar...
    for(int i=0; i < cantidadActualVehiculos; i++){
        vehiculos[i]->arrancar();
    }
}
int Taller::getCantidadActualDeVehiculos()
{
    return this->cantidadActualVehiculos;
}