#ifndef TALLER_H
#define TALLER_H
#include "vehiculos.h"
using namespace std;



/**********************************TALLER CLASS************************************/
class Taller
{
    private:
        int max_vehiculos;
        int num_vehiculos=0;
        Vehiculo *lista_vehiculos[1];
        //list lista_de_vehiculos;

    public:
        Taller();
        Taller(int valormax);
        virtual ~Taller();
        void meter(Vehiculo *v);
        void arreglarVehiculos();
};


#endif // TALLER_H