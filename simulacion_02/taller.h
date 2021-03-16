#ifndef TALLER_H
#define TALLER_H
#include <vector>
#include "vehiculos.h"
using namespace std;



/**********************************TALLER CLASS************************************/
class Taller
{
    private:
        int capacidadMaximaVehiculos;
        int cantidadActualVehiculos;
        vector<Vehiculo*> vehiculos; 

    public:
        Taller(int capacidad);
        virtual ~Taller();
        void meter(Vehiculo *v);
        void arreglarVehiculos();
        int getCantidadActualDeVehiculos();
};


#endif // TALLER_H