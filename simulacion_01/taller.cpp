#include <iostream>
#include "taller.h"

using namespace std;

Taller::Taller(int valormax)
{
    max_vehiculos = valormax;
}

Taller::~Taller()
{
    //por cada componente vehiculo invocar al operador delete...
    for(int i=0; i<max_vehiculos; i++){
    	delete lista_vehiculos[i];
	}
}

void Taller::meter(Vehiculo* v)
{
    //lista_de_vehiculos.add(v);
    if(num_vehiculos < max_vehiculos){
        lista_vehiculos[num_vehiculos] = v;
        num_vehiculos++;
    }else cout << "Taller lleno! MAX = " << max_vehiculos  << endl;

}

void Taller::arreglarVehiculos()
{
    //por cada vehículo de la lista invocar el método arrancar...
    for(int i=0; i < num_vehiculos; i++){
        lista_vehiculos[i]->arrancar();
    }
}
