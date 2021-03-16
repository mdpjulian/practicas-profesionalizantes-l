#include <iostream>
#include <string>
#include "taller.h"
#include "vehiculos.h"

using namespace std;



int main()
{
    
    Taller *taller1 = new Taller(3);
    Vehiculo *coche1 = new Coche("rojo", "honda", 4); 
    Vehiculo *moto1 = new Moto("verde", "honda", 4); 
    Vehiculo *coche2 = new Coche("azul", "honda", 4);
    
    taller1->meter(coche1);
    taller1->meter(moto1);
    taller1->meter(coche2);
    taller1->arreglarVehiculos();

    cout << "cantidad actual de vehiculos = " << taller1->getCantidadActualDeVehiculos() << endl;


    delete taller1;
    

   // Pauseo pantalla
    cin.sync();
    cin.get();

    return 0;
}